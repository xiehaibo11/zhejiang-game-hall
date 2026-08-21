
void FUN_010ad490(uint *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  byte *pbVar13;
  int iVar14;
  
  lVar7 = (long)(int)param_1[1];
  uVar9 = (long)((param_3 + lVar7) - 1U & -lVar7) >> ((ulong)*param_1 & 0x3f);
                    /* try { // try from 010ad4c0 to 011ad4cb has its CatchHandler @ 010ad4e0 */
                    /* try { // try from 010ad4cc to 011ad4fb has its CatchHandler @ 010ad434 */
  if (((*(uint *)(param_5 + 0x18) & 7) == 2) ||
     (uVar8 = uVar9, (long)(int)param_1[5] < (long)((param_4 - param_3) - lVar7))) {
    uVar8 = (long)(-lVar7 & param_4) >> ((ulong)*param_1 & 0x3f);
  }
  if ((long)uVar8 < 0) {
    return;
  }
                    /* catch() { ... } // from try @ 010ad4c0 with catch @ 010ad4e0 */
  uVar10 = (ulong)(ushort)param_1[0x14];
  if ((long)uVar10 <= (long)uVar9) {
    return;
  }
  uVar9 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
  if ((long)uVar10 <= (long)uVar8) {
    uVar8 = uVar10 - 1;
  }
  iVar6 = (int)(short)((uVar9 << 0x2d) >> 0x30);
                    /* catch() { ... } // from try @ 010ad55c with catch @ 010ad510 */
  sVar2 = (short)(uVar9 >> 3);
  if (iVar6 < *(short *)((long)param_1 + 0x112)) {
    *(short *)((long)param_1 + 0x112) = sVar2;
  }
  iVar1 = (int)((uint)uVar8 << 0xd) >> 0x10;
  if ((short)param_1[0x45] < (short)(uVar8 >> 3)) {
    *(short *)(param_1 + 0x45) = (short)(uVar8 >> 3);
  }
                    /* try { // try from 010ad558 to 011ad55b has its CatchHandler @ 010ad580 */
  bVar12 = (byte)(0x7f >> (ulong)((uint)uVar8 & 7)) ^ 0xff;
                    /* try { // try from 010ad55c to 011ad643 has its CatchHandler @ 010ad510 */
  lVar7 = *(long *)(param_1 + 0x16);
  lVar11 = *(long *)(param_1 + 0x40);
  iVar14 = iVar1 - iVar6;
  pbVar13 = (byte *)(lVar7 + lVar11 + (long)sVar2);
  bVar5 = (byte)(0xff >> (ulong)((uint)uVar9 & 7));
  if (iVar14 < 1) {
    bVar12 = bVar12 & bVar5;
    goto LAB_010ad61c;
  }
                    /* catch() { ... } // from try @ 010ad558 with catch @ 010ad580 */
  *pbVar13 = bVar5 | *pbVar13;
  if (iVar14 != 1) {
    iVar3 = (iVar6 + -1) - iVar1;
    if (iVar3 < -2) {
      iVar3 = -3;
    }
    uVar4 = (iVar3 + iVar1 + 1) - iVar6;
    uVar9 = (ulong)uVar4 + 1;
    memset((void *)(lVar7 + lVar11 + sVar2 + 1),0xff,uVar9);
    if (1 < uVar9) {
      uVar4 = ~uVar4 & 1;
      lVar7 = uVar9 - uVar4;
      if (lVar7 != 0) {
        iVar14 = iVar14 - (int)lVar7;
        pbVar13 = pbVar13 + lVar7;
        do {
          lVar7 = lVar7 + -2;
        } while (lVar7 != 0);
        if (uVar4 == 0) goto LAB_010ad610;
      }
    }
    iVar14 = iVar14 + 1;
    do {
      iVar14 = iVar14 + -1;
      pbVar13 = pbVar13 + 1;
    } while (2 < iVar14);
  }
LAB_010ad610:
  pbVar13 = pbVar13 + 1;
LAB_010ad61c:
  *pbVar13 = bVar12 | *pbVar13;
  return;
}

