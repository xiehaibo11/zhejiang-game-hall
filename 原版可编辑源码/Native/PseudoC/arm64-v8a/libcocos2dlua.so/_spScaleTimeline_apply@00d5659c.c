
void _spScaleTimeline_apply
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,int param_8,int param_9)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  float *pfVar4;
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
  undefined8 uVar15;
  float fVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  
  pfVar4 = *(float **)(param_4 + 0x20);
  fVar16 = *pfVar4;
  plVar3 = *(long **)(*(long *)(param_5 + 0x10) + (long)*(int *)(param_4 + 0x28) * 8);
  if (fVar16 <= param_2) {
    iVar10 = *(int *)(param_4 + 0x18);
    if (pfVar4[iVar10 + -3] <= param_2) {
      lVar7 = *plVar3;
      fVar21 = *(float *)(lVar7 + 0x2c);
      pfVar5 = pfVar4 + (iVar10 + -1);
      fVar16 = pfVar4[iVar10 + -2] * *(float *)(lVar7 + 0x28);
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
          iVar1 = iVar10 >> 1;
          if (pfVar4[(iVar1 + 1) * 3] <= param_2) {
            iVar6 = iVar1 + 1;
            iVar1 = iVar8;
          }
          iVar10 = iVar6 + iVar1;
          iVar8 = iVar1;
        } while (iVar6 != iVar1);
        fVar16 = pfVar4[iVar6 * 3];
        iVar10 = iVar6 * 3 + 3;
      }
      pfVar5 = pfVar4 + iVar10;
      lVar7 = *(long *)(param_4 + 0x10);
      iVar6 = (iVar10 / 3) * 0x13;
      fVar21 = *(float *)(lVar7 + (long)(iVar6 + -0x13) * 4);
      fVar16 = 1.0 - (param_2 - *pfVar5) / (fVar16 - *pfVar5);
      bVar2 = 0.0 <= fVar16;
      if (1.0 < fVar16) {
        fVar16 = 1.0;
      }
      fVar14 = 0.0;
      if (bVar2) {
        fVar14 = fVar16;
      }
      fVar16 = fVar14;
      if ((fVar21 != 0.0) && (fVar16 = 0.0, fVar21 != 1.0)) {
        uVar9 = iVar6 - 0x12;
        lVar11 = 0;
        lVar12 = ((ulong)uVar9 << 0x20) + -0x100000000;
        lVar13 = ((ulong)uVar9 << 0x20) + -0x200000000;
        do {
          fVar16 = *(float *)(lVar7 + (long)(int)uVar9 * 4 + lVar11 * 4);
          if (fVar14 <= fVar16) {
            if ((int)lVar11 == 0) {
              fVar21 = 0.0;
              fVar19 = 0.0;
            }
            else {
              fVar21 = *(float *)(lVar7 + (lVar13 >> 0x1e));
              fVar19 = *(float *)(lVar7 + (lVar12 >> 0x1e));
              uVar9 = (int)lVar11 + uVar9;
            }
            fVar16 = fVar19 + ((fVar14 - fVar21) *
                              (*(float *)(lVar7 + (long)(int)(uVar9 + 1) * 4) - fVar19)) /
                              (fVar16 - fVar21);
            goto LAB_00d567bc;
          }
          lVar11 = lVar11 + 2;
          lVar12 = lVar12 + 0x200000000;
          lVar13 = lVar13 + 0x200000000;
        } while ((long)(int)uVar9 + -2 + lVar11 < (long)(iVar6 + -2));
        fVar21 = *(float *)(lVar7 + (lVar12 >> 0x1e));
        fVar16 = fVar21 + ((fVar14 - fVar16) * (1.0 - fVar21)) / (1.0 - fVar16);
      }
LAB_00d567bc:
      lVar7 = *plVar3;
      fVar21 = pfVar5[-1] + fVar16 * (pfVar4[(long)iVar10 + 2] - pfVar5[-1]);
      fVar16 = *(float *)(lVar7 + 0x28) *
               (pfVar5[-2] + fVar16 * (pfVar4[(long)iVar10 + 1] - pfVar5[-2]));
      pfVar5 = (float *)(lVar7 + 0x2c);
    }
    fVar21 = *pfVar5 * fVar21;
    if (param_3 == 1.0) {
      *(float *)((long)plVar3 + 0x34) = fVar16;
      *(float *)(plVar3 + 7) = fVar21;
      return;
    }
    pfVar4 = (float *)(lVar7 + 0x2c);
    pfVar5 = (float *)(lVar7 + 0x28);
    if (param_8 != 0) {
      pfVar4 = (float *)(plVar3 + 7);
      pfVar5 = (float *)((long)plVar3 + 0x34);
    }
    fVar19 = *pfVar4;
    fVar14 = *pfVar5;
    if (param_9 == 1) {
      uVar17 = NEON_fmov(0x3f800000,4);
      uVar20 = CONCAT44(fVar21,fVar16) ^
               (CONCAT44(fVar21,fVar16) ^ CONCAT44(-fVar21,-fVar16)) &
               CONCAT44(-(uint)(fVar21 < 0.0),-(uint)(fVar16 < 0.0));
      uVar17 = CONCAT44(-(uint)(0.0 < fVar19),-(uint)(0.0 < fVar14)) & uVar17;
      uVar18 = NEON_fmov(0xbf800000,4);
      uVar17 = uVar17 ^ (uVar17 ^ uVar18) & CONCAT44(-(uint)(fVar19 < 0.0),-(uint)(fVar14 < 0.0));
      fVar16 = (float)uVar20 * (float)uVar17;
      fVar21 = (float)(uVar20 >> 0x20) * (float)(uVar17 >> 0x20);
    }
    else {
      uVar17 = NEON_fmov(0x3f800000,4);
      uVar20 = CONCAT44(fVar19,fVar14) ^
               (CONCAT44(fVar19,fVar14) ^ CONCAT44(-fVar19,-fVar14)) &
               CONCAT44(-(uint)(fVar19 < 0.0),-(uint)(fVar14 < 0.0));
      uVar17 = CONCAT44(-(uint)(0.0 < fVar21),-(uint)(0.0 < fVar16)) & uVar17;
      uVar18 = NEON_fmov(0xbf800000,4);
      uVar17 = uVar17 ^ (uVar17 ^ uVar18) & CONCAT44(-(uint)(fVar21 < 0.0),-(uint)(fVar16 < 0.0));
      fVar14 = (float)uVar17 * (float)uVar20;
      fVar19 = (float)(uVar17 >> 0x20) * (float)(uVar20 >> 0x20);
    }
    uVar15 = CONCAT44(fVar19 + (fVar21 - fVar19) * param_3,fVar14 + (fVar16 - fVar14) * param_3);
  }
  else {
    if (1 < param_8 - 1U) {
      if (param_8 != 0) {
        return;
      }
      *(undefined8 *)((long)plVar3 + 0x34) = *(undefined8 *)(*plVar3 + 0x28);
      return;
    }
    fVar16 = (float)*(undefined8 *)((long)plVar3 + 0x34);
    fVar21 = (float)((ulong)*(undefined8 *)((long)plVar3 + 0x34) >> 0x20);
    uVar15 = CONCAT44(fVar21 + ((float)((ulong)*(undefined8 *)(*plVar3 + 0x28) >> 0x20) - fVar21) *
                               param_3,
                      fVar16 + ((float)*(undefined8 *)(*plVar3 + 0x28) - fVar16) * param_3);
  }
  *(undefined8 *)((long)plVar3 + 0x34) = uVar15;
  return;
}

