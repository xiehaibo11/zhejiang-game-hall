
/* v8::internal::MinIntFromFormat(v8::internal::VectorFormat) */

long v8::internal::MinIntFromFormat(int param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  if (param_1 < 0x10800000) {
    if (param_1 < 0xc00000) {
      if (param_1 == 0) goto LAB_0127d254;
      if (param_1 != 0x400000) {
        if (param_1 != 0x800000) goto LAB_0127d260;
        goto LAB_0127d234;
      }
    }
    else {
      if (param_1 == 0xc00000) goto LAB_0127d23c;
      if (param_1 == 0x10000000) goto LAB_0127d254;
      if (param_1 != 0x10400000) goto LAB_0127d260;
    }
LAB_0127d250:
    lVar1 = 0x30;
    goto LAB_0127d254;
  }
  if (param_1 < 0x40400000) {
    if (param_1 != 0x10800000) {
      if (param_1 != 0x10c00000) {
        if (param_1 != 0x40000000) {
LAB_0127d260:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        goto LAB_0127d254;
      }
LAB_0127d23c:
      lVar1 = 0;
      goto LAB_0127d254;
    }
  }
  else {
    if (param_1 == 0x40c00000) goto LAB_0127d23c;
    if (param_1 != 0x40800000) {
      if (param_1 != 0x40400000) goto LAB_0127d260;
      goto LAB_0127d250;
    }
  }
LAB_0127d234:
  lVar1 = 0x20;
LAB_0127d254:
  return -0x8000000000000000 >> lVar1;
}

