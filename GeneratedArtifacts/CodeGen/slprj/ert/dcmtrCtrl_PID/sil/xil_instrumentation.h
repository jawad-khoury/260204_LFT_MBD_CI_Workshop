/*
 * File: xil_instrumentation.h
 *
 * Code generated for instrumentation.
 *
 */

/* Functions with a C call interface */
#ifdef __cplusplus

extern "C"
{

#endif

#include "host_timer_x86.h"
#ifdef __cplusplus

}

#endif

#include "rtwtypes.h"

/* Upload code instrumentation data point */
void xilUploadCodeInstrData(
  void* pData, uint32_T numMemUnits, uint32_T sectionId);

/* Uploads data */
void xilUploadProfilingData(uint32_T sectionId);

/* Pause/restart the timer while running code associated with storing and uploading the data. */
void xilProfilingTimerFreeze(void);
void xilProfilingTimerUnFreeze(void);

/* Indicate that instrumentation point was hit */
void __MW_INSTRUM_RECORD_HIT(uint32_T sectionId);
void xilUploadCoverageSynthesis(void);
void xilInitCoverage(void);

/* Code instrumentation method(s) for model dcmtrCtrl_PID (ModelRefSIL) */
void _MW_INSTRUM_R_0db402c40d3401f4(uint32_T sectionId);

/* Code instrumentation method(s) for model dcmtrCtrl_PID */
void taskTimeStart_dcmtrCtrl_PID(uint32_T sectionId);
void taskTimeEnd_dcmtrCtrl_PID(uint32_T sectionId);

/* Callback called when the simulation starts */
void InitEvent(void);

/* Callback called when the simulation is paused */
void PauseEvent (void);

/* Callback called when the simulation ends */
void TerminateEvent (void);

/* Callback called when a step ends */
void StepCompletedEvent (void);
