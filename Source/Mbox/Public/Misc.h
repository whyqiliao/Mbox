#pragma once

#include "CoreMinimal.h"
#include "Misc.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSIMCUE, Log, All);
USTRUCT(BlueprintType)
struct FMboxFXStruct
{
	GENERATED_USTRUCT_BODY()
	//reserve place1&2
		bool place1;
		bool place2;
	//烟雾开关
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Smoke;
	//风机开关
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Wind;
	//下雨开关
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Rain;
	//闪电开关
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Lightning;
	//火山灯光开关
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool FlowFire;
	//火焰灯开关
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Fire;
};
UENUM()
enum EFUNCATIONRETVALUE
{
	CALL_SUCCESS = 0x20000000 UMETA(DisplayName = "函数调用成功"),// 函数调用成功
	OPEN_SOFTDOG_ERROR = 0x20000001 UMETA(DisplayName = "加密狗打开失败"),// 加密狗打开失败
	ID_SOFTDOG_ERROR = 0x20000002 UMETA(DisplayName = "加密狗ID验证错误"),// 加密狗ID验证错误
	HAMC_SOFTDOG_ERROR = 0x20000003 UMETA(DisplayName = "加密狗HAMC验证错误"),// 加密狗HAMC验证错误
	TIME_SOFTDOG_ERROR = 0x20000004 UMETA(DisplayName = "加密狗时间校验错误"),// 加密狗时间校验错误
};

/*注意：这些参数可以暂用默认值！*/
USTRUCT(BlueprintType)
struct FUE_DOF6_CUE_PARA
{

	GENERATED_USTRUCT_BODY()
		/* 时间因子 T1  */
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32T1 = 0.1f;
	/* 时间因子 T2   */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32T2 = 0.12f;
	/* 时间 T3  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32T3 = 0.5f;
	/*  时间因子 T4  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32T4 = 1000.f;
	/*  时间因子 T5  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32T5 = 0.1f;
	/*  时间因子 T6  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32T6 = 0.3f;
	/*  时间因子 T7  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32T7 = 0.5f;
	/*  时间因子 T8  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32T8 = 0.9f;

	/* 加速度阈值1   */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32C1 = 0.1f;
	/* 加速度阈值2   */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32C2 = 0.02f;
	/* 加速度阈值3   */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32C3 = 0.05f;
	/* 加速度阈值4   */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32C4 = 1.0f;
	/* 加速度阈值5   */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32C5 = 1.0f;
	/* 加速度阈值6   */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32C6 = 1.0f;
	/* 加速度阈值7   */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32C7 = 1.0f;
	/* 加速度阈值8   */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32C8 = 1.0f;

	/*  比例因子1 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32K1 = 0.1f;
	/*  比例因子2 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32K2 = 2.0f;
	/*  比例因子3 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32K3 = 1.0f;
	/*  比例因子4 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32K4 = 1.0f;
	/*  比例因子5 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32K5 = 1.0f;
	/*  比例因子6 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32K6 = 1.0f;
	/*  比例因子7 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32K7 = 1.0f;
	/*  比例因子8 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32K8 = 1.0f;
};

//叠加的六个轴特效位置信息
USTRUCT(BlueprintType)
struct FUE_DOF6_POSTION_PARA
{
	GENERATED_USTRUCT_BODY()

		//X轴位置信息
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int I32PlayXpos;
	//Y轴位置信息
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int I32PlayYpos;
	//Z轴位置信息
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int I32PlayZpos;
	//U轴位置信息
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int I32PlayUpos;
	//V轴位置信息
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int I32PlayVpos;
	//W轴位置信息
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int I32PlayWpos;
};

//游戏中实时的运动值
USTRUCT(BlueprintType)
struct FUE_DOF6_GAME_PARA
{
	GENERATED_USTRUCT_BODY()

		/* 单位：弧度*/
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32ReciveAlfaRad = 0.f;
	/* 单位：弧度*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32ReciveBetaRad = 0.f;
	/* 单位：弧度*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32ReciveGammaRad = 0.f;
	/* 单位：重力加速度*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32ReciveXAcceG = 0.f;
	/* 单位：重力加速度*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32ReciveYAcceG = 0.f;
	/* 单位：重力加速度*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32ReciveZAcceG = 0.f;
	//第4轴位置信息 long
	long int	I32PlayUpos;
};

/*注意：这些参数需要根据平台的实际参数进行修改，否则会对平台造成损害关于结构相关参数请参考 体感算法动态链接库使用手册 里面对平台结构的说明*/
//游戏中的最大运动幅度
USTRUCT(BlueprintType)
struct FUE_DOF6_MECH_PARA
{
	GENERATED_USTRUCT_BODY()

