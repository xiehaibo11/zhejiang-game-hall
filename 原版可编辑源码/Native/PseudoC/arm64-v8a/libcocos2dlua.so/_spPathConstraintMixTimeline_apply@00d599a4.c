
void _spPathConstraintMixTimeline_apply
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  float *pfVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pfVar5 = *(float **)(param_4 + 0x20);
                    /* catch() { ... } // from try @ 00d59c40 with catch @ 00d599a8 */
  fVar14 = *pfVar5;
  plVar4 = *(long **)(*(long *)(param_5 + 0x60) + (long)*(int *)(param_4 + 0x28) * 8);
  if (param_2 < fVar14) {
    if (param_8 - 1U < 2) {
      fVar14 = (float)plVar4[5];
      fVar16 = (float)((ulong)plVar4[5] >> 0x20);
      plVar4[5] = CONCAT44(fVar16 + ((float)((ulong)*(undefined8 *)(*plVar4 + 0x38) >> 0x20) -
                                    fVar16) * param_3,
                           fVar14 + ((float)*(undefined8 *)(*plVar4 + 0x38) - fVar14) * param_3);
      return;
    }
    if (param_8 == 0) {
      plVar4[5] = *(long *)(*plVar4 + 0x38);
      return;
    }
    return;
  }
                    /* try { // try from 00d599ec to 00e59a23 has its CatchHandler @ 00d59ca4 */
  iVar10 = *(int *)(param_4 + 0x18);
  if (pfVar5[iVar10 + -3] <= param_2) {
    fVar14 = pfVar5[iVar10 + -2];
    fVar16 = pfVar5[iVar10 + -1];
  }
  else {
    iVar10 = iVar10 / 3 + -2;
    if (iVar10 == 0) {
      iVar10 = 3;
    }
    else {
      iVar6 = 0;
      iVar8 = iVar10;
      do {
                    /* try { // try from 00d59a28 to 00e59a87 has its CatchHandler @ 00d59ca0 */
        iVar2 = iVar10 >> 1;
        if (pfVar5[(iVar2 + 1) * 3] <= param_2) {
          iVar6 = iVar2 + 1;
          iVar2 = iVar8;
        }
        iVar10 = iVar6 + iVar2;
        iVar8 = iVar2;
      } while (iVar6 != iVar2);
      fVar14 = pfVar5[iVar6 * 3];
      iVar10 = iVar6 * 3 + 3;
    }
    pfVar1 = pfVar5 + iVar10;
    lVar7 = *(long *)(param_4 + 0x10);
                    /* try { // try from 00d59ad4 to 00e59aef has its CatchHandler @ 00d59ca4 */
    iVar6 = (iVar10 / 3) * 0x13;
    fVar16 = *(float *)(lVar7 + (long)(iVar6 + -0x13) * 4);
    fVar14 = 1.0 - (param_2 - *pfVar1) / (fVar14 - *pfVar1);
                    /* try { // try from 00d59af8 to 00e59b27 has its CatchHandler @ 00d59c9c */
    bVar3 = 0.0 <= fVar14;
    if (1.0 < fVar14) {
      fVar14 = 1.0;
    }
    fVar15 = 0.0;
    if (bVar3) {
      fVar15 = fVar14;
    }
    fVar17 = fVar15;
    if ((fVar16 != 0.0) && (fVar17 = 0.0, fVar16 != 1.0)) {
      uVar9 = iVar6 - 0x12;
      lVar11 = 0;
      lVar12 = ((ulong)uVar9 << 0x20) + -0x100000000;
      lVar13 = ((ulong)uVar9 << 0x20) + -0x200000000;
      do {
        fVar14 = *(float *)(lVar7 + (long)(int)uVar9 * 4 + lVar11 * 4);
        if (fVar15 <= fVar14) {
          if ((int)lVar11 == 0) {
                    /* try { // try from 00d59bb0 to 00e59bb3 has its CatchHandler @ 00d59c74 */
            fVar16 = 0.0;
            fVar17 = 0.0;
          }
          else {
            fVar16 = *(float *)(lVar7 + (lVar13 >> 0x1e));
            fVar17 = *(float *)(lVar7 + (lVar12 >> 0x1e));
            uVar9 = (int)lVar11 + uVar9;
          }
                    /* try { // try from 00d59bb8 to 00e59bc3 has its CatchHandler @ 00d59c70 */
          fVar14 = fVar14 - fVar16;
                    /* try { // try from 00d59bcc to 00e59bdb has its CatchHandler @ 00d59c5c */
          fVar16 = (fVar15 - fVar16) * (*(float *)(lVar7 + (long)(int)(uVar9 + 1) * 4) - fVar17);
          goto LAB_00d59bd0;
        }
        lVar11 = lVar11 + 2;
        lVar12 = lVar12 + 0x200000000;
        lVar13 = lVar13 + 0x200000000;
      } while ((long)(int)uVar9 + -2 + lVar11 < (long)(iVar6 + -2));
                    /* try { // try from 00d59b7c to 00e59b87 has its CatchHandler @ 00d59c98 */
      fVar17 = *(float *)(lVar7 + (lVar12 >> 0x1e));
      fVar16 = (fVar15 - fVar14) * (1.0 - fVar17);
      fVar14 = 1.0 - fVar14;
                    /* try { // try from 00d59b90 to 00e59b9b has its CatchHandler @ 00d59c78 */
LAB_00d59bd0:
      fVar17 = fVar17 + fVar16 / fVar14;
    }
    fVar14 = pfVar1[-2] + fVar17 * (pfVar5[(long)iVar10 + 1] - pfVar1[-2]);
    fVar16 = pfVar1[-1] + fVar17 * (pfVar5[(long)iVar10 + 2] - pfVar1[-1]);
  }
  if (param_8 == 0) {
    fVar15 = *(float *)(*plVar4 + 0x38);
    *(float *)(plVar4 + 5) = fVar15 + (fVar14 - fVar15) * param_3;
    fVar15 = *(float *)(*plVar4 + 0x3c);
    fVar15 = fVar15 + (fVar16 - fVar15) * param_3;
  }
  else {
                    /* try { // try from 00d59a90 to 00e59a9b has its CatchHandler @ 00d59c58 */
    fVar15 = *(float *)((long)plVar4 + 0x2c) + (fVar16 - *(float *)((long)plVar4 + 0x2c)) * param_3;
                    /* try { // try from 00d59aa4 to 00e59aaf has its CatchHandler @ 00d59c54 */
    *(float *)(plVar4 + 5) = *(float *)(plVar4 + 5) + (fVar14 - *(float *)(plVar4 + 5)) * param_3;
  }
  *(float *)((long)plVar4 + 0x2c) = fVar15;
  return;
}

