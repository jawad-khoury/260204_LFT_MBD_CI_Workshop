/*
 * File: dcmtrCtrl_PID_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef DCMTRCTRL_PID_CA_H
#define DCMTRCTRL_PID_CA_H

/* preprocessor validation checks */
#include "dcmtrCtrl_PID_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_ChecksTestResults CA_dcmtrCtrl_PID_Res;
extern CA_PWS_TestResults CA_dcmtrCtrl_PID_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_Checks CA_dcmtrCtrl_PID_Exp;
extern CA_Checks CA_dcmtrCtrl_PID_Act;
extern const int numberOfImportedTypes;

/* entry point function to run tests */
void dcmtrCtrl_PID_caRunTests(void);

#endif                                 /* DCMTRCTRL_PID_CA_H */
