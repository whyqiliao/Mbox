/*=====================================================================================
 File name: SIM_CUE_CVI.H          
                    
 Originator: syntron	

 Description:   Cue Method Of DOF6��Inverse Solution��UDP Communication .                 
                 

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
		

//��Ϸ����
typedef struct	{
					//��Ϸ�зɻ�ʵʱ���˶�ֵ
					float	F32ReciveAlfaRad; /* ��λ������*/
					float	F32ReciveBetaRad; /* ��λ������*/
					float	F32ReciveGammaRad; /* ��λ������*/
					float	F32ReciveXAcceG; /* ��λ���������ٶ�*/ 
					float	F32ReciveYAcceG; /* ��λ���������ٶ�*/ 
					float	F32ReciveZAcceG; /* ��λ���������ٶ�*/ 
					long int	I32PlayUpos;//��4��λ����Ϣ

		}DOF6_GAME_PARA;

// XYZ_LINE_ACC
typedef struct	{	float	F32T1;/* ʱ������ T1  */					
					float	F32T2;/* ʱ������ T2   */					
					float	F32T3;/* ʱ�� T3  */
					float	F32T4;/*  ʱ������ T4  */   
					float	F32T5; /*  ʱ������ T5  */
					float	F32T6; /*  ʱ������ T6  */ 
					float	F32T7; /*  ʱ������ T7  */ 
					float	F32T8; /*  ʱ������ T8  */ 
		
					float	F32C1;/* ���ٶ���ֵ1   */	
					float	F32C2;/* ���ٶ���ֵ2   */	 
					float	F32C3;/* ���ٶ���ֵ3   */  
					float	F32C4;/* ���ٶ���ֵ4   */	
					float	F32C5;/* ���ٶ���ֵ5   */	 
					float	F32C6;/* ���ٶ���ֵ6   */
					float	F32C7;/* ���ٶ���ֵ7   */	
					float	F32C8;/* ���ٶ���ֵ8   */	 
			
					float	F32K1;/*  ��������1 */
					float	F32K2;/*  ��������2 */
					float	F32K3;/*  ��������3 */
					float	F32K4;/*  ��������4 */ 
					float	F32K5;/*  ��������5 */
					float	F32K6;/*  ��������6 */
					float	F32K7;/*  ��������7 */
					float	F32K8;/*  ��������8 */
			
		} DOF6_CUE_PARA;  

//ƽ̨�Ļ�е����
typedef struct	{	
				
					//��Ϸ�зɻ�������˶�����
					float	F32AlfaMaxRad; /* ��λ������ */
					float	F32BetaMaxRad; /* ��λ������ */
					float	F32GammaMaxRad;  /* ��λ������ */
					float	F32XAcceMaxG;  /* ��λ���������ٶ� */
					float	F32YAcceMaxG;  /* ��λ�������ٶ� */
					float	F32ZAcceMaxG;  /* ��λ���������ٶ� */
					
					//�����ɶ�ƽ̨
					float	F32TriangleHemMm; /* �����εױ߳��ȣ���λ������ */ 
					float	F32HeightOfTriangleHemMm; /* �����εױ߸ߣ���λ������ */ 
					float	F32HeightToTopMarkMm;/* �����ζ��㵽�������ĵ�ľ��룬��λ������ */
					
					//�����ɶ�ƽ̨����ƽ��ĳߴ�
					float	F32StaticShortMm;  /* ��ƽ̨�̱ߣ���λ������ */
					float	F32StaticDiameterMm;  /* ��ƽֱ̨������λ������ */
					float	F32MovingShortMm;  /* ��ƽ̨�̱ߣ���λ������ */
					float	F32MovingDiameterMm;  /* ��ƽֱ̨������λ������ */	
			
					//����ڳ�ʼ�������ת��
					float	F32XAxisRotAngleDeg; /* ������ת�Ƕ� */
			
					//ƽ̨��е�ṹ��������˶���Χ
					float	F32PlatformAlfaMaxDeg; /* Alfa����˶���Χ����λ���� */
					float	F32PlatformBetaMaxDeg; /* Beta����˶���Χ����λ���� */
					float	F32PlatformGammaMaxDeg;/* Gamma����˶���Χ����λ���� */
					float	F32PlatformXMaxMm; /* Xƽ������˶���Χ����λ������ */
					float	F32PlatformYMaxMm; /* Yƽ������˶���Χ����λ������ */
					float	F32PlatformZMaxMm;/* Zƽ������˶���Χ����λ������ */
		   
					//�綯�׵Ĳ���
					float	F32AccessDistanceUnitMm; /* �綯�׵��г̣���λ������ */
					float	F32LeadDistanceUnitMm; /* �綯�׵ĵ��̣���λ������ */
					float	F32MinLongofCylinderMm; /* �綯�׵���С���ȣ���λ������ */
			
					//���ֱ�
					float	F32GearOne; /* 1������ӳ��ֱ� */
					float	F32GearTwo; /* 2������ӳ��ֱ� */
					float	F32GearThree; /* 3������ӳ��ֱ� */
					float	F32GearFour; /* 4������ӳ��ֱ� */
					float	F32GearFive; /* 5������ӳ��ֱ� */
					float	F32GearSix; /* 6������ӳ��ֱ� */
			
		}DOF6_MECH_PARA;


//UDP�˿ںźͲ���ʱ��
typedef struct	{	float	F32FlightSamplingPeriods; // ���в���ʱ�䣬��λ����*/
					short	I16HostTxPort; /* ��������UDP�˿� */
					short	I16HostRxPort; /* ��������UDP�˿� */ 
				    short	I16MboxTxPort; /* MBOX����UDP�˿� */
				    short	I16MboxRxPort; /* MBOX����UDP�˿� */
			
					short	I16WhoAcceptCode ;
					short	I16WhoReplyCode;
					int	I16BaseDoutCode;//��Ч���
					long int I32PlayLine;//У�����
					
			}UDP_PORT_PARA;

//���ӵ���������Чλ����Ϣ
typedef struct {	
					int I32PlayXpos; //X��λ����Ϣ
					int I32PlayYpos; //Y��λ����Ϣ
					int I32PlayZpos; //Z��λ����Ϣ
					int I32PlayUpos; //U��λ����Ϣ
					int I32PlayVpos; //V��λ����Ϣ
					int I32PlayWpos; //W��λ����Ϣ

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

int __stdcall LC_Choose_PlatformType(int PlatformType); //ƽ̨����ѡ��	0x00��3+1��ƽ̨��0x01��6��ƽ̨��

int __stdcall LC_DOF6_Public_CueModule_Reset(); //��в�����λ
int __stdcall LC_DOF6_Public_UserCueParaTranfer(DOF6_SYS_PARA *p); //�ṹ���������
int __stdcall LC_DOF6_Public_MechModule_InitCalc(); //ƽ̨��е�ṹ����
int __stdcall LC_Public_OpenMboxUdpPort();  //��UDP�˿�
int __stdcall LC_DOF6_Public_Cue2Inverse_Solution(DOF6_GAME_PARA *p); //�����˶����ݲ��·��������ɶ�ƽ̨������ƽ̨�˶�
int __stdcall LC_Public_ResetPlatform();  //ƽ̨��λ
int __stdcall LC_Public_GoMiddlePlatform(long int GoMiddleTimeMs); //ƽ̨�˶����м�λ��
int __stdcall LC_Public_GoZeroPlatform(long int GoZeroTimeMs);  //ƽ̨�˶�����λ
int __stdcall LC_Public_CloseMboxUdpPort(); //�ر�UDP�˿�


#ifdef __cplusplus
    }
#endif

#endif  


