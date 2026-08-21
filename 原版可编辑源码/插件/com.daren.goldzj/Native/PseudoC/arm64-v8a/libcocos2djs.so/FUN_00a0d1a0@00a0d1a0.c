
void FUN_00a0d1a0(void)

{
  size_t sVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
  if ((DAT_01d38a90 & 1) == 0) {
                    /* try { // try from 00a0d1c8 to 00b0d1cf has its CatchHandler @ 00a0d2a4 */
    DAT_01d38ae2._0_7_ = 0x6c72756362696c;
    DAT_01d38ae2._7_1_ = 0x2f;
    uRam0000000001d38aea = 0x312e32352e37;
    sVar1 = strlen((char *)&DAT_01d38ae2);
    uVar4 = -sVar1 + 200;
    puVar5 = (undefined1 *)((long)&DAT_01d38ae2 + sVar1);
    if ((1 < uVar4) && (lVar2 = thunk_FUN_00a47f34(sVar1 + 0x1d38ae3,-sVar1 + 199), lVar2 != 0)) {
                    /* try { // try from 00a0d210 to 00b0d22f has its CatchHandler @ 00a0d278 */
      *puVar5 = 0x20;
      uVar4 = uVar4 - (lVar2 + 1);
      puVar5 = puVar5 + lVar2 + 1;
    }
    uVar3 = zlibVersion();
                    /* try { // try from 00a0d230 to 00b0d2ff has its CatchHandler @ 00a0cfa0 */
    FUN_00a0e7c4(puVar5,uVar4," zlib/%s",uVar3);
    DAT_01d38a90 = 1;
  }
  if ((DAT_01d38a91 & 1) == 0) {
    thunk_FUN_00a47f34(&DAT_01d38a92,0x50);
    DAT_01d1b6f8 = &DAT_01d38a92;
    DAT_01d1b708 = zlibVersion();
                    /* catch() { ... } // from try @ 00a0d210 with catch @ 00a0d278 */
    DAT_01d38a91 = 1;
  }
                    /* catch() { ... } // from try @ 00a0d150 with catch @ 00a0d27c */
  return;
}

