
undefined * FUN_00a22d30(void)

{
  if ((DAT_01782391 & 1) == 0) {
    thunk_FUN_00a5e91c(&DAT_01782392,0x50);
                    /* catch() { ... } // from try @ 00a22d04 with catch @ 00a22d64 */
                    /* catch() { ... } // from try @ 00a22ce0 with catch @ 00a22d68 */
    DAT_017699b0 = &DAT_01782392;
                    /* catch() { ... } // from try @ 00a22cd0 with catch @ 00a22d6c */
    DAT_017699c0 = zlibVersion();
                    /* catch() { ... } // from try @ 00a22c5c with catch @ 00a22d70
                       catch() { ... } // from try @ 00a22cc4 with catch @ 00a22d70 */
    DAT_01782391 = 1;
  }
                    /* try { // try from 00a22d84 to 00b22dd3 has its CatchHandler @ 00a22d84
                       catch() { ... } // from try @ 00a22d84 with catch @ 00a22d84
                       catch() { ... } // from try @ 00a22de4 with catch @ 00a22d84 */
  return &DAT_01769988;
}

