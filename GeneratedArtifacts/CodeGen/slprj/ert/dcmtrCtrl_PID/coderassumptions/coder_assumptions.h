/*
 * File: coder_assumptions.h
 *
 * Abstract: Coder assumptions header file
 */

#ifndef CODER_ASSUMPTIONS_H
#define CODER_ASSUMPTIONS_H

/* include model specific checks */
#include "dcmtrCtrl_PID_ca.h"

/* global results variable mapping for static code */
#define CA_Expected                    CA_dcmtrCtrl_PID_Exp
#define CA_Actual                      CA_dcmtrCtrl_PID_Act
#define CA_TestResults                 CA_dcmtrCtrl_PID_Res
#define CA_PortableWordSizes_Results   CA_dcmtrCtrl_PID_PWSRes

/* entry point function mapping for static code */
#define CA_Run_Tests                   dcmtrCtrl_PID_caRunTests
#define CA_MODEL_SPECIFIC_CHECKS_ENABLED 0
#endif                                 /* CODER_ASSUMPTIONS_H */
