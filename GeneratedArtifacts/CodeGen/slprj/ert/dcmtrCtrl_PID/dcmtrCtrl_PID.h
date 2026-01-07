/*
 * File: dcmtrCtrl_PID.h
 *
 * Code generated for Simulink model 'dcmtrCtrl_PID'.
 *
 * Model version                  : 9.0
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Tue Jan  6 17:02:34 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run
 */

#ifndef dcmtrCtrl_PID_h_
#define dcmtrCtrl_PID_h_
#ifndef dcmtrCtrl_PID_COMMON_INCLUDES_
#define dcmtrCtrl_PID_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* dcmtrCtrl_PID_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for model 'dcmtrCtrl_PID' */
typedef struct {
  real32_T Filter_DSTATE;              /* '<S31>/Filter' */
  real32_T Integrator_DSTATE;          /* '<S36>/Integrator' */
} dcmtrCtrl_PID_DW_f;

typedef struct {
  dcmtrCtrl_PID_DW_f rtdw;
} dcmtrCtrl_PID_MdlrefDW;

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real32_T Ctrl_Kd;               /* Variable: Ctrl_Kd
                                        * Referenced by: '<S29>/Derivative Gain'
                                        */
extern real32_T Ctrl_Ki;               /* Variable: Ctrl_Ki
                                        * Referenced by: '<S33>/Integral Gain'
                                        */
extern real32_T Ctrl_Kp;               /* Variable: Ctrl_Kp
                                        * Referenced by: '<S41>/Proportional Gain'
                                        */
extern real32_T Ctrl_N;                /* Variable: Ctrl_N
                                        * Referenced by: '<S39>/Filter Coefficient'
                                        */
extern void dcmtrCtrl_PID(const real32_T *rtu_ref, const real32_T *rtu_ang,
  real32_T *rty_v, dcmtrCtrl_PID_DW_f *localDW);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'dcmtrCtrl_PID'
 * '<S1>'   : 'dcmtrCtrl_PID/PID Controller'
 * '<S2>'   : 'dcmtrCtrl_PID/PID Controller/Anti-windup'
 * '<S3>'   : 'dcmtrCtrl_PID/PID Controller/D Gain'
 * '<S4>'   : 'dcmtrCtrl_PID/PID Controller/External Derivative'
 * '<S5>'   : 'dcmtrCtrl_PID/PID Controller/Filter'
 * '<S6>'   : 'dcmtrCtrl_PID/PID Controller/Filter ICs'
 * '<S7>'   : 'dcmtrCtrl_PID/PID Controller/I Gain'
 * '<S8>'   : 'dcmtrCtrl_PID/PID Controller/Ideal P Gain'
 * '<S9>'   : 'dcmtrCtrl_PID/PID Controller/Ideal P Gain Fdbk'
 * '<S10>'  : 'dcmtrCtrl_PID/PID Controller/Integrator'
 * '<S11>'  : 'dcmtrCtrl_PID/PID Controller/Integrator ICs'
 * '<S12>'  : 'dcmtrCtrl_PID/PID Controller/N Copy'
 * '<S13>'  : 'dcmtrCtrl_PID/PID Controller/N Gain'
 * '<S14>'  : 'dcmtrCtrl_PID/PID Controller/P Copy'
 * '<S15>'  : 'dcmtrCtrl_PID/PID Controller/Parallel P Gain'
 * '<S16>'  : 'dcmtrCtrl_PID/PID Controller/Reset Signal'
 * '<S17>'  : 'dcmtrCtrl_PID/PID Controller/Saturation'
 * '<S18>'  : 'dcmtrCtrl_PID/PID Controller/Saturation Fdbk'
 * '<S19>'  : 'dcmtrCtrl_PID/PID Controller/Sum'
 * '<S20>'  : 'dcmtrCtrl_PID/PID Controller/Sum Fdbk'
 * '<S21>'  : 'dcmtrCtrl_PID/PID Controller/Tracking Mode'
 * '<S22>'  : 'dcmtrCtrl_PID/PID Controller/Tracking Mode Sum'
 * '<S23>'  : 'dcmtrCtrl_PID/PID Controller/Tsamp - Integral'
 * '<S24>'  : 'dcmtrCtrl_PID/PID Controller/Tsamp - Ngain'
 * '<S25>'  : 'dcmtrCtrl_PID/PID Controller/postSat Signal'
 * '<S26>'  : 'dcmtrCtrl_PID/PID Controller/preInt Signal'
 * '<S27>'  : 'dcmtrCtrl_PID/PID Controller/preSat Signal'
 * '<S28>'  : 'dcmtrCtrl_PID/PID Controller/Anti-windup/Passthrough'
 * '<S29>'  : 'dcmtrCtrl_PID/PID Controller/D Gain/Internal Parameters'
 * '<S30>'  : 'dcmtrCtrl_PID/PID Controller/External Derivative/Error'
 * '<S31>'  : 'dcmtrCtrl_PID/PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S32>'  : 'dcmtrCtrl_PID/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S33>'  : 'dcmtrCtrl_PID/PID Controller/I Gain/Internal Parameters'
 * '<S34>'  : 'dcmtrCtrl_PID/PID Controller/Ideal P Gain/Passthrough'
 * '<S35>'  : 'dcmtrCtrl_PID/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S36>'  : 'dcmtrCtrl_PID/PID Controller/Integrator/Discrete'
 * '<S37>'  : 'dcmtrCtrl_PID/PID Controller/Integrator ICs/Internal IC'
 * '<S38>'  : 'dcmtrCtrl_PID/PID Controller/N Copy/Disabled'
 * '<S39>'  : 'dcmtrCtrl_PID/PID Controller/N Gain/Internal Parameters'
 * '<S40>'  : 'dcmtrCtrl_PID/PID Controller/P Copy/Disabled'
 * '<S41>'  : 'dcmtrCtrl_PID/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S42>'  : 'dcmtrCtrl_PID/PID Controller/Reset Signal/Disabled'
 * '<S43>'  : 'dcmtrCtrl_PID/PID Controller/Saturation/Enabled'
 * '<S44>'  : 'dcmtrCtrl_PID/PID Controller/Saturation Fdbk/Disabled'
 * '<S45>'  : 'dcmtrCtrl_PID/PID Controller/Sum/Sum_PID'
 * '<S46>'  : 'dcmtrCtrl_PID/PID Controller/Sum Fdbk/Disabled'
 * '<S47>'  : 'dcmtrCtrl_PID/PID Controller/Tracking Mode/Disabled'
 * '<S48>'  : 'dcmtrCtrl_PID/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S49>'  : 'dcmtrCtrl_PID/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S50>'  : 'dcmtrCtrl_PID/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S51>'  : 'dcmtrCtrl_PID/PID Controller/postSat Signal/Forward_Path'
 * '<S52>'  : 'dcmtrCtrl_PID/PID Controller/preInt Signal/Internal PreInt'
 * '<S53>'  : 'dcmtrCtrl_PID/PID Controller/preSat Signal/Forward_Path'
 */
#endif                                 /* dcmtrCtrl_PID_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
