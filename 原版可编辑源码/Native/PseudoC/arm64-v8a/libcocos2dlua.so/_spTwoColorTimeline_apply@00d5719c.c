
void _spTwoColorTimeline_apply
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,int param_8)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  float *pfVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  pfVar4 = *(float **)(param_4 + 0x20);
  fVar21 = *pfVar4;
  plVar14 = *(long **)(*(long *)(param_5 + 0x28) + (long)*(int *)(param_4 + 0x28) * 8);
  if (fVar21 <= param_2) {
    iVar8 = *(int *)(param_4 + 0x18);
    if (pfVar4[iVar8 + -8] <= param_2) {
      fVar20 = pfVar4[iVar8 + -7];
      fVar19 = pfVar4[iVar8 + -6];
      fVar18 = pfVar4[iVar8 + -5];
      fVar17 = pfVar4[iVar8 + -4];
      fVar21 = pfVar4[iVar8 + -3];
      fVar15 = pfVar4[iVar8 + -2];
      fVar16 = pfVar4[iVar8 + -1];
    }
    else {
      iVar6 = iVar8 + 7;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      iVar8 = (iVar6 >> 3) + -2;
      if (iVar8 == 0) {
        iVar8 = 8;
      }
      else {
        iVar6 = 0;
        iVar7 = iVar8;
        do {
          iVar2 = iVar8 >> 1;
          if (pfVar4[(iVar2 + 1) * 8] <= param_2) {
            iVar6 = iVar2 + 1;
            iVar2 = iVar7;
          }
          iVar8 = iVar6 + iVar2;
          iVar7 = iVar2;
        } while (iVar6 != iVar2);
        fVar21 = pfVar4[iVar6 * 8];
        iVar8 = iVar6 * 8 + 8;
      }
      pfVar13 = pfVar4 + iVar8;
      lVar5 = *(long *)(param_4 + 0x10);
      iVar6 = iVar8 + 7;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      iVar6 = (iVar6 >> 3) * 0x13;
      fVar15 = *(float *)(lVar5 + (long)(iVar6 + -0x13) * 4);
      fVar21 = 1.0 - (param_2 - *pfVar13) / (fVar21 - *pfVar13);
      bVar3 = 0.0 <= fVar21;
      if (1.0 < fVar21) {
        fVar21 = 1.0;
      }
      fVar16 = 0.0;
      if (bVar3) {
        fVar16 = fVar21;
      }
      fVar22 = fVar16;
      if ((fVar15 != 0.0) && (fVar22 = 0.0, fVar15 != 1.0)) {
        uVar9 = iVar6 - 0x12;
        lVar10 = 0;
        lVar11 = ((ulong)uVar9 << 0x20) + -0x100000000;
        lVar12 = ((ulong)uVar9 << 0x20) + -0x200000000;
        do {
          fVar21 = *(float *)(lVar5 + (long)(int)uVar9 * 4 + lVar10 * 4);
          if (fVar16 <= fVar21) {
            if ((int)lVar10 == 0) {
              fVar15 = 0.0;
              fVar17 = 0.0;
            }
            else {
              fVar15 = *(float *)(lVar5 + (lVar12 >> 0x1e));
              fVar17 = *(float *)(lVar5 + (lVar11 >> 0x1e));
              uVar9 = (int)lVar10 + uVar9;
            }
            fVar22 = fVar17 + ((fVar16 - fVar15) *
                              (*(float *)(lVar5 + (long)(int)(uVar9 + 1) * 4) - fVar17)) /
                              (fVar21 - fVar15);
            goto LAB_00d57494;
          }
          lVar10 = lVar10 + 2;
          lVar11 = lVar11 + 0x200000000;
          lVar12 = lVar12 + 0x200000000;
        } while ((long)(int)uVar9 + -2 + lVar10 < (long)(iVar6 + -2));
        fVar15 = *(float *)(lVar5 + (lVar11 >> 0x1e));
        fVar22 = fVar15 + ((fVar16 - fVar21) * (1.0 - fVar15)) / (1.0 - fVar21);
      }
LAB_00d57494:
                    /* try { // try from 00d574a0 to 00e574f3 has its CatchHandler @ 00d574a0
                       catch() { ... } // from try @ 00d574a0 with catch @ 00d574a0
                       catch() { ... } // from try @ 00d57604 with catch @ 00d574a0 */
      fVar20 = pfVar13[-7] + fVar22 * (pfVar4[(long)iVar8 + 1] - pfVar13[-7]);
      fVar19 = pfVar13[-6] + fVar22 * (pfVar4[(long)iVar8 + 2] - pfVar13[-6]);
      fVar18 = pfVar13[-5] + fVar22 * (pfVar4[(long)iVar8 + 3] - pfVar13[-5]);
      fVar17 = pfVar13[-4] + fVar22 * (pfVar4[(long)iVar8 + 4] - pfVar13[-4]);
      fVar21 = pfVar13[-3] + fVar22 * (pfVar4[(long)iVar8 + 5] - pfVar13[-3]);
                    /* try { // try from 00d574f4 to 00e5750b has its CatchHandler @ 00d576c8 */
      fVar15 = pfVar13[-2] + fVar22 * (pfVar4[(long)iVar8 + 6] - pfVar13[-2]);
      fVar16 = pfVar13[-1] + fVar22 * (pfVar4[(long)iVar8 + 7] - pfVar13[-1]);
    }
    plVar1 = plVar14 + 2;
    if (param_3 == 1.0) {
                    /* try { // try from 00d5750c to 00e5750f has its CatchHandler @ 00d576a0 */
                    /* try { // try from 00d57514 to 00e57527 has its CatchHandler @ 00d5769c */
      spColor_setFromFloats(fVar20,fVar19,fVar18,fVar17,plVar1);
                    /* try { // try from 00d5752c to 00e5754f has its CatchHandler @ 00d576b4 */
      spColor_setFromFloats(fVar21,fVar15,fVar16,0x3f800000,plVar14[4]);
      return;
    }
    pfVar4 = (float *)plVar14[4];
    if (param_8 == 0) {
      spColor_setFromColor(plVar1,*plVar14 + 0x20);
      spColor_setFromColor(pfVar4,*(undefined8 *)(*plVar14 + 0x30));
    }
                    /* try { // try from 00d57584 to 00e575c7 has its CatchHandler @ 00d576d8 */
    spColor_addFloats((fVar20 - *(float *)(plVar14 + 2)) * param_3,
                      (fVar19 - *(float *)((long)plVar14 + 0x14)) * param_3,
                      (fVar18 - *(float *)(plVar14 + 3)) * param_3,
                      (fVar17 - *(float *)((long)plVar14 + 0x1c)) * param_3,plVar1);
    fVar21 = fVar21 - *pfVar4;
    fVar15 = fVar15 - pfVar4[1];
    fVar16 = fVar16 - pfVar4[2];
  }
  else {
    if (1 < param_8 - 1U) {
      if (param_8 != 0) {
        return;
      }
      spColor_setFromColor(plVar14 + 2,*plVar14 + 0x20);
      spColor_setFromColor(plVar14[4],*(undefined8 *)(*plVar14 + 0x30));
      return;
    }
    lVar5 = *plVar14;
    pfVar4 = (float *)plVar14[4];
    pfVar13 = *(float **)(lVar5 + 0x30);
    spColor_addFloats((*(float *)(lVar5 + 0x20) - *(float *)(plVar14 + 2)) * param_3,
                      (*(float *)(lVar5 + 0x24) - *(float *)((long)plVar14 + 0x14)) * param_3,
                      (*(float *)(lVar5 + 0x28) - *(float *)(plVar14 + 3)) * param_3,
                      (*(float *)(lVar5 + 0x2c) - *(float *)((long)plVar14 + 0x1c)) * param_3);
    fVar21 = *pfVar13 - *pfVar4;
    fVar15 = pfVar13[1] - pfVar4[1];
    fVar16 = pfVar13[2] - pfVar4[2];
  }
                    /* try { // try from 00d575d0 to 00e57603 has its CatchHandler @ 00d576b0 */
  spColor_addFloats(fVar21 * param_3,fVar15 * param_3,fVar16 * param_3,0,pfVar4);
  return;
}

