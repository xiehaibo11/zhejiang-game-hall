
void _spTransformConstraint_applyRelativeLocal(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar10 = *(float *)(param_1 + 4);
  fVar4 = *(float *)((long)param_1 + 0x24);
  lVar1 = param_1[3];
  fVar11 = *(float *)(param_1 + 5);
  fVar12 = *(float *)((long)param_1 + 0x2c);
  if (*(int *)(lVar1 + 0x60) == 0) {
    spBone_updateAppliedTransform(lVar1);
  }
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)(param_1[2] + lVar3 * 8);
      if (*(int *)(lVar2 + 0x60) == 0) {
        spBone_updateAppliedTransform(lVar2);
      }
      fVar6 = *(float *)(lVar2 + 0x4c);
      if (fVar10 != 0.0) {
        fVar6 = fVar6 + fVar10 * (*(float *)(lVar1 + 0x4c) + *(float *)(*param_1 + 0x30));
      }
      uVar5 = *(ulong *)(lVar2 + 0x44);
      if (fVar4 != 0.0) {
        uVar5 = CONCAT44((float)(uVar5 >> 0x20) +
                         fVar4 * ((float)((ulong)*(undefined8 *)(lVar1 + 0x44) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(*param_1 + 0x34) >> 0x20)),
                         (float)uVar5 +
                         fVar4 * ((float)*(undefined8 *)(lVar1 + 0x44) +
                                 (float)*(undefined8 *)(*param_1 + 0x34)));
      }
      fVar7 = *(float *)(lVar2 + 0x50);
      fVar8 = *(float *)(lVar2 + 0x54);
      if (0.0 < fVar11) {
        if (1e-05 < fVar7) {
          fVar7 = fVar7 * (fVar11 * (*(float *)(lVar1 + 0x50) + -1.0 + *(float *)(*param_1 + 0x3c))
                          + 1.0);
        }
        if (1e-05 < fVar8) {
          fVar8 = fVar8 * (fVar11 * (*(float *)(lVar1 + 0x54) + -1.0 + *(float *)(*param_1 + 0x40))
                          + 1.0);
        }
      }
      fVar9 = *(float *)(lVar2 + 0x5c);
      if (0.0 < fVar12) {
        fVar9 = fVar9 + fVar12 * (*(float *)(lVar1 + 0x5c) + *(float *)(*param_1 + 0x44));
      }
      spBone_updateWorldTransformWith
                (uVar5,uVar5 >> 0x20,fVar6,fVar7,fVar8,*(undefined4 *)(lVar2 + 0x58),fVar9,lVar2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[1]);
  }
  return;
}

