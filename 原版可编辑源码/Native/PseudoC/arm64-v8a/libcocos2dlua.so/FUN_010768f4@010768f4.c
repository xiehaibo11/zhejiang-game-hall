
undefined8 FUN_010768f4(long *param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  param_1[0xc] = param_1[4];
  param_1[0xb] = param_1[3];
  uVar4 = (ulong)*(ushort *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x11] = param_1[9];
  param_1[0x10] = param_1[8];
  param_1[0xf] = param_1[7];
  param_1[0xe] = param_1[6];
  param_1[0xd] = param_1[5];
                    /* try { // try from 01076930 to 01176957 has its CatchHandler @ 01076978 */
  if ((uVar4 == 0) || (uVar1 = *(ushort *)((long)param_1 + 0x5a), uVar1 == 0)) {
    uVar3 = 0x97;
  }
  else {
    if ((*(byte *)(lVar5 + 0x150) >> 3 & 1) != 0) {
      lVar2 = FT_DivFix(uVar4 << 6,*(undefined2 *)(lVar5 + 0x88));
      param_1[0xc] = lVar2;
                    /* try { // try from 01076960 to 01176963 has its CatchHandler @ 01076980 */
      lVar2 = FT_DivFix((ulong)*(ushort *)((long)param_1 + 0x5a) << 6,*(undefined2 *)(lVar5 + 0x88))
      ;
                    /* try { // try from 01076964 to 011769bf has its CatchHandler @ 010768e0 */
      param_1[0xd] = lVar2;
      lVar2 = FT_MulFix((long)*(short *)(lVar5 + 0x8a),lVar2);
                    /* catch() { ... } // from try @ 01076930 with catch @ 01076978 */
                    /* catch() { ... } // from try @ 01076960 with catch @ 01076980 */
      param_1[0xe] = lVar2 + 0x20U & 0xffffffffffffffc0;
      lVar2 = FT_MulFix((long)*(short *)(lVar5 + 0x8c),param_1[0xd]);
      param_1[0xf] = lVar2 + 0x20U & 0xffffffffffffffc0;
      lVar2 = FT_MulFix((long)*(short *)(lVar5 + 0x8e),param_1[0xd]);
      param_1[0x10] = lVar2 + 0x20U & 0xffffffffffffffc0;
      lVar5 = FT_MulFix((long)*(short *)(lVar5 + 0x90),param_1[0xc]);
                    /* try { // try from 010769c0 to 01176a3b has its CatchHandler @ 010769c0
                       catch() { ... } // from try @ 010769c0 with catch @ 010769c0
                       catch() { ... } // from try @ 01076a40 with catch @ 010769c0 */
      uVar4 = (ulong)*(ushort *)(param_1 + 0xb);
      uVar1 = *(ushort *)((long)param_1 + 0x5a);
      param_1[0x11] = lVar5 + 0x20U & 0xffffffffffffffc0;
    }
    if ((uint)uVar4 < (uint)uVar1) {
      *(ushort *)(param_1 + 0x14) = uVar1;
      param_1[0x16] = param_1[0xd];
      lVar2 = FT_DivFix(uVar4);
      lVar5 = 0x10000;
      param_1[0x12] = lVar2;
    }
    else {
      *(short *)(param_1 + 0x14) = (short)uVar4;
      param_1[0x16] = param_1[0xc];
      param_1[0x12] = 0x10000;
      lVar5 = FT_DivFix(uVar1,uVar4);
    }
    uVar3 = 0;
    param_1[0x13] = lVar5;
    *(undefined4 *)((long)param_1 + 0x214) = 0xffffffff;
                    /* try { // try from 01076a3c to 01176a3f has its CatchHandler @ 01076a50 */
    *(undefined1 *)(param_1 + 0x1b) = 1;
  }
                    /* try { // try from 01076a40 to 01176a87 has its CatchHandler @ 010769c0 */
  return uVar3;
}

