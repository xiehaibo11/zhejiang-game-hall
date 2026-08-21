
void _spTransformConstraintTimeline_apply
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  float *pfVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pfVar5 = *(float **)(param_4 + 0x20);
  fVar16 = *pfVar5;
  plVar4 = *(long **)(*(long *)(param_5 + 0x50) + (long)*(int *)(param_4 + 0x28) * 8);
  if (fVar16 <= param_2) {
    iVar10 = *(int *)(param_4 + 0x18);
    if (pfVar5[iVar10 + -5] <= param_2) {
      uVar14 = CONCAT44(pfVar5[iVar10 + -3],pfVar5[iVar10 + -4]);
                    /* catch() { ... } // from try @ 00d59080 with catch @ 00d590cc */
      uVar15 = CONCAT44(pfVar5[iVar10 + -1],pfVar5[iVar10 + -2]);
      if (param_8 == 0) goto LAB_00d5924c;
      goto LAB_00d590d8;
    }
    iVar10 = iVar10 / 5 + -2;
    if (iVar10 == 0) {
      iVar10 = 5;
    }
    else {
                    /* catch() { ... } // from try @ 00d59088 with catch @ 00d5905c */
      iVar7 = 0;
      iVar8 = iVar10;
      do {
        iVar2 = iVar10 >> 1;
        if (pfVar5[(iVar2 + 1) * 5] <= param_2) {
          iVar7 = iVar2 + 1;
          iVar2 = iVar8;
        }
                    /* try { // try from 00d59080 to 00e59087 has its CatchHandler @ 00d590cc */
        iVar10 = iVar7 + iVar2;
        iVar8 = iVar2;
                    /* try { // try from 00d59088 to 00e590e7 has its CatchHandler @ 00d5905c */
      } while (iVar7 != iVar2);
      fVar16 = pfVar5[iVar7 * 5];
      iVar10 = iVar7 * 5 + 5;
    }
    pfVar1 = pfVar5 + iVar10;
                    /* catch() { ... } // from try @ 00d59114 with catch @ 00d590e8 */
    lVar6 = *(long *)(param_4 + 0x10);
                    /* try { // try from 00d5910c to 00e59113 has its CatchHandler @ 00d59158 */
                    /* try { // try from 00d59114 to 00e59173 has its CatchHandler @ 00d590e8 */
    iVar7 = (iVar10 / 5) * 0x13;
    fVar18 = *(float *)(lVar6 + (long)(iVar7 + -0x13) * 4);
    fVar16 = 1.0 - (param_2 - *pfVar1) / (fVar16 - *pfVar1);
    bVar3 = 0.0 <= fVar16;
    if (1.0 < fVar16) {
      fVar16 = 1.0;
    }
    fVar17 = 0.0;
    if (bVar3) {
      fVar17 = fVar16;
    }
    fVar16 = fVar17;
    if ((fVar18 != 0.0) && (fVar16 = 0.0, fVar18 != 1.0)) {
                    /* catch() { ... } // from try @ 00d5910c with catch @ 00d59158 */
      uVar9 = iVar7 - 0x12;
      lVar11 = 0;
                    /* try { // try from 00d59174 to 00e591df has its CatchHandler @ 00d59174
                       catch() { ... } // from try @ 00d59174 with catch @ 00d59174
                       catch() { ... } // from try @ 00d59230 with catch @ 00d59174 */
      lVar12 = ((ulong)uVar9 << 0x20) + -0x100000000;
      lVar13 = ((ulong)uVar9 << 0x20) + -0x200000000;
      do {
        fVar16 = *(float *)(lVar6 + (long)(int)uVar9 * 4 + lVar11 * 4);
        if (fVar17 <= fVar16) {
          if ((int)lVar11 == 0) {
            fVar18 = 0.0;
            fVar19 = 0.0;
          }
          else {
            fVar18 = *(float *)(lVar6 + (lVar13 >> 0x1e));
            fVar19 = *(float *)(lVar6 + (lVar12 >> 0x1e));
                    /* try { // try from 00d591e0 to 00e591e7 has its CatchHandler @ 00d5928c */
            uVar9 = (int)lVar11 + uVar9;
          }
          fVar16 = fVar16 - fVar18;
          fVar18 = (fVar17 - fVar18) * (*(float *)(lVar6 + (long)(int)(uVar9 + 1) * 4) - fVar19);
          goto LAB_00d59208;
        }
        lVar11 = lVar11 + 2;
        lVar12 = lVar12 + 0x200000000;
        lVar13 = lVar13 + 0x200000000;
      } while ((long)(int)uVar9 + -2 + lVar11 < (long)(iVar7 + -2));
      fVar19 = *(float *)(lVar6 + (lVar12 >> 0x1e));
      fVar18 = (fVar17 - fVar16) * (1.0 - fVar19);
      fVar16 = 1.0 - fVar16;
LAB_00d59208:
      fVar16 = fVar19 + fVar18 / fVar16;
    }
                    /* try { // try from 00d5922c to 00e5922f has its CatchHandler @ 00d59244 */
                    /* try { // try from 00d59230 to 00e592af has its CatchHandler @ 00d59174 */
                    /* catch() { ... } // from try @ 00d5922c with catch @ 00d59244 */
    uVar14 = CONCAT44(pfVar1[-3] + (pfVar5[(long)iVar10 + 2] - pfVar1[-3]) * fVar16,
                      pfVar1[-4] + (pfVar5[(long)iVar10 + 1] - pfVar1[-4]) * fVar16);
    uVar15 = CONCAT44(pfVar1[-1] + (pfVar5[(long)iVar10 + 4] - pfVar1[-1]) * fVar16,
                      pfVar1[-2] + (pfVar5[(long)iVar10 + 3] - pfVar1[-2]) * fVar16);
    if (param_8 != 0) goto LAB_00d590d8;
LAB_00d5924c:
    lVar11 = *(long *)(*plVar4 + 0x28);
    lVar6 = *(long *)(*plVar4 + 0x20);
  }
  else {
    lVar6 = *plVar4;
    if (1 < param_8 - 1U) {
      if (param_8 != 0) {
        return;
      }
      lVar11 = *(long *)(lVar6 + 0x28);
      lVar6 = *(long *)(lVar6 + 0x20);
      goto LAB_00d59260;
    }
    uVar15 = *(undefined8 *)(lVar6 + 0x28);
    uVar14 = *(undefined8 *)(lVar6 + 0x20);
LAB_00d590d8:
    lVar11 = plVar4[5];
    lVar6 = plVar4[4];
  }
  fVar16 = (float)((ulong)lVar6 >> 0x20);
  fVar18 = (float)((ulong)lVar11 >> 0x20);
  lVar6 = CONCAT44(fVar16 + ((float)((ulong)uVar14 >> 0x20) - fVar16) * param_3,
                   (float)lVar6 + ((float)uVar14 - (float)lVar6) * param_3);
  lVar11 = CONCAT44(fVar18 + ((float)((ulong)uVar15 >> 0x20) - fVar18) * param_3,
                    (float)lVar11 + ((float)uVar15 - (float)lVar11) * param_3);
LAB_00d59260:
  plVar4[5] = lVar11;
  plVar4[4] = lVar6;
  return;
}

