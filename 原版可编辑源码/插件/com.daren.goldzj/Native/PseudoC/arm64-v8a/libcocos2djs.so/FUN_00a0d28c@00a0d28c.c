
undefined8 * FUN_00a0d28c(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
                    /* catch() { ... } // from try @ 00a0d130 with catch @ 00a0d290 */
                    /* catch() { ... } // from try @ 00a0d014 with catch @ 00a0d294 */
                    /* catch() { ... } // from try @ 00a0d1c8 with catch @ 00a0d2a4 */
  if ((DAT_01d38a90 & 1) == 0) {
    DAT_01d38ae2._0_7_ = 0x6c72756362696c;
                    /* catch() { ... } // from try @ 00a0d180 with catch @ 00a0d2c4 */
    DAT_01d38ae2._7_1_ = 0x2f;
    uRam0000000001d38aea = 0x312e32352e37;
    sVar1 = strlen((char *)&DAT_01d38ae2);
    uVar4 = -sVar1 + 200;
    puVar5 = (undefined1 *)((long)&DAT_01d38ae2 + sVar1);
                    /* catch() { ... } // from try @ 00a0d178 with catch @ 00a0d2e4 */
    if ((1 < uVar4) && (lVar2 = thunk_FUN_00a47f34(sVar1 + 0x1d38ae3,-sVar1 + 199), lVar2 != 0)) {
      *puVar5 = 0x20;
                    /* try { // try from 00a0d300 to 00b0d383 has its CatchHandler @ 00a0d300
                       catch() { ... } // from try @ 00a0d300 with catch @ 00a0d300
                       catch() { ... } // from try @ 00a0d3b0 with catch @ 00a0d300 */
      uVar4 = uVar4 - (lVar2 + 1);
      puVar5 = puVar5 + lVar2 + 1;
    }
    uVar3 = zlibVersion();
    FUN_00a0e7c4(puVar5,uVar4," zlib/%s",uVar3);
    DAT_01d38a90 = 1;
  }
  return &DAT_01d38ae2;
}

