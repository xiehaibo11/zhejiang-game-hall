
undefined8 * FUN_00a22c74(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
  if ((DAT_01782390 & 1) == 0) {
    DAT_017823e2._0_7_ = 0x6c72756362696c;
    DAT_017823e2._7_1_ = 0x2f;
    uRam00000000017823ea = 0x312e32352e37;
    sVar1 = strlen((char *)&DAT_017823e2);
    uVar4 = -sVar1 + 200;
                    /* try { // try from 00a22cc4 to 00b22ccf has its CatchHandler @ 00a22d70 */
    puVar5 = (undefined1 *)((long)&DAT_017823e2 + sVar1);
                    /* try { // try from 00a22cd0 to 00b22cd3 has its CatchHandler @ 00a22d6c */
    if ((1 < uVar4) && (lVar2 = thunk_FUN_00a5e91c(sVar1 + 0x17823e3,-sVar1 + 199), lVar2 != 0)) {
                    /* try { // try from 00a22ce0 to 00b22cf7 has its CatchHandler @ 00a22d68 */
      *puVar5 = 0x20;
      uVar4 = uVar4 - (lVar2 + 1);
      puVar5 = puVar5 + lVar2 + 1;
    }
    uVar3 = zlibVersion();
                    /* try { // try from 00a22d04 to 00b22d1b has its CatchHandler @ 00a22d64 */
    FUN_00a241ac(puVar5,uVar4," zlib/%s",uVar3);
    DAT_01782390 = 1;
  }
                    /* try { // try from 00a22d1c to 00b22d83 has its CatchHandler @ 00a22bc8 */
  return &DAT_017823e2;
}

