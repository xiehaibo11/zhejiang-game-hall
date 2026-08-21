
void _spColorTimeline_apply
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pfVar3 = *(float **)(param_4 + 0x20);
  fVar16 = *pfVar3;
  plVar12 = *(long **)(*(long *)(param_5 + 0x28) + (long)*(int *)(param_4 + 0x28) * 8);
  if (fVar16 <= param_2) {
    iVar8 = *(int *)(param_4 + 0x18);
    if (pfVar3[iVar8 + -5] <= param_2) {
      fVar16 = pfVar3[iVar8 + -4];
      fVar13 = pfVar3[iVar8 + -3];
      fVar14 = pfVar3[iVar8 + -2];
      fVar15 = pfVar3[iVar8 + -1];
    }
    else {
      iVar8 = iVar8 / 5 + -2;
      if (iVar8 == 0) {
        iVar8 = 5;
      }
      else {
        iVar5 = 0;
        iVar6 = iVar8;
        do {
          iVar2 = iVar8 >> 1;
          if (pfVar3[(iVar2 + 1) * 5] <= param_2) {
            iVar5 = iVar2 + 1;
            iVar2 = iVar6;
          }
          iVar8 = iVar5 + iVar2;
          iVar6 = iVar2;
        } while (iVar5 != iVar2);
        fVar16 = pfVar3[iVar5 * 5];
        iVar8 = iVar5 * 5 + 5;
      }
      pfVar1 = pfVar3 + iVar8;
      lVar4 = *(long *)(param_4 + 0x10);
      iVar5 = (iVar8 / 5) * 0x13;
      fVar14 = *(float *)(lVar4 + (long)(iVar5 + -0x13) * 4);
      fVar13 = 1.0 - (param_2 - *pfVar1) / (fVar16 - *pfVar1);
      fVar16 = fVar13;
      if (1.0 < fVar13) {
        fVar16 = 1.0;
      }
      fVar15 = 0.0;
      if (0.0 <= fVar13) {
        fVar15 = fVar16;
      }
      fVar17 = fVar15;
      if ((fVar14 != 0.0) && (fVar17 = 0.0, fVar14 != 1.0)) {
        uVar7 = iVar5 - 0x12;
        lVar9 = 0;
        lVar10 = ((ulong)uVar7 << 0x20) + -0x100000000;
        lVar11 = ((ulong)uVar7 << 0x20) + -0x200000000;
        do {
          fVar16 = *(float *)(lVar4 + (long)(int)uVar7 * 4 + lVar9 * 4);
          if (fVar15 <= fVar16) {
            if ((int)lVar9 == 0) {
              fVar13 = 0.0;
              fVar14 = 0.0;
            }
            else {
              fVar13 = *(float *)(lVar4 + (lVar11 >> 0x1e));
              fVar14 = *(float *)(lVar4 + (lVar10 >> 0x1e));
              uVar7 = (int)lVar9 + uVar7;
            }
            fVar17 = fVar14 + ((fVar15 - fVar13) *
                              (*(float *)(lVar4 + (long)(int)(uVar7 + 1) * 4) - fVar14)) /
                              (fVar16 - fVar13);
            goto LAB_00d57028;
          }
          lVar9 = lVar9 + 2;
          lVar10 = lVar10 + 0x200000000;
          lVar11 = lVar11 + 0x200000000;
        } while ((long)(int)uVar7 + -2 + lVar9 < (long)(iVar5 + -2));
        fVar13 = *(float *)(lVar4 + (lVar10 >> 0x1e));
        fVar17 = fVar13 + ((fVar15 - fVar16) * (1.0 - fVar13)) / (1.0 - fVar16);
      }
LAB_00d57028:
      fVar16 = pfVar1[-4] + fVar17 * (pfVar3[(long)iVar8 + 1] - pfVar1[-4]);
      fVar13 = pfVar1[-3] + fVar17 * (pfVar3[(long)iVar8 + 2] - pfVar1[-3]);
      fVar14 = pfVar1[-2] + fVar17 * (pfVar3[(long)iVar8 + 3] - pfVar1[-2]);
      fVar15 = pfVar1[-1] + fVar17 * (pfVar3[(long)iVar8 + 4] - pfVar1[-1]);
    }
    if (param_3 == 1.0) {
      spColor_setFromFloats(fVar16,fVar13,fVar14,fVar15,plVar12 + 2);
      return;
    }
    if (param_8 == 0) {
      spColor_setFromColor(plVar12 + 2,*plVar12 + 0x20);
    }
    fVar16 = fVar16 - *(float *)(plVar12 + 2);
    fVar13 = fVar13 - *(float *)((long)plVar12 + 0x14);
    fVar14 = fVar14 - *(float *)(plVar12 + 3);
    fVar15 = fVar15 - *(float *)((long)plVar12 + 0x1c);
  }
  else {
    if (1 < param_8 - 1U) {
      if (param_8 == 0) {
        spColor_setFromColor(plVar12 + 2,*plVar12 + 0x20);
        return;
      }
      return;
    }
                    /* catch() { ... } // from try @ 00d56cd0 with catch @ 00d56d78 */
    lVar4 = *plVar12;
                    /* catch() { ... } // from try @ 00d56cc0 with catch @ 00d56d88 */
                    /* catch() { ... } // from try @ 00d56cf0 with catch @ 00d56d8c */
    fVar16 = *(float *)(lVar4 + 0x20) - *(float *)(plVar12 + 2);
    fVar13 = *(float *)(lVar4 + 0x24) - *(float *)((long)plVar12 + 0x14);
    fVar14 = *(float *)(lVar4 + 0x28) - *(float *)(plVar12 + 3);
    fVar15 = *(float *)(lVar4 + 0x2c) - *(float *)((long)plVar12 + 0x1c);
  }
  spColor_addFloats(fVar16 * param_3,fVar13 * param_3,fVar14 * param_3,fVar15 * param_3,plVar12 + 2)
  ;
  return;
}

