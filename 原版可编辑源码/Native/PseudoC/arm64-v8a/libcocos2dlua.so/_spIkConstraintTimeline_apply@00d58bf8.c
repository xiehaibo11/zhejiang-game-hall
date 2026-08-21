
void _spIkConstraintTimeline_apply
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,int param_8,int param_9)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  float *pfVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pfVar4 = *(float **)(param_4 + 0x20);
  fVar14 = *pfVar4;
  plVar3 = *(long **)(*(long *)(param_5 + 0x40) + (long)*(int *)(param_4 + 0x28) * 8);
  if (param_2 < fVar14) {
    if (param_8 - 1U < 2) {
      *(float *)((long)plVar3 + 0x24) =
           *(float *)((long)plVar3 + 0x24) +
           (*(float *)(*plVar3 + 0x24) - *(float *)((long)plVar3 + 0x24)) * param_3;
      *(undefined4 *)(plVar3 + 4) = *(undefined4 *)(*plVar3 + 0x20);
      return;
    }
    if (param_8 != 0) {
      return;
    }
    plVar3[4] = *(long *)(*plVar3 + 0x20);
    return;
  }
  iVar9 = *(int *)(param_4 + 0x18);
  if (pfVar4[iVar9 + -3] <= param_2) {
    if (param_8 == 0) {
      fVar14 = *(float *)(*plVar3 + 0x24);
      *(float *)((long)plVar3 + 0x24) = fVar14 + (pfVar4[iVar9 + -2] - fVar14) * param_3;
      if (param_9 == 1) {
        *(undefined4 *)(plVar3 + 4) = *(undefined4 *)(*plVar3 + 0x20);
        return;
      }
    }
    else {
      *(float *)((long)plVar3 + 0x24) =
           *(float *)((long)plVar3 + 0x24) +
           (pfVar4[iVar9 + -2] - *(float *)((long)plVar3 + 0x24)) * param_3;
      if (param_9 != 0) {
        return;
      }
    }
    fVar14 = pfVar4[iVar9 + -1];
    goto LAB_00d58ee4;
  }
  iVar9 = iVar9 / 3 + -2;
  if (iVar9 == 0) {
    iVar9 = 3;
  }
  else {
    iVar5 = 0;
    iVar7 = iVar9;
    do {
      iVar1 = iVar9 >> 1;
      if (pfVar4[(iVar1 + 1) * 3] <= param_2) {
        iVar5 = iVar1 + 1;
        iVar1 = iVar7;
      }
      iVar9 = iVar5 + iVar1;
      iVar7 = iVar1;
    } while (iVar5 != iVar1);
    fVar14 = pfVar4[iVar5 * 3];
    iVar9 = iVar5 * 3 + 3;
  }
  fVar13 = (pfVar4 + iVar9)[-2];
  fVar15 = pfVar4[iVar9];
  lVar6 = *(long *)(param_4 + 0x10);
  iVar5 = (iVar9 / 3) * 0x13;
  fVar16 = *(float *)(lVar6 + (long)(iVar5 + -0x13) * 4);
  fVar14 = 1.0 - (param_2 - fVar15) / (fVar14 - fVar15);
  bVar2 = 0.0 <= fVar14;
  if (1.0 < fVar14) {
    fVar14 = 1.0;
  }
  fVar15 = 0.0;
  if (bVar2) {
    fVar15 = fVar14;
  }
  if (fVar16 == 0.0) {
    if (param_8 == 0) goto LAB_00d58ea0;
LAB_00d58e70:
    pfVar4 = pfVar4 + iVar9;
    *(float *)((long)plVar3 + 0x24) =
         *(float *)((long)plVar3 + 0x24) +
         ((fVar13 + fVar15 * (pfVar4[1] - fVar13)) - *(float *)((long)plVar3 + 0x24)) * param_3;
    if (param_9 != 0) {
      return;
    }
  }
  else {
    fVar14 = 0.0;
    if (fVar16 != 1.0) {
      uVar8 = iVar5 - 0x12;
      lVar10 = 0;
      lVar11 = ((ulong)uVar8 << 0x20) + -0x100000000;
      lVar12 = ((ulong)uVar8 << 0x20) + -0x200000000;
      do {
        fVar14 = *(float *)(lVar6 + (long)(int)uVar8 * 4 + lVar10 * 4);
        if (fVar15 <= fVar14) {
          if ((int)lVar10 == 0) {
            fVar16 = 0.0;
            fVar17 = 0.0;
          }
          else {
            fVar16 = *(float *)(lVar6 + (lVar12 >> 0x1e));
            fVar17 = *(float *)(lVar6 + (lVar11 >> 0x1e));
            uVar8 = (int)lVar10 + uVar8;
          }
          fVar14 = fVar14 - fVar16;
          fVar15 = (fVar15 - fVar16) * (*(float *)(lVar6 + (long)(int)(uVar8 + 1) * 4) - fVar17);
          goto LAB_00d58e60;
        }
        lVar10 = lVar10 + 2;
        lVar11 = lVar11 + 0x200000000;
        lVar12 = lVar12 + 0x200000000;
      } while ((long)(int)uVar8 + -2 + lVar10 < (long)(iVar5 + -2));
      fVar17 = *(float *)(lVar6 + (lVar11 >> 0x1e));
      fVar15 = (fVar15 - fVar14) * (1.0 - fVar17);
      fVar14 = 1.0 - fVar14;
LAB_00d58e60:
      fVar14 = fVar17 + fVar15 / fVar14;
    }
    fVar15 = fVar14;
    if (param_8 != 0) goto LAB_00d58e70;
LAB_00d58ea0:
    pfVar4 = pfVar4 + iVar9;
    fVar14 = *(float *)(*plVar3 + 0x24);
    *(float *)((long)plVar3 + 0x24) =
         fVar14 + ((fVar13 + fVar15 * (pfVar4[1] - fVar13)) - fVar14) * param_3;
    if (param_9 == 1) {
      *(undefined4 *)(plVar3 + 4) = *(undefined4 *)(*plVar3 + 0x20);
      return;
    }
  }
  fVar14 = pfVar4[-1];
LAB_00d58ee4:
  *(int *)(plVar3 + 4) = (int)fVar14;
  return;
}

