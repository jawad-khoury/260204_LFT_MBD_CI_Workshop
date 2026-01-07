/*
 * File: dcmtrCtrl_PID_ca.c
 *
 * Abstract: Tests assumptions in the generated code.
 */

#include "dcmtrCtrl_PID_ca.h"

CA_ChecksTestResults CA_dcmtrCtrl_PID_Res;
CA_PWS_TestResults CA_dcmtrCtrl_PID_PWSRes;
const int numberOfImportedTypes = 0;
const CA_Checks CA_dcmtrCtrl_PID_Exp = {
  8,                                   /* BitPerChar */
  16,                                  /* BitPerShort */
  32,                                  /* BitPerInt */
  32,                                  /* BitPerLong */
  64,                                  /* BitPerLongLong */
  32,                                  /* BitPerFloat */
  64,                                  /* BitPerDouble */
  64,                                  /* BitPerPointer */
  64,                                  /* BitPerSizeT */
  64,                                  /* BitPerPtrDiffT */
  CA_LITTLE_ENDIAN,                    /* Endianess */
  CA_ZERO,                             /* IntDivRoundTo */
  1,                                   /* ShiftRightIntArith */
  0,                                   /* LongLongMode */
  0,                                   /* PortableWordSizes */
  "Intel->x86-64 (Windows64)",         /* HWDeviceType */
  0,                                   /* MemoryAtStartup */
  0,                                   /* DynamicMemoryAtStartup */
  0,                                   /* DenormalFlushToZero */
  0,                                   /* DenormalAsZero */
  0                                    /* Imported Types */
};

CA_Checks CA_dcmtrCtrl_PID_Act = {
  0,                                   /* BitPerChar */
  0,                                   /* BitPerShort */
  0,                                   /* BitPerInt */
  0,                                   /* BitPerLong */
  0,                                   /* BitPerLongLong */
  0,                                   /* BitPerFloat */
  0,                                   /* BitPerDouble */
  0,                                   /* BitPerPointer */
  0,                                   /* BitPerSizeT */
  0,                                   /* BitPerPtrDiffT */
  CA_UNSPECIFIED,                      /* Endianess */
  CA_UNDEFINED,                        /* IntDivRoundTo */
  0,                                   /* ShiftRightIntArith */
  0,                                   /* LongLongMode */
  0,                                   /* PortableWordSizes */
  "",                                  /* HWDeviceType */
  0,                                   /* MemoryAtStartup */
  0,                                   /* DynamicMemoryAtStartup */
  0,                                   /* DenormalFlushToZero */
  0,                                   /* DenormalAsZero */
  0                                    /* Imported Types */
};

void dcmtrCtrl_PID_caRunTests(void)
{
  /* verify hardware implementation */
  caVerifyPortableWordSizes(&CA_dcmtrCtrl_PID_Act, &CA_dcmtrCtrl_PID_Exp,
    &CA_dcmtrCtrl_PID_PWSRes);
  caVerifyChecks(&CA_dcmtrCtrl_PID_Act, &CA_dcmtrCtrl_PID_Exp,
                 &CA_dcmtrCtrl_PID_Res, numberOfImportedTypes);
}
