/*=====================================================================================
 File name: SIM_CUE_CVI.H          
                    
 Originator: syntron	

 Description:   Cue Method Of DOF6，Inverse Solution，UDP Communication .                 
                 

=====================================================================================
 History:  (MM-DD-YY)
-------------------------------------------------------------------------------------
 12-30-2015	Version 2.0
-------------------------------------------------------------------------------------*/

#ifndef __SIM_CUE_CVI_H__
#define __SIM_CUE_CVI_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

#include <stdlib.h>
		

//游戏参数
typedef struct	{
					//游戏中飞机实时的运动值
					float	F32ReciveAlfaRad; /* 单位：弧度*/
					float	F32ReciveBetaRad; /* 单位：弧度*/
					float	F32ReciveGammaRad; /* 单位：弧度*/
					float	F32ReciveXAcceG; /* 单位：重力加速度*/ 
					float	F32ReciveYAcceG; /* 单位：重力加速度*/ 
					float	F32ReciveZAcceG; /* 单位：重力加速度*/ 
					long int	I32PlayUpos;//第4轴位置信息

		}DOF6_GAME_PARA;

// XYZ_LINE_ACC
typedef struct	{	float	F32T1;/* 时间因子 T1  */					
					float	F32T2;/* 时间因子 T2   */					
					float	F32T3;/* 时间 T3  */
					float	F32T4;/*  时间因子 T4  */   
					float	F32T5; /*  时间因子 T5  */
					float	F32T6; /*  时间因子 T6  */ 
					float	F32T7; /*  时间因子 T7  */ 
					float	F32T8; /*  时间因子 T8  */ 
		
					float	F32C1;/* 加速度阈值1   */	
					float	F32C2;/* 加速度阈值2   */	 
					float	F32C3;/* 加速度阈值3   */  
					float	F32C4;/* 加速度阈值4   */	
					float	F32C5;/* 加速度阈值5   */	 
					float	F32C6;/* 加速度阈值6   */
					float	F32C7;/* 加速度阈值7   */	
					float	F32C8;/* 加速度阈值8   */	 
			
					float	F32K1;/*  比例因子1 */
					float	F32K2;/*  比例因子2 */
					float	F32K3;/*  比例因子3 */
					float	F32K4;/*  比例因子4 */ 
					float	F32K5;/*  比例因子5 */
					float	F32K6;/*  比例因子6 */
					float	F32K7;/*  比例因子7 */
					float	F32K8;/*  比例因子8 */
			
		} DOF6_CUE_PARA;  

//平台的机械参数
typedef struct	{	
				
					//游戏中飞机的最大运动幅度
					float	F32AlfaMaxRad; /* 单位：弧度 */
					float	F32BetaMaxRad; /* 单位：弧度 */
					float	F32GammaMaxRad;  /* 单位：弧度 */
					float	F32XAcceMaxG;  /* 单位：重力加速度 */
					float	F32YAcceMaxG;  /* 单位：重力速度 */
					float	F32ZAcceMaxG;  /* 单位：重力加速度 */
					
					//三自由度平台
					float	F32TriangleHemMm; /* 三角形底边长度，单位：毫米 */ 
					float	F32HeightOfTriangleHemMm; /* 三角形底边高，单位：毫米 */ 
					float	F32HeightToTopMarkMm;/* 三角形顶点到座椅中心点的距离，单位：毫米 */
					
					//六自由度平台上下平面的尺寸
					float	F32StaticShortMm;  /* 下平台短边，单位：毫米 */
					float	F32StaticDiameterMm;  /* 下平台直径，单位：毫米 */
					float	F32MovingShortMm;  /* 上平台短边，单位：毫米 */
					float	F32MovingDiameterMm;  /* 上平台直径，单位：毫米 */	
			
					//相对于初始坐标的旋转量
					float	F32XAxisRotAngleDeg; /* 坐标旋转角度 */
			
					//平台机械结构决定其的运动范围
					float	F32PlatformAlfaMaxDeg; /* Alfa最大运动范围，单位：度 */
					float	F32PlatformBetaMaxDeg; /* Beta最大运动范围，单位：度 */
					float	F32PlatformGammaMaxDeg;/* Gamma最大运动范围，单位：度 */
					float	F32PlatformXMaxMm; /* X平移最大运动范围，单位：毫米 */
					float	F32PlatformYMaxMm; /* Y平移最大运动范围，单位：毫米 */
					float	F32PlatformZMaxMm;/* Z平移最大运动范围，单位：毫米 */
		   
					//电动缸的参数
					float	F32AccessDistanceUnitMm; /* 电动缸的行程，单位：毫米 */
					float	F32LeadDistanceUnitMm; /* 电动缸的导程，单位：毫米 */
					float	F32MinLongofCylinderMm; /* 电动缸的最小长度，单位：毫米 */
			
					//齿轮比
					float	F32GearOne; /* 1号轴电子齿轮比 */
					float	F32GearTwo; /* 2号轴电子齿轮比 */
					float	F32GearThree; /* 3号轴电子齿轮比 */
					float	F32GearFour; /* 4号轴电子齿轮比 */
					float	F32GearFive; /* 5号轴电子齿轮比 */
					float	F32GearSix; /* 6号轴电子齿轮比 */
			
		}DOF6_MECH_PARA;


