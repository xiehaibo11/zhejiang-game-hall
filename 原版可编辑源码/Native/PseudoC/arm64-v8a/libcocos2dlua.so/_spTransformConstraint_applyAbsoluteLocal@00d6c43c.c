
void _spTransformConstraint_applyAbsoluteLocal(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
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
      fVar8 = *(float *)(lVar2 + 0x4c);
      if (fVar10 != 0.0) {
        fVar5 = (*(float *)(lVar1 + 0x4c) - fVar8) + *(float *)(*param_1 + 0x30);
        fVar8 = fVar8 + fVar10 * (fVar5 - (float)((0x4000 - (int)(fVar5 / -360.0 + 16384.5)) * 0x168
                                                 ));
      }
      uVar6 = *(ulong *)(lVar2 + 0x44);
      if (fVar4 != 0.0) {
        fVar5 = (float)(uVar6 >> 0x20);
        uVar6 = CONCAT44(fVar5 + fVar4 * (((float)((ulong)*(undefined8 *)(lVar1 + 0x44) >> 0x20) -
                                          fVar5) + (float)((ulong)*(undefined8 *)(*param_1 + 0x34)
                                                          >> 0x20)),
                         (float)uVar6 +
                         fVar4 * (((float)*(undefined8 *)(lVar1 + 0x44) - (float)uVar6) +
                                 (float)*(undefined8 *)(*param_1 + 0x34)));
      }
      fVar5 = *(float *)(lVar2 + 0x50);
      fVar9 = *(float *)(lVar2 + 0x54);
      if (0.0 < fVar11) {
        if (1e-05 < fVar5) {
          fVar5 = (fVar5 + fVar11 * ((*(float *)(lVar1 + 0x50) - fVar5) +
                                    *(float *)(*param_1 + 0x3c))) / fVar5;
        }
        if (1e-05 < fVar9) {
          fVar9 = (fVar9 + fVar11 * ((*(float *)(lVar1 + 0x54) - fVar9) +
                                    *(float *)(*param_1 + 0x40))) / fVar9;
        }
      }
      if (0.0 < fVar12) {
        fVar7 = (*(float *)(lVar1 + 0x5c) - *(float *)(lVar2 + 0x5c)) + *(float *)(*param_1 + 0x44);
        *(float *)(lVar2 + 0x40) =
             *(float *)(lVar2 + 0x40) +
             fVar12 * (fVar7 - (float)((0x4000 - (int)(fVar7 / -360.0 + 16384.5)) * 0x168));
      }
      spBone_updateWorldTransformWith
                (uVar6,uVar6 >> 0x20,fVar8,fVar5,fVar9,*(undefined4 *)(lVar2 + 0x58),lVar2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[1]);
  }
  return;
}

