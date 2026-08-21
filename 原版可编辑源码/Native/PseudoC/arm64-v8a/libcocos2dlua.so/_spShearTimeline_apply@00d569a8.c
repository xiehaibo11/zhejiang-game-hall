
void _spShearTimeline_apply
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
  fVar14 = *pfVar5;
  plVar4 = *(long **)(*(long *)(param_5 + 0x10) + (long)*(int *)(param_4 + 0x28) * 8);
  if (fVar14 <= param_2) {
    iVar10 = *(int *)(param_4 + 0x18);
    if (pfVar5[iVar10 + -3] <= param_2) {
      fVar16 = pfVar5[iVar10 + -2];
      fVar14 = pfVar5[iVar10 + -1];
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
      iVar6 = (iVar10 / 3) * 0x13;
      fVar16 = *(float *)(lVar7 + (long)(iVar6 + -0x13) * 4);
      fVar14 = 1.0 - (param_2 - *pfVar1) / (fVar14 - *pfVar1);
      bVar3 = 0.0 <= fVar14;
      if (1.0 < fVar14) {
        fVar14 = 1.0;
      }
      fVar15 = 0.0;
      if (bVar3) {
        fVar15 = fVar14;
      }
      fVar14 = fVar15;
      if ((fVar16 != 0.0) && (fVar14 = 0.0, fVar16 != 1.0)) {
        uVar9 = iVar6 - 0x12;
        lVar11 = 0;
        lVar12 = ((ulong)uVar9 << 0x20) + -0x100000000;
        lVar13 = ((ulong)uVar9 << 0x20) + -0x200000000;
        do {
          fVar14 = *(float *)(lVar7 + (long)(int)uVar9 * 4 + lVar11 * 4);
          if (fVar15 <= fVar14) {
            if ((int)lVar11 == 0) {
              fVar16 = 0.0;
              fVar17 = 0.0;
            }
            else {
              fVar16 = *(float *)(lVar7 + (lVar13 >> 0x1e));
              fVar17 = *(float *)(lVar7 + (lVar12 >> 0x1e));
              uVar9 = (int)lVar11 + uVar9;
            }
            fVar14 = fVar14 - fVar16;
            fVar16 = (fVar15 - fVar16) * (*(float *)(lVar7 + (long)(int)(uVar9 + 1) * 4) - fVar17);
            goto LAB_00d56bb0;
          }
          lVar11 = lVar11 + 2;
          lVar12 = lVar12 + 0x200000000;
          lVar13 = lVar13 + 0x200000000;
        } while ((long)(int)uVar9 + -2 + lVar11 < (long)(iVar6 + -2));
        fVar17 = *(float *)(lVar7 + (lVar12 >> 0x1e));
        fVar16 = (fVar15 - fVar14) * (1.0 - fVar17);
        fVar14 = 1.0 - fVar14;
LAB_00d56bb0:
        fVar14 = fVar17 + fVar16 / fVar14;
      }
                    /* try { // try from 00d56bc0 to 00e56cbf has its CatchHandler @ 00d56bc0
                       catch() { ... } // from try @ 00d56bc0 with catch @ 00d56bc0
                       catch() { ... } // from try @ 00d56cfc with catch @ 00d56bc0 */
      fVar16 = pfVar1[-2] + fVar14 * (pfVar5[(long)iVar10 + 1] - pfVar1[-2]);
      fVar14 = pfVar1[-1] + fVar14 * (pfVar5[(long)iVar10 + 2] - pfVar1[-1]);
    }
    lVar7 = *plVar4;
    if (param_8 == 0) {
      *(float *)((long)plVar4 + 0x3c) = fVar16 * param_3 + *(float *)(lVar7 + 0x30);
      fVar14 = fVar14 * param_3 + *(float *)(lVar7 + 0x34);
    }
    else {
      *(float *)((long)plVar4 + 0x3c) =
           *(float *)((long)plVar4 + 0x3c) +
           ((fVar16 + *(float *)(lVar7 + 0x30)) - *(float *)((long)plVar4 + 0x3c)) * param_3;
      fVar14 = *(float *)(plVar4 + 8) +
               ((fVar14 + *(float *)(lVar7 + 0x34)) - *(float *)(plVar4 + 8)) * param_3;
    }
    *(float *)(plVar4 + 8) = fVar14;
  }
  else {
    if (param_8 - 1U < 2) {
      fVar14 = (float)*(undefined8 *)((long)plVar4 + 0x3c);
      fVar16 = (float)((ulong)*(undefined8 *)((long)plVar4 + 0x3c) >> 0x20);
      *(ulong *)((long)plVar4 + 0x3c) =
           CONCAT44(fVar16 + ((float)((ulong)*(undefined8 *)(*plVar4 + 0x30) >> 0x20) - fVar16) *
                             param_3,
                    fVar14 + ((float)*(undefined8 *)(*plVar4 + 0x30) - fVar14) * param_3);
      return;
    }
    if (param_8 == 0) {
      *(undefined8 *)((long)plVar4 + 0x3c) = *(undefined8 *)(*plVar4 + 0x30);
      return;
    }
  }
  return;
}

