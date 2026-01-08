/*
 * File: dcmtrCtrl_PID.c
 *
 * Code generated for Simulink model 'dcmtrCtrl_PID'.
 *
 * Model version                  : 9.0
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Thu Jan  8 10:14:19 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: MISRA C:2012 guidelines
 * Validation result: Not run
 */

#include "dcmtrCtrl_PID.h"
#include "rtwtypes.h"

/* Output and update for referenced model: 'dcmtrCtrl_PID' */
void dcmtrCtrl_PID(const real32_T *rtu_ref, const real32_T *rtu_ang, real32_T
                   *rty_v, dcmtrCtrl_PID_DW_f *localDW)
{
  real32_T rtb_FilterCoefficient;
  real32_T rtb_Subtract;
  real32_T u0;

  /* Sum: '<Root>/Subtract' */
  rtb_Subtract = (*rtu_ref) - (*rtu_ang);

  /* Gain: '<S39>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S31>/Filter'
   *  Gain: '<S29>/Derivative Gain'
   *  Sum: '<S31>/SumD'
   */
  rtb_FilterCoefficient = ((Ctrl_Kd * rtb_Subtract) - localDW->Filter_DSTATE) *
    Ctrl_N;

  /* Sum: '<S45>/Sum' incorporates:
   *  DiscreteIntegrator: '<S36>/Integrator'
   *  Gain: '<S41>/Proportional Gain'
   */
  u0 = ((Ctrl_Kp * rtb_Subtract) + localDW->Integrator_DSTATE) +
    rtb_FilterCoefficient;

  /* Saturate: '<S43>/Saturation' */
  if (u0 > 5.0F) {
    *rty_v = 5.0F;
  } else if (u0 < -5.0F) {
    *rty_v = -5.0F;
  } else {
    *rty_v = u0;
  }

  /* End of Saturate: '<S43>/Saturation' */

  /* Update for DiscreteIntegrator: '<S31>/Filter' */
  localDW->Filter_DSTATE += 0.01F * rtb_FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S36>/Integrator' incorporates:
   *  Gain: '<S33>/Integral Gain'
   */
  localDW->Integrator_DSTATE += (Ctrl_Ki * rtb_Subtract) * 0.01F;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
