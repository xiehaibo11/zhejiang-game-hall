
undefined8 FUN_00a14b28(undefined8 param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a14a4c with catch @ 00a14b28
                       catch(type#1 @ 00000000) { ... } // from try @ 00a14aa0 with catch @ 00a14b28
                        */
  bVar1 = *param_3;
  uVar2 = (uint)bVar1;
  if (bVar1 < 0xa0) {
    *param_2 = uVar2;
    return 1;
  }
  if (uVar2 < 0xe0) {
                    /* try { // try from 00a14b48 to 00b14b4b has its CatchHandler @ 00a14b54 */
                    /* try { // try from 00a14b4c to 00b14b57 has its CatchHandler @ 00a149c8 */
    uVar3 = (ulong)bVar1 - 0xa0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a14b48 with catch @ 00a14b54
                        */
                    /* try { // try from 00a14b58 to 00b14b5b has its CatchHandler @ 00a14b64 */
                    /* try { // try from 00a14b5c to 00b14b67 has its CatchHandler @ 00a149c8 */
    if ((0xefff1fff8fffffffU >> (uVar3 & 0x3f) & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a14b58 with catch @ 00a14b64
                        */
      return 0xffffffff;
    }
    puVar4 = &DAT_01302a0e;
  }
  else {
                    /* try { // try from 00a14b68 to 00b14c63 has its CatchHandler @ 00a14b68
                       catch() { ... } // from try @ 00a14b68 with catch @ 00a14b68
                       catch() { ... } // from try @ 00a14c70 with catch @ 00a14b68 */
    if (uVar2 < 0xf0) {
      return 0xffffffff;
    }
    uVar3 = (ulong)bVar1 - 0xf0;
    if ((0x73ffUL >> (uVar3 & 0x3f) & 1) == 0) {
      return 0xffffffff;
    }
    puVar4 = &DAT_012fcc34;
  }
  *param_2 = (uint)*(ushort *)(puVar4 + uVar3 * 2);
  return 1;
}

