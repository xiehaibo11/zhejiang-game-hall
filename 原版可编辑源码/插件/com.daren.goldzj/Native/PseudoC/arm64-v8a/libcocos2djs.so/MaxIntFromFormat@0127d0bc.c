
/* v8::internal::MaxIntFromFormat(v8::internal::VectorFormat) */

ulong v8::internal::MaxIntFromFormat(int param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  if (param_1 < 0x10800000) {
    if (param_1 < 0xc00000) {
      if (param_1 == 0) goto LAB_0127d178;
      if (param_1 != 0x400000) {
        if (param_1 != 0x800000) goto LAB_0127d184;
        goto LAB_0127d158;
      }
    }
    else {
      if (param_1 == 0xc00000) goto LAB_0127d160;
      if (param_1 == 0x10000000) goto LAB_0127d178;
      if (param_1 != 0x10400000) goto LAB_0127d184;
    }
LAB_0127d174:
    lVar1 = 0x30;
    goto LAB_0127d178;
  }
  if (param_1 < 0x40400000) {
    if (param_1 != 0x10800000) {
      if (param_1 != 0x10c00000) {
        if (param_1 != 0x40000000) {
LAB_0127d184:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        goto LAB_0127d178;
      }
LAB_0127d160:
      lVar1 = 0;
      goto LAB_0127d178;
    }
  }
  else {
    if (param_1 == 0x40c00000) goto LAB_0127d160;
    if (param_1 != 0x40800000) {
      if (param_1 != 0x40400000) goto LAB_0127d184;
      goto LAB_0127d174;
    }
  }
LAB_0127d158:
  lVar1 = 0x20;
LAB_0127d178:
  return 0x7fffffffffffffff >> lVar1;
}

