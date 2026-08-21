
undefined8 FUN_00a13df4(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3;
                    /* try { // try from 00a13dfc to 00b13e03 has its CatchHandler @ 00a13e18 */
  if ((char)*param_3 < '\0') {
                    /* try { // try from 00a13e04 to 00b13ea7 has its CatchHandler @ 00a13b38 */
    if (uVar1 - 0x80 == 0x7f) {
      return 0xffffffff;
    }
                    /* catch() { ... } // from try @ 00a13dfc with catch @ 00a13e18 */
                    /* catch() { ... } // from try @ 00a13d7c with catch @ 00a13e1c */
    uVar1 = (uint)*(ushort *)(&DAT_013013e8 + (long)(int)(uVar1 - 0x80) * 2);
  }
                    /* catch() { ... } // from try @ 00a13c20 with catch @ 00a13e20 */
  *param_2 = uVar1;
                    /* catch() { ... } // from try @ 00a13ba4 with catch @ 00a13e28 */
  return 1;
}

