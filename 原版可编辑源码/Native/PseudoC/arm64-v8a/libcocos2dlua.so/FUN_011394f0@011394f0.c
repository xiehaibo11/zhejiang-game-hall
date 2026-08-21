
void FUN_011394f0(long param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint *puVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double __x;
  
  if (0 < param_3) {
    param_3 = param_3 + 1;
    puVar4 = *(uint **)(param_1 + 0x10);
    do {
      uVar2 = *puVar4;
      fVar12 = 0.0;
      uVar1 = (int)uVar2 >> 0x10 & 0x7fff;
      if (uVar1 == 0) {
        fVar7 = 0.0;
        fVar9 = 0.0;
      }
      else {
        dVar5 = exp(((double)uVar1 + 0.5) * 0.0027076061740622863 + -44.3614195558365);
        dVar6 = -dVar5;
        if (((int)uVar2 >> 0x10 & 0x8000U) == 0) {
          dVar6 = dVar5;
        }
        fVar7 = 0.0;
        fVar9 = 0.0;
        fVar12 = 0.0;
        if (0.0 < dVar6) {
          dVar10 = ((double)(uVar2 >> 8 & 0xff) + 0.5) * 0.0024390243902439024;
          dVar5 = ((double)(uVar2 & 0xff) + 0.5) * 0.0024390243902439024;
          dVar11 = 1.0 / (dVar10 * 6.0 + dVar5 * -16.0 + 12.0);
          dVar10 = dVar10 * 9.0 * dVar11;
          dVar11 = dVar5 * 4.0 * dVar11;
          fVar7 = (float)dVar6;
          fVar9 = (float)((dVar10 / dVar11) * dVar6);
          fVar12 = (float)((((1.0 - dVar10) - dVar11) / dVar11) * dVar6);
        }
      }
      dVar10 = (double)fVar9;
      dVar5 = (double)fVar7;
      dVar11 = (double)fVar12;
      dVar6 = dVar10 * 2.69 + dVar5 * -1.276 + dVar11 * -0.414;
      __x = dVar11 * 0.044 + dVar5 * 1.978 + dVar10 * -1.022;
      if (dVar6 <= 0.0) {
        uVar3 = 0;
      }
      else if (1.0 <= dVar6) {
        uVar3 = 0xff;
      }
      else {
        dVar8 = SQRT(dVar6);
        if (NAN(dVar8)) {
          dVar8 = sqrt(dVar6);
        }
        uVar3 = (undefined1)(int)(dVar8 * 256.0);
      }
      dVar6 = dVar11 * 1.163 + dVar10 * 0.061 + dVar5 * -0.224;
      *param_2 = uVar3;
      if (__x <= 0.0) {
        uVar3 = 0;
      }
      else if (1.0 <= __x) {
        uVar3 = 0xff;
      }
      else {
        dVar5 = SQRT(__x);
        if (NAN(dVar5)) {
          dVar5 = sqrt(__x);
        }
        uVar3 = (undefined1)(int)(dVar5 * 256.0);
      }
      param_2[1] = uVar3;
      if (dVar6 <= 0.0) {
        uVar3 = 0;
      }
      else if (1.0 <= dVar6) {
        uVar3 = 0xff;
      }
      else {
        dVar5 = SQRT(dVar6);
        if (NAN(dVar5)) {
          dVar5 = sqrt(dVar6);
        }
        uVar3 = (undefined1)(int)(dVar5 * 256.0);
      }
      param_3 = param_3 + -1;
      param_2[2] = uVar3;
      param_2 = param_2 + 3;
      puVar4 = puVar4 + 1;
    } while (1 < param_3);
  }
  return;
}

