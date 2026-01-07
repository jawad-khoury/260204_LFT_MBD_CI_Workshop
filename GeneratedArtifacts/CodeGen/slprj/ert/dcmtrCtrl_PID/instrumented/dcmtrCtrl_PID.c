#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_dcmtrCtrl_PID_phits;

#define __MW_EXTRA_OPEN_MP_SHARED_CLAUSE shared(__mw_instrum_dcmtrCtrl_PID_phits)

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void)((++__mw_instrum_dcmtrCtrl_PID_phits[id - 1u]) || ((__mw_instrum_dcmtrCtrl_PID_phits[id - 1u] = (~0u))!=0)))
#define __MW_INSTRUM_RECORD_HIT(id) (__mw_instrum_dcmtrCtrl_PID_phits ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_NODE_1() (__MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(2U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(3U), (0 == 1)))
#define __MW_INSTRUM_NODE_4(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_3() (__MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_6(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(6U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(7U), (0 == 1)))
#define __MW_INSTRUM_NODE_8(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_7() (__MW_INSTRUM_RECORD_HIT(7U))
#define __MW_INSTRUM_NODE_10() (__MW_INSTRUM_RECORD_HIT(10U))
#ifdef __cplusplus
template<typename T>
static T *__mw_instrum_address_of(T& arg)
{
  return reinterpret_cast<T*>(
               &const_cast<char&>(
                   reinterpret_cast<const volatile char&>(arg)));
}
#else
#define __mw_instrum_address_of(X) &(X)
#endif

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#define __mw_instrum_address_of(x) &(x)


#define __MW_INSTRUM_FCN_ENTER_1() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029()

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_2DZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_2(exp) (__MW_INSTRUM_RECORD_HIT_2DZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_2DZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_2(exp) (__MW_INSTRUM_RECORD_HIT_2DZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_4FGTZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_4(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_4FGTZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_3() ((void)0)


#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_6DZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_6(exp) (__MW_INSTRUM_RECORD_HIT_6DZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_6DZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_6(exp) (__MW_INSTRUM_RECORD_HIT_6DZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_8FLTZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_8(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_8FLTZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_7() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_10XZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029(void) { }
#define __MW_INSTRUM_NODE_10() __MW_INSTRUM_RECORD_HIT_10XZ_dcmtrCtrl__PID_0020_0028ModelRefSIL_0029()


#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

# 1 "C:\\Users\\jkhoury\\MATLAB_AE\\260204_VVTestingWorkshop\\dc-motor-with-pid-control\\GeneratedArtifacts\\CodeGen\\slprj\\ert\\dcmtrCtrl_PID\\dcmtrCtrl_PID.c"
# 5 "C:\\Program Files\\MATLAB\\R2025b\\polyspace\\verifier\\extensions\\tmw_builtins\\tmw_builtins.h" 3
#ifndef _TMW_BUILTINS_H_
#define _TMW_BUILTINS_H_
# 71
# 41


#endif /* _TMW_BUILTINS_H_ */
# 16 "C:\\Users\\jkhoury\\MATLAB_AE\\260204_VVTestingWorkshop\\dc-motor-with-pid-control\\GeneratedArtifacts\\CodeGen\\slprj\\ert\\dcmtrCtrl_PID\\dcmtrCtrl_PID.h"
#ifndef dcmtrCtrl_PID_h_
#define dcmtrCtrl_PID_h_
#ifndef dcmtrCtrl_PID_COMMON_INCLUDES_
#define dcmtrCtrl_PID_COMMON_INCLUDES_
# 11 "C:\\Users\\jkhoury\\MATLAB_AE\\260204_VVTestingWorkshop\\dc-motor-with-pid-control\\GeneratedArtifacts\\CodeGen\\slprj\\ert\\_sharedutils\\rtwtypes.h"
#ifndef RTWTYPES_H
#define RTWTYPES_H



#ifndef false
#define false (0U)
#endif /* false */

#ifndef true
#define true (1U)
#endif /* true */
# 42
typedef signed char int8_T; 
typedef unsigned char uint8_T; 
typedef short int16_T; 
typedef unsigned short uint16_T; 
typedef int int32_T; 
typedef unsigned uint32_T; 
typedef float real32_T; 
typedef double real64_T; 
# 55
typedef double real_T; 
typedef double time_T; 
typedef unsigned char boolean_T; 
typedef int int_T; 
typedef unsigned uint_T; 
typedef unsigned long ulong_T; 
typedef char char_T; 
typedef unsigned char uchar_T; 
typedef char_T byte_T; 
# 81
typedef void *pointer_T; 

#endif /* RTWTYPES_H */
# 21 "C:\\Users\\jkhoury\\MATLAB_AE\\260204_VVTestingWorkshop\\dc-motor-with-pid-control\\GeneratedArtifacts\\CodeGen\\slprj\\ert\\dcmtrCtrl_PID\\dcmtrCtrl_PID.h"
#endif /* dcmtrCtrl_PID_COMMON_INCLUDES_ */





typedef 
# 24
struct { 
real32_T Filter_DSTATE; 
real32_T Integrator_DSTATE; 
} dcmtrCtrl_PID_DW_f; 



typedef 
# 29
struct { 
dcmtrCtrl_PID_DW_f rtdw; 
} dcmtrCtrl_PID_MdlrefDW; 
# 41
extern real32_T Ctrl_Kd; 


extern real32_T Ctrl_Ki; 


extern real32_T Ctrl_Kp; 


extern real32_T Ctrl_N; 


extern void dcmtrCtrl_PID(const real32_T * rtu_ref, const real32_T * rtu_ang, real32_T * rty_v, dcmtrCtrl_PID_DW_f * localDW); 
# 125
#endif /* dcmtrCtrl_PID_h_ */
# 20 "C:\\Users\\jkhoury\\MATLAB_AE\\260204_VVTestingWorkshop\\dc-motor-with-pid-control\\GeneratedArtifacts\\CodeGen\\slprj\\ert\\dcmtrCtrl_PID\\dcmtrCtrl_PID.c"
void dcmtrCtrl_PID(const real32_T *rtu_ref, const real32_T *rtu_ang, real32_T *
rty_v, dcmtrCtrl_PID_DW_f *localDW) 
{ float __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); { 
real32_T rtb_FilterCoefficient; 
real32_T rtb_Subtract; 
real32_T u0; 


rtb_Subtract = *rtu_ref - *rtu_ang; 
# 35
rtb_FilterCoefficient = (Ctrl_Kd * rtb_Subtract - localDW->Filter_DSTATE) * Ctrl_N; 
# 42
u0 = (Ctrl_Kp * rtb_Subtract + localDW->Integrator_DSTATE) + rtb_FilterCoefficient; { 



if (__MW_INSTRUM_NODE_2((__MW_INSTRUM_NODE_4(u0, (5.0F)), (u0 > (5.0F))))) { 
*rty_v = (5.0F); 
} else { { if (__MW_INSTRUM_NODE_6(((__mw_tmp_for_expr_1 = -(5.0F)), (__MW_INSTRUM_NODE_8(u0, __mw_tmp_for_expr_1), (u0 < __mw_tmp_for_expr_1))))) { 
*rty_v = -(5.0F); 
} else { 
*rty_v = u0; 
}  } }  } 




localDW->Filter_DSTATE += (0.01F) * rtb_FilterCoefficient; 




localDW->Integrator_DSTATE += (Ctrl_Ki * rtb_Subtract) * (0.01F); } __MW_INSTRUM_NODE_10(); 
} 
