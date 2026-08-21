
void _spRotateTimeline_apply
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pfVar4 = *(float **)(param_4 + 0x20);
  fVar15 = *pfVar4;
  plVar3 = *(long **)(*(long *)(param_5 + 0x10) + (long)*(int *)(param_4 + 0x28) * 8);
  if (fVar15 <= param_2) {
    iVar8 = *(int *)(param_4 + 0x18);
    if (pfVar4[iVar8 + -2] <= param_2) {
      fVar14 = pfVar4[iVar8 + -1];
      fVar15 = *(float *)(*plVar3 + 0x24);
      if (param_8 != 0) {
        fVar15 = (fVar15 + fVar14) - *(float *)(plVar3 + 6);
        fVar15 = *(float *)(plVar3 + 6) +
                 (fVar15 - (float)((0x4000 - (int)(fVar15 / -360.0 + 16384.5)) * 0x168)) * param_3;
        goto LAB_00d56110;
      }
      goto LAB_00d55f00;
    }
    if (iVar8 < 0) {
      iVar8 = iVar8 + 1;
    }
    iVar8 = (iVar8 >> 1) + -2;
    if (iVar8 == 0) {
      iVar8 = 2;
    }
    else {
      iVar5 = 0;
      iVar6 = iVar8;
      do {
        iVar1 = iVar8 >> 1;
        if (pfVar4[(iVar1 + 1) * 2] <= param_2) {
          iVar5 = iVar1 + 1;
          iVar1 = iVar6;
        }
        iVar8 = iVar5 + iVar1;
        iVar6 = iVar1;
      } while (iVar5 != iVar1);
      fVar15 = pfVar4[iVar5 * 2];
      iVar8 = iVar5 * 2 + 2;
    }
    fVar13 = (pfVar4 + iVar8)[-1];
    fVar14 = pfVar4[iVar8];
    lVar7 = *(long *)(param_4 + 0x10);
    iVar5 = (iVar8 >> 1) * 0x13;
    fVar16 = *(float *)(lVar7 + (long)(iVar5 + -0x13) * 4);
    fVar15 = 1.0 - (param_2 - fVar14) / (fVar15 - fVar14);
    bVar2 = 0.0 <= fVar15;
    if (1.0 < fVar15) {
      fVar15 = 1.0;
    }
    fVar14 = 0.0;
    if (bVar2) {
      fVar14 = fVar15;
    }
    fVar15 = fVar14;
    if ((fVar16 != 0.0) && (fVar15 = 0.0, fVar16 != 1.0)) {
      uVar9 = iVar5 - 0x12;
      lVar10 = 0;
      lVar11 = ((ulong)uVar9 << 0x20) + -0x100000000;
      lVar12 = ((ulong)uVar9 << 0x20) + -0x200000000;
      do {
        fVar15 = *(float *)(lVar7 + (long)(int)uVar9 * 4 + lVar10 * 4);
        if (fVar14 <= fVar15) {
          if ((int)lVar10 == 0) {
            fVar16 = 0.0;
            fVar17 = 0.0;
          }
          else {
            fVar16 = *(float *)(lVar7 + (lVar12 >> 0x1e));
            fVar17 = *(float *)(lVar7 + (lVar11 >> 0x1e));
            uVar9 = (int)lVar10 + uVar9;
          }
          fVar15 = fVar15 - fVar16;
          fVar14 = (fVar14 - fVar16) * (*(float *)(lVar7 + (long)(int)(uVar9 + 1) * 4) - fVar17);
          goto LAB_00d5601c;
        }
        lVar10 = lVar10 + 2;
        lVar11 = lVar11 + 0x200000000;
        lVar12 = lVar12 + 0x200000000;
      } while ((long)(int)uVar9 + -2 + lVar10 < (long)(iVar5 + -2));
      fVar17 = *(float *)(lVar7 + (lVar11 >> 0x1e));
      fVar14 = (fVar14 - fVar15) * (1.0 - fVar17);
      fVar15 = 1.0 - fVar15;
LAB_00d5601c:
      fVar15 = fVar17 + fVar14 / fVar15;
    }
    fVar14 = pfVar4[(long)iVar8 + 1] - fVar13;
    fVar13 = fVar13 + fVar15 * (fVar14 - (float)((0x4000 - (int)(fVar14 / -360.0 + 16384.5)) * 0x168
                                                ));
    if (param_8 != 0) {
      fVar15 = (fVar13 + *(float *)(*plVar3 + 0x24)) - *(float *)(plVar3 + 6);
      fVar15 = *(float *)(plVar3 + 6) +
               (fVar15 - (float)((0x4000 - (int)(fVar15 / -360.0 + 16384.5)) * 0x168)) * param_3;
      goto LAB_00d56110;
    }
    fVar14 = *(float *)(*plVar3 + 0x24);
    fVar15 = (fVar13 - (float)((0x4000 - (int)(fVar13 / -360.0 + 16384.5)) * 0x168)) * param_3;
  }
  else {
    if (1 < param_8 - 1U) {
      if (param_8 != 0) {
        return;
      }
      *(undefined4 *)(plVar3 + 6) = *(undefined4 *)(*plVar3 + 0x24);
      return;
    }
    fVar15 = *(float *)(plVar3 + 6);
    fVar14 = *(float *)(*plVar3 + 0x24) - fVar15;
    fVar14 = fVar14 - (float)((0x4000 - (int)(fVar14 / -360.0 + 16384.5)) * 0x168);
LAB_00d55f00:
    fVar14 = fVar14 * param_3;
  }
  fVar15 = fVar15 + fVar14;
LAB_00d56110:
  *(float *)(plVar3 + 6) = fVar15;
  return;
}