//UDP端口号和采样时间
typedef struct	{	float	F32FlightSamplingPeriods; // 飞行采样时间，单位：秒*/
					short	I16HostTxPort; /* 主机发送UDP端口 */
					short	I16HostRxPort; /* 主机接收UDP端口 */ 
				    short	I16MboxTxPort; /* MBOX发送UDP端口 */
				    short	I16MboxRxPort; /* MBOX接收UDP端口 */
			
					short	I16WhoAcceptCode ;
					short	I16WhoReplyCode;
					int	I16BaseDoutCode;//特效输出
					long int I32PlayLine;//校验输出
					
			}UDP_PORT_PARA;

//叠加的六个轴特效位置信息
typedef struct {	
					int I32PlayXpos; //X轴位置信息
					int I32PlayYpos; //Y轴位置信息
					int I32PlayZpos; //Z轴位置信息
					int I32PlayUpos; //U轴位置信息
					int I32PlayVpos; //V轴位置信息
					int I32PlayWpos; //W轴位置信息

			}DOF6_POSTION_PARA;
// All 
typedef struct	{	DOF6_CUE_PARA	XDof6CuePara;	
					DOF6_CUE_PARA	YDof6CuePara;	
					DOF6_CUE_PARA	ZDof6CuePara;	
					DOF6_GAME_PARA	Dof6GamePara;
					DOF6_MECH_PARA	Dof6MechPara;
					UDP_PORT_PARA	UdpPortPara;
			
		} DOF6_SYS_PARA;


/*		#define	DOF6_SYS_PARA_DEFAULTS 		{	{0.01,120e-3,1.2,0.01,0.1,0.3,0.5,0.9,0.05,0.02,0.05,1.0,1.0,1.0,1.0,1.0,1.0,2.0,1.0,1.0,1.0,1.0,1.0,1.0},\
										{0.01,120e-3,1.2,0.01,0.1,0.3,0.5,0.9,0.05,0.02,0.05,1.0,1.0,1.0,1.0,1.0,1.0,2.0,1.0,1.0,1.0,1.0,1.0,1.0},\
										{0.01,120e-3,1.2,0.01,0.1,0.3,0.5,0.9,0.05,0.02,0.05,1.0,1.0,1.0,1.0,1.0,1.0,2.0,1.0,1.0,1.0,1.0,1.0,1.0},\
										{0,0,0,0,0,0},\
										{5,5,5,10,10,10,660,380,190,134,750,128,558,0,20,20,20,200,200,200,350,300,5,618,1,1,1,1,1,1},\
										{0.01,8410,8410,7408,7408,0xffff,0xffff,0,0}\
									}

extern DOF6_SYS_PARA	Dof6SysPara ; */

int __stdcall LC_Choose_PlatformType(int PlatformType); //平台类型选择	0x00：3+1轴平台；0x01：6轴平台；

int __stdcall LC_DOF6_Public_CueModule_Reset(); //体感参数复位
int __stdcall LC_DOF6_Public_UserCueParaTranfer(DOF6_SYS_PARA *p); //结构体参数传递
int __stdcall LC_DOF6_Public_MechModule_InitCalc(); //平台机械结构计算
int __stdcall LC_Public_OpenMboxUdpPort();  //打开UDP端口
int __stdcall LC_DOF6_Public_Cue2Inverse_Solution(DOF6_GAME_PARA *p); //计算运动数据并下发给六自由度平台，控制平台运动
int __stdcall LC_Public_ResetPlatform();  //平台复位
int __stdcall LC_Public_GoMiddlePlatform(long int GoMiddleTimeMs); //平台运动到中间位置
int __stdcall LC_Public_GoZeroPlatform(long int GoZeroTimeMs);  //平台运动到零位
int __stdcall LC_Public_CloseMboxUdpPort(); //关闭UDP端口


#ifdef __cplusplus
    }
#endif

#endif  


