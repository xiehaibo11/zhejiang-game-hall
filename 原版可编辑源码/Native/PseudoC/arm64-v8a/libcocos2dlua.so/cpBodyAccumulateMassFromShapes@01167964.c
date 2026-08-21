
void cpBodyAccumulateMassFromShapes(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (((param_1 != 0) && (*(float *)(param_1 + 0xb0) != INFINITY)) &&
     (*(float *)(param_1 + 0x10) != INFINITY)) {
    lVar1 = *(long *)(param_1 + 0x88);
    fVar8 = *(float *)(param_1 + 0x5c);
    fVar9 = *(float *)(param_1 + 0x60);
    fVar2 = 0.0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (lVar1 == 0) {
      fVar5 = 0.0;
    }
    else {
      fVar3 = 0.0;
      fVar4 = 0.0;
      fVar5 = 0.0;
      do {
        fVar6 = *(float *)(lVar1 + 0x18);
        if (0.0 < fVar6) {
          fVar7 = fVar5 * fVar6;
          fVar5 = fVar5 + fVar6;
          fVar10 = fVar4 - *(float *)(lVar1 + 0x20);
          fVar11 = fVar3 - *(float *)(lVar1 + 0x24);
          fVar2 = fVar2 + fVar6 * *(float *)(lVar1 + 0x1c) +
                  (fVar7 * (fVar10 * fVar10 + fVar11 * fVar11)) / fVar5;
          *(float *)(param_1 + 0x18) = fVar2;
          fVar6 = fVar6 / fVar5;
          fVar4 = fVar4 * (1.0 - fVar6) + fVar6 * *(float *)(lVar1 + 0x20);
          fVar3 = fVar3 * (1.0 - fVar6) + fVar6 * *(float *)(lVar1 + 0x24);
          *(float *)(param_1 + 0x20) = fVar4;
          *(float *)(param_1 + 0x24) = fVar3;
          *(float *)(param_1 + 0x10) = fVar5;
        }
        lVar1 = *(long *)(lVar1 + 0x70);
      } while (lVar1 != 0);
    }
    *(float *)(param_1 + 0x14) = 1.0 / fVar5;
    *(float *)(param_1 + 0x1c) = 1.0 / fVar2;
    cpBodyActivate(param_1);
    fVar4 = *(float *)(param_1 + 0x20);
    fVar6 = *(float *)(param_1 + 0x24);
    fVar5 = *(float *)(param_1 + 0x40);
    fVar3 = fVar8 + *(float *)(param_1 + 0x4c) * fVar4 + *(float *)(param_1 + 0x54) * fVar6;
    fVar9 = fVar9 + *(float *)(param_1 + 0x50) * fVar4 + *(float *)(param_1 + 0x58) * fVar6;
    *(float *)(param_1 + 0x28) = fVar3;
    *(float *)(param_1 + 0x2c) = fVar9;
    fVar2 = cosf(fVar5);
    fVar8 = sinf(fVar5);
    *(float *)(param_1 + 0x4c) = fVar2;
    *(float *)(param_1 + 0x50) = fVar8;
    *(float *)(param_1 + 0x54) = -fVar8;
    *(float *)(param_1 + 0x58) = fVar2;
    *(float *)(param_1 + 0x5c) = (fVar3 - fVar4 * fVar2) + fVar6 * fVar8;
    *(float *)(param_1 + 0x60) = fVar9 - (fVar2 * fVar6 + fVar4 * fVar8);
  }
  return;
}