		/* 单位：弧度 */
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32AlfaMaxRad = 5.f;
	/* 单位：弧度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32BetaMaxRad = 5.f;
	/* 单位：弧度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32GammaMaxRad = 5.f;
	/* 单位：重力加速度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32XAcceMaxG = 10.f;
	/* 单位：重力速度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32YAcceMaxG = 10.f;
	/* 单位：重力加速度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32ZAcceMaxG = 10.f;

	//三自由度平台底边三角形相关参数(单位mm)
	/* 三角形底边长度，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32TriangleHemMm = 660.f;
	/* 三角形底边高，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32HeightOfTriangleHemMm = 380.f;
	/* 三角形顶点到座椅中心点的距离，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32HeightToTopMarkMm = 190.f;

	//六自由平台上、下平台的相关参数(单位mm)
	/* 下平台短边，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32StaticShortMm = 134.f;
	/* 下平台直径，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32StaticDiameterMm = 750.f;
	/* 上平台短边，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32MovingShortMm = 128.f;
	/* 上平台直径，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32MovingDiameterMm = 558.f;

	//相对于初始坐标的旋转量(单位°)
	/* 坐标旋转角度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32XAxisRotAngleDeg = 0.f;

	//平台机械结构决定其的运动范围
	/* Alfa最大运动范围，单位：度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32PlatformAlfaMaxDeg = 20.f;
	/* Beta最大运动范围，单位：度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32PlatformBetaMaxDeg = 20.f;
	/* Gamma最大运动范围，单位：度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32PlatformGammaMaxDeg = 20.f;
	/* X平移最大运动范围，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32PlatformXMaxMm = 200.f;
	/* Y平移最大运动范围，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32PlatformYMaxMm = 200.f;
	/* Z平移最大运动范围，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32PlatformZMaxMm = 200.f;

	//电动缸的参数
	/* 电动缸的行程，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32AccessDistanceUnitMm = 200.f;
	/* 电动缸的导程，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32LeadDistanceUnitMm = 5.f;
	/* 电动缸的最小长度，单位：毫米 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32MinLongofCylinderMm = 618.f;

	//齿轮比
	/* 1号轴电子齿轮比 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32GearOne = 1.f;
	/* 2号轴电子齿轮比 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32GearTwo = 1.f;
	/* 3号轴电子齿轮比 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32GearThree = 1.f;
	/* 4号轴电子齿轮比 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32GearFour = 1.f;
	/* 5号轴电子齿轮比 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32GearFive = 1.f;
	/* 6号轴电子齿轮比 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32GearSix = 1.f;
};
//UDP端口号和采样时间
USTRUCT(BlueprintType)
struct FUE_UDP_PORT_PARA
{
	GENERATED_USTRUCT_BODY()

		// 采样时间，单位：秒
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	F32FlightSamplingPeriods = 0.01f;

	short	I16HostTxPort = 8410; /* 主机发送UDP端口 short */

	short	I16HostRxPort = 8410; /* 主机接收UDP端口 short*/

	short	I16MboxTxPort = 7408; /* MBOX发送UDP端口 short*/

	short	I16MboxRxPort = 7408; /* MBOX接收UDP端口 short*/


	short	I16WhoAcceptCode = -1;//short 0xFFFFFFFF全接受

	short	I16WhoReplyCode = -1;//short 0xFFFFFFFF全回复

	//特效输出，默认初始化时全关
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int	I16BaseDoutCode = 0;

	long int  I32PlayLine = 0;//校验输出 long
};
USTRUCT(BlueprintType)
struct FUE_DOF6_SYS_PARA
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FUE_DOF6_CUE_PARA	XDof6CuePara;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FUE_DOF6_CUE_PARA	YDof6CuePara;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FUE_DOF6_CUE_PARA	ZDof6CuePara;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FUE_DOF6_GAME_PARA	Dof6GamePara;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FUE_DOF6_MECH_PARA	Dof6MechPara;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FUE_UDP_PORT_PARA	UdpPortPara;
};