/*
 * File: xil_instrumentation.c
 *
 * Code generated for instrumentation.
 *
 */

#include "xil_instrumentation.h"

/* Code instrumentation offset(s) for model dcmtrCtrl_PID (ModelRefSIL) */
#define _MW_INSTRUM_R_0db402c40d3401f4_offset 1

/* Code instrumentation offset(s) for model dcmtrCtrl_PID */
#define taskTimeStart_dcmtrCtrl_PID_offset 0
#define taskTimeEnd_dcmtrCtrl_PID_offset 0

/* A function parameter may be intentionally unused */
#ifndef UNUSED_PARAMETER
# if defined(__LCC__)
#   define UNUSED_PARAMETER(x)
# else
#   define UNUSED_PARAMETER(x)         (void) (x)
# endif
#endif

#define SIZEOF_SECTION_ID_CONTAINER    sizeof(uint64_T)
#define SIZEOF_TIMER_TYPE              sizeof(uint64_T)

static uint64_T xsd_xil_timer_corrected = 0;
static uint64_T xsd_xil_timer_unfreeze = 0;
static uint32_T xsd_xil_freezing_busy = 0;
void xilUploadProfilingData(uint32_T sectionId)
{
  xilUploadCodeInstrData((void *)(&xsd_xil_timer_corrected), (uint32_T)
    (SIZEOF_TIMER_TYPE), sectionId);
}

/* The internal freeze and unfreeze methods cannot be nested.
 * The customer-visible implementation avoids nesting problems.
 * Update the value of the corrected timer to exclude time
 * spent in the instrumentation code
 */
#define xilProfilingTimerFreezeInternal() { \
 xsd_xil_timer_corrected = xsd_xil_timer_corrected + (((uint64_T)(timestamp_x86())) - xsd_xil_timer_unfreeze); \
}
#define xilProfilingTimerUnFreezeInternal() { \
 xsd_xil_timer_unfreeze = (uint64_T) (timestamp_x86()); \
}

void xilProfilingTimerFreeze(void)
{
  if (xsd_xil_freezing_busy == 0) {
    xilProfilingTimerFreezeInternal();
  }                                    /* if */
}

void xilProfilingTimerUnFreeze(void)
{
  if (xsd_xil_freezing_busy == 0) {
    xilProfilingTimerUnFreezeInternal();
  }                                    /* if */
}

/* Tic/Toc methods for task profiling */
#define taskTimeStart(id)              { \
 xilUploadProfilingData(id); \
 xilProfilingTimerUnFreezeInternal(); \
}
#define taskTimeEnd(id)                { \
 uint32_T sectionIdNeg = id; \
 sectionIdNeg = ~sectionIdNeg; \
 xilProfilingTimerFreezeInternal(); \
 xilUploadProfilingData(sectionIdNeg); \
}
#include <string.h>

void __MW_INSTRUM_RECORD_HIT(uint32_T sectionId)
{
  /* Send information that instrumentation point was hit to host */
  xilUploadCodeInstrData((void *)0, (uint32_T)(0), sectionId);
}

#ifdef __cplusplus

extern "C"
{

#endif

  const unsigned int __mw_instrum_dcmtrCtrl_PID_hits_size = 10;

#ifdef __cplusplus

}

#endif

unsigned int __mw_instrum_dcmtrCtrl_PID_hits[10];

#ifdef __cplusplus

extern "C"
{

#endif

  unsigned int* __mw_instrum_dcmtrCtrl_PID_phits =
    &__mw_instrum_dcmtrCtrl_PID_hits[0];

#ifdef __cplusplus

}

#endif

void xilUploadCoverageSynthesis(void)
{
  uint32_T sz;
  sz = (uint32_T)(__mw_instrum_dcmtrCtrl_PID_hits_size * sizeof(uint32_T));
  xilUploadCodeInstrData((void *)__mw_instrum_dcmtrCtrl_PID_hits, sz, 2);
  memset((void *) __mw_instrum_dcmtrCtrl_PID_hits, 0, sz);
}

void xilInitCoverage(void)
{
  uint32_T sz;
  sz = (uint32_T)(__mw_instrum_dcmtrCtrl_PID_hits_size * sizeof(uint32_T));
  memset((void *) __mw_instrum_dcmtrCtrl_PID_hits, 0, sz);
}

/* Code instrumentation method(s) for model dcmtrCtrl_PID (ModelRefSIL) */
void _MW_INSTRUM_R_0db402c40d3401f4(uint32_T sectionId)
{
  __MW_INSTRUM_RECORD_HIT(_MW_INSTRUM_R_0db402c40d3401f4_offset + sectionId);
}

/* Code instrumentation method(s) for model dcmtrCtrl_PID */
void taskTimeStart_dcmtrCtrl_PID(uint32_T sectionId)
{
  taskTimeStart(taskTimeStart_dcmtrCtrl_PID_offset + sectionId);
}

void taskTimeEnd_dcmtrCtrl_PID(uint32_T sectionId)
{
  taskTimeEnd(taskTimeEnd_dcmtrCtrl_PID_offset + sectionId);
}

void InitEvent (void)
{
  /* callbacks executed when the sim starts */
  xilInitCoverage();
}

void PauseEvent (void)
{
  /* callbacks executed when the sim is paused */
  xilUploadCoverageSynthesis();
}

void TerminateEvent (void)
{
  /* callbacks executed when the sim ends */
  xilUploadCoverageSynthesis();
}

void StepCompletedEvent (void)
{
  /* callbacks executed when a step ends */
  xilUploadCoverageSynthesis();
}
