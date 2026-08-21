
void FUN_00a22b88(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
  if ((DAT_01782390 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a22b60 with catch @ 00a22bac */
    DAT_017823e2._0_7_ = 0x6c72756362696c;
    DAT_017823e2._7_1_ = 0x2f;
    uRam00000000017823ea = 0x312e32352e37;
                    /* try { // try from 00a22bc8 to 00b22c5b has its CatchHandler @ 00a22bc8
                       catch() { ... } // from try @ 00a22bc8 with catch @ 00a22bc8
                       catch() { ... } // from try @ 00a22c64 with catch @ 00a22bc8
                       catch() { ... } // from try @ 00a22d1c with catch @ 00a22bc8 */
    sVar1 = strlen((char *)&DAT_017823e2);
    uVar4 = -sVar1 + 200;
    puVar5 = (undefined1 *)((long)&DAT_017823e2 + sVar1);
    if ((1 < uVar4) && (lVar2 = thunk_FUN_00a5e91c(sVar1 + 0x17823e3,-sVar1 + 199), lVar2 != 0)) {
      *puVar5 = 0x20;
      uVar4 = uVar4 - (lVar2 + 1);
      puVar5 = puVar5 + lVar2 + 1;
    }
    uVar3 = zlibVersion();
    FUN_00a241ac(puVar5,uVar4," zlib/%s",uVar3);
    DAT_01782390 = 1;
  }
  if ((DAT_01782391 & 1) == 0) {
    thunk_FUN_00a5e91c(&DAT_01782392,0x50);
    DAT_017699b0 = &DAT_01782392;
    DAT_017699c0 = zlibVersion();
                    /* try { // try from 00a22c5c to 00b22c63 has its CatchHandler @ 00a22d70 */
    DAT_01782391 = 1;
  }
                    /* try { // try from 00a22c64 to 00b22cc3 has its CatchHandler @ 00a22bc8 */
  return;
}

