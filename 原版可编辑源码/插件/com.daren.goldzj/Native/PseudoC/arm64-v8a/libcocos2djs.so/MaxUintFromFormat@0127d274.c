
/* v8::internal::MaxUintFromFormat(v8::internal::VectorFormat) */

ulong v8::internal::MaxUintFromFormat(int param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  if (param_1 < 0x10800000) {
    if (param_1 < 0xc00000) {
      if (param_1 == 0) goto LAB_0127d330;
      if (param_1 != 0x400000) {
        if (param_1 != 0x800000) goto LAB_0127d33c;
        goto LAB_0127d310;
      }
    }
    else {
      if (param_1 == 0xc00000) goto LAB_0127d318;
      if (param_1 == 0x10000000) goto LAB_0127d330;
      if (param_1 != 0x10400000) goto LAB_0127d33c;
    }
LAB_0127d32c:
    lVar1 = 0x30;
    goto LAB_0127d330;
  }
  if (param_1 < 0x40400000) {
    if (param_1 != 0x10800000) {
      if (param_1 != 0x10c00000) {
        if (param_1 != 0x40000000) {
LAB_0127d33c:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        goto LAB_0127d330;
      }
LAB_0127d318:
      lVar1 = 0;
      goto LAB_0127d330;
    }
  }
  else {
    if (param_1 == 0x40c00000) goto LAB_0127d318;
    if (param_1 != 0x40800000) {
      if (param_1 != 0x40400000) goto LAB_0127d33c;
      goto LAB_0127d32c;
    }
  }
LAB_0127d310:
  lVar1 = 0x20;
LAB_0127d330:
  return 0xffffffffffffffff >> lVar1;
}

