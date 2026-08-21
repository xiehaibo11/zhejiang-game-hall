
void pvmp3_st_intensity(long param_1,long param_2,uint param_3,ulong param_4,uint param_5)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  
  lVar5 = (long)(int)(&DAT_01438708)[param_3 & 7];
  uVar6 = -(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2;
  piVar7 = (int *)(param_1 + uVar6);
  iVar4 = (int)param_5 >> 1;
  piVar8 = (int *)(param_2 + uVar6);
  piVar3 = piVar7;
  piVar2 = piVar8;
  if (iVar4 != 0) {
    uVar6 = (ulong)(iVar4 - 1) + 1;
                    /* try { // try from 00ec4638 to 00fc463f has its CatchHandler @ 00ec4650 */
    if ((3 < uVar6) &&
       ((lVar1 = ((long)(int)param_4 + (ulong)(iVar4 - 1) * 2) * 4 + 8,
        (int *)(param_1 + lVar1) <= piVar8 || ((int *)(param_2 + lVar1) <= piVar7)))) {
      uVar10 = uVar6 & 0x1fffffffc;
      iVar4 = iVar4 - (int)uVar10;
      piVar3 = piVar7 + uVar10 * 2;
      piVar2 = piVar8 + uVar10 * 2;
      uVar11 = uVar10;
      do {
        iVar22 = piVar7[1];
        iVar19 = piVar7[2];
        iVar23 = piVar7[3];
        iVar20 = piVar7[4];
        iVar24 = piVar7[5];
        iVar21 = piVar7[6];
        iVar25 = piVar7[7];
        uVar11 = uVar11 - 4;
                    /* catch() { ... } // from try @ 00ec46b0 with catch @ 00ec471c */
                    /* catch() { ... } // from try @ 00ec4764 with catch @ 00ec4738 */
        iVar9 = (int)((ulong)(lVar5 * (*piVar7 << 1)) >> 0x20);
        iVar15 = (int)((ulong)(lVar5 * (iVar19 << 1)) >> 0x20);
        iVar12 = (int)((ulong)(lVar5 * (iVar20 << 1)) >> 0x20);
        iVar16 = (int)((ulong)(lVar5 * (iVar21 << 1)) >> 0x20);
                    /* try { // try from 00ec475c to 00fc4763 has its CatchHandler @ 00ec47cc */
                    /* try { // try from 00ec4764 to 00fc47e7 has its CatchHandler @ 00ec4738 */
        iVar13 = (int)((ulong)(lVar5 * (iVar22 << 1)) >> 0x20);
        iVar17 = (int)((ulong)(lVar5 * (iVar23 << 1)) >> 0x20);
        iVar14 = (int)((ulong)(lVar5 * (iVar24 << 1)) >> 0x20);
        iVar18 = (int)((ulong)(lVar5 * (iVar25 << 1)) >> 0x20);
        *piVar8 = *piVar7 - iVar9;
        piVar8[1] = iVar22 - iVar13;
        piVar8[2] = iVar19 - iVar15;
        piVar8[3] = iVar23 - iVar17;
        piVar8[4] = iVar20 - iVar12;
        piVar8[5] = iVar24 - iVar14;
        piVar8[6] = iVar21 - iVar16;
        piVar8[7] = iVar25 - iVar18;
        piVar8 = piVar8 + 8;
        *piVar7 = iVar9;
        piVar7[1] = iVar13;
        piVar7[2] = iVar15;
        piVar7[3] = iVar17;
        piVar7[4] = iVar12;
        piVar7[5] = iVar14;
        piVar7[6] = iVar16;
        piVar7[7] = iVar18;
        piVar7 = piVar7 + 8;
      } while (uVar11 != 0);
      piVar7 = piVar3;
      piVar8 = piVar2;
      if (uVar6 == uVar10) goto joined_r0x00ec4790;
    }
    do {
      iVar4 = iVar4 + -1;
                    /* catch() { ... } // from try @ 00ec4638 with catch @ 00ec4650 */
      iVar9 = (int)((ulong)((*piVar7 << 1) * lVar5) >> 0x20);
      *piVar8 = *piVar7 - iVar9;
      *piVar7 = iVar9;
      piVar2 = piVar8 + 2;
      iVar9 = (int)((ulong)((piVar7[1] << 1) * lVar5) >> 0x20);
      piVar8[1] = piVar7[1] - iVar9;
      piVar3 = piVar7 + 2;
                    /* catch() { ... } // from try @ 00ec46b8 with catch @ 00ec468c */
      piVar7[1] = iVar9;
      piVar7 = piVar3;
      piVar8 = piVar2;
    } while (iVar4 != 0);
  }
joined_r0x00ec4790:
  if ((param_5 & 1) == 0) {
    return;
  }
  iVar4 = (int)((ulong)((*piVar3 << 1) * lVar5) >> 0x20);
  *piVar2 = *piVar3 - iVar4;
  *piVar3 = iVar4;
  return;
}

