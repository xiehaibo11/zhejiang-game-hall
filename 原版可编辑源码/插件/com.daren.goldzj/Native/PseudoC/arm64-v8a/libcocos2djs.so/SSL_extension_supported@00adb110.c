
undefined8 SSL_extension_supported(uint param_1)

{
                    /* try { // try from 00adb12c to 00bdb16b has its CatchHandler @ 00adb1d4 */
  if ((((0x23 < param_1) || ((1L << ((ulong)param_1 & 0x3f) & 0x80065fc21U) == 0)) &&
      (param_1 != 0x3374)) && (param_1 != 0xff01)) {
    return 0;
  }
  return 1;
}

