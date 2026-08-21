
float spCurveTimeline_getCurvePercent(float param_1,long param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar1 = *(long *)(param_2 + 0x10);
  param_3 = param_3 * 0x13;
  fVar9 = *(float *)(lVar1 + (long)param_3 * 4);
  fVar7 = param_1;
  if (1.0 < param_1) {
    fVar7 = 1.0;
  }
  fVar8 = 0.0;
  if (0.0 <= param_1) {
    fVar8 = fVar7;
  }
  if (fVar9 == 0.0) {
    return fVar8;
  }
  if (fVar9 == 1.0) {
    return 0.0;
  }
  uVar2 = param_3 + 1;
  lVar3 = 0;
  lVar4 = ((ulong)uVar2 << 0x20) + -0x100000000;
  lVar5 = ((ulong)uVar2 << 0x20) + -0x200000000;
  do {
    fVar7 = *(float *)(lVar1 + (long)(int)uVar2 * 4 + lVar3 * 4);
    if (fVar8 <= fVar7) {
      if ((int)lVar3 == 0) {
        fVar9 = 0.0;
        fVar10 = 0.0;
      }
      else {
        fVar9 = *(float *)(lVar1 + (lVar5 >> 0x1e));
        fVar10 = *(float *)(lVar1 + (lVar4 >> 0x1e));
        uVar2 = (int)lVar3 + uVar2;
      }
      fVar6 = fVar7 - fVar9;
      fVar11 = *(float *)(lVar1 + (long)(int)(uVar2 + 1) * 4) - fVar10;
      goto LAB_00d55c38;
    }
    lVar3 = lVar3 + 2;
    lVar4 = lVar4 + 0x200000000;
    lVar5 = lVar5 + 0x200000000;
  } while ((long)(int)uVar2 + -2 + lVar3 < (long)(param_3 + 0x11));
  fVar10 = *(float *)(lVar1 + (lVar4 >> 0x1e));
  fVar6 = 1.0 - fVar7;
  fVar11 = 1.0 - fVar10;
  fVar9 = fVar7;
LAB_00d55c38:
  return fVar10 + ((fVar8 - fVar9) * fVar11) / fVar6;
}

