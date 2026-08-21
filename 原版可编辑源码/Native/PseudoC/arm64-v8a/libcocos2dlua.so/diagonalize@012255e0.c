
/* btMatrix3x3::diagonalize(btMatrix3x3&, float, int) */

void __thiscall
btMatrix3x3::diagonalize(btMatrix3x3 *this,btMatrix3x3 *param_1,float param_2,int param_3)

{
  btMatrix3x3 *pbVar1;
  btMatrix3x3 *pbVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28) = 0x3f800000;
  if (0 < param_3) {
    do {
      lVar5 = 2;
      fVar9 = ABS(*(float *)(this + 4));
      fVar10 = ABS(*(float *)(this + 8));
      fVar12 = fVar10;
      if (fVar10 <= fVar9) {
        fVar12 = fVar9;
      }
      fVar11 = ABS(*(float *)(this + 0x18));
      if (fVar9 < fVar10) {
        lVar8 = lVar5;
        lVar5 = 1;
      }
      else {
        lVar8 = 1;
      }
      fVar9 = fVar12;
      if (fVar12 < fVar11) {
        lVar5 = 0;
        lVar8 = 2;
        fVar9 = fVar11;
      }
      uVar7 = (ulong)(fVar12 < fVar11);
      fVar12 = (ABS(*(float *)this) + ABS(*(float *)(this + 0x14)) + ABS(*(float *)(this + 0x28))) *
               param_2;
      iVar4 = param_3;
      if (fVar9 <= fVar12) {
        if (fVar9 <= fVar12 * 1.1920929e-07) {
          return;
        }
        iVar4 = 1;
      }
      lVar6 = lVar8 * 4;
      pbVar1 = this + lVar8 * 0x14;
      pbVar2 = this + uVar7 * 0x14;
      fVar9 = *(float *)(this + lVar6 + uVar7 * 0x10);
      fVar10 = (*(float *)pbVar1 - *(float *)pbVar2) / (fVar9 + fVar9);
      fVar12 = fVar10 * fVar10;
      if (8.388608e+07 <= fVar12 * fVar12) {
        fVar11 = 1.0 / (fVar10 * (0.5 / fVar12 + 2.0));
        fVar12 = 1.0 - fVar11 * fVar11 * 0.5;
        fVar10 = fVar11 * fVar12;
      }
      else {
        fVar11 = SQRT(fVar12 + 1.0);
        if (NAN(fVar11)) {
          fVar11 = sqrtf(fVar12 + 1.0);
        }
        if (fVar10 < 0.0) {
          fVar11 = -fVar11;
        }
        fVar11 = 1.0 / (fVar10 + fVar11);
        fVar10 = fVar11 * fVar11 + 1.0;
        fVar12 = SQRT(fVar10);
        if (NAN(fVar12)) {
          fVar12 = sqrtf(fVar10);
        }
        fVar12 = 1.0 / fVar12;
        fVar10 = fVar12 * fVar11;
      }
      lVar3 = uVar7 * 4;
      *(undefined4 *)(this + lVar3 + lVar8 * 0x10) = 0;
      *(undefined4 *)(this + lVar6 + uVar7 * 0x10) = 0;
      *(float *)pbVar2 = *(float *)pbVar2 - fVar9 * fVar11;
      param_3 = iVar4 + -1;
      *(float *)pbVar1 = fVar9 * fVar11 + *(float *)pbVar1;
      fVar11 = fVar12 * *(float *)(this + lVar3 + lVar5 * 0x10) -
               fVar10 * *(float *)(this + lVar6 + lVar5 * 0x10);
      fVar9 = fVar10 * *(float *)(this + lVar3 + lVar5 * 0x10) +
              fVar12 * *(float *)(this + lVar6 + lVar5 * 0x10);
      *(float *)(this + lVar5 * 4 + uVar7 * 0x10) = fVar11;
      *(float *)(this + lVar3 + lVar5 * 0x10) = fVar11;
      *(float *)(this + lVar5 * 4 + lVar8 * 0x10) = fVar9;
      *(float *)(this + lVar6 + lVar5 * 0x10) = fVar9;
      fVar9 = *(float *)(param_1 + lVar3);
      fVar11 = *(float *)(param_1 + lVar6);
      *(float *)(param_1 + lVar3) = fVar12 * fVar9 - fVar10 * fVar11;
      *(float *)(param_1 + lVar6) = fVar10 * fVar9 + fVar12 * fVar11;
      fVar9 = *(float *)(param_1 + lVar3 + 0x10);
      fVar11 = *(float *)(param_1 + lVar6 + 0x10);
      *(float *)(param_1 + lVar3 + 0x10) = fVar12 * fVar9 - fVar10 * fVar11;
      *(float *)(param_1 + lVar6 + 0x10) = fVar10 * fVar9 + fVar12 * fVar11;
      fVar9 = *(float *)(param_1 + lVar3 + 0x20);
      fVar11 = *(float *)(param_1 + lVar6 + 0x20);
      *(float *)(param_1 + lVar3 + 0x20) = fVar12 * fVar9 - fVar10 * fVar11;
      *(float *)(param_1 + lVar6 + 0x20) = fVar10 * fVar9 + fVar12 * fVar11;
    } while (param_3 != 0 && 0 < iVar4);
  }
  return;
}

