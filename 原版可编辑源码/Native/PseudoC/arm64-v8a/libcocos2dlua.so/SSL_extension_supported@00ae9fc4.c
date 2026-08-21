
undefined8 SSL_extension_supported(uint param_1)

{
                    /* try { // try from 00ae9fcc to 00be9fe3 has its CatchHandler @ 00ae9770 */
                    /* try { // try from 00ae9fe4 to 00be9fef has its CatchHandler @ 00aea0e0 */
                    /* try { // try from 00ae9ff0 to 00be9ffb has its CatchHandler @ 00aea108 */
  if ((((0x23 < param_1) || ((1L << ((ulong)param_1 & 0x3f) & 0x80065fc21U) == 0)) &&
      (param_1 != 0x3374)) && (param_1 != 0xff01)) {
    return 0;
  }
  return 1;
}

