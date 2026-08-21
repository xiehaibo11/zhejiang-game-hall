
uint tls1_ec_curve_id2nid(uint param_1,uint *param_2)

{
  uint uVar1;
  
                    /* try { // try from 00aea0cc to 00bea1eb has its CatchHandler @ 00ae9770 */
  uVar1 = 0;
  if ((0 < (int)param_1) && (param_1 < 0x1e)) {
                    /* catch() { ... } // from try @ 00aea0b8 with catch @ 00aea0dc */
                    /* catch() { ... } // from try @ 00ae9fe4 with catch @ 00aea0e0 */
                    /* catch() { ... } // from try @ 00ae9f9c with catch @ 00aea0e4 */
                    /* catch() { ... } // from try @ 00ae9fb8 with catch @ 00aea0e8 */
                    /* catch() { ... } // from try @ 00ae9e64 with catch @ 00aea0ec */
    if (param_2 != (uint *)0x0) {
                    /* catch() { ... } // from try @ 00ae993c with catch @ 00aea0f0 */
                    /* catch() { ... } // from try @ 00ae9f04 with catch @ 00aea0f4 */
      *param_2 = (&UINT_013d35ec)[(long)(int)param_1 * 3];
    }
                    /* catch() { ... } // from try @ 00ae98a0 with catch @ 00aea0f8 */
    uVar1 = (&UINT_013d35e4)[(long)(int)param_1 * 3];
  }
                    /* catch() { ... } // from try @ 00ae9844 with catch @ 00aea0fc */
  return uVar1;
}

