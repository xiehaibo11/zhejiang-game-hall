
void spx_fft(uint *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  float fVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *param_1;
  uVar4 = (ulong)uVar1;
  fVar3 = 1.0 / (float)(int)uVar1;
  if (param_2 == param_3) {
    fprintf((FILE *)0x14d168,"warning: %s\n","FFT should not be done in-place");
    uVar1 = *param_1;
    uVar4 = (ulong)(int)uVar1;
    if (0 < (int)uVar1) {
      if (uVar1 < 8) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar4 & 0xfffffffffffffff8;
        puVar8 = (undefined8 *)(param_2 + 0x10);
        uVar10 = uVar6;
        do {
          uVar10 = uVar10 - 8;
          puVar8[-1] = CONCAT44((float)((ulong)puVar8[-1] >> 0x20) * fVar3,(float)puVar8[-1] * fVar3
                               );
          puVar8[-2] = CONCAT44((float)((ulong)puVar8[-2] >> 0x20) * fVar3,(float)puVar8[-2] * fVar3
                               );
          puVar8[1] = CONCAT44((float)((ulong)puVar8[1] >> 0x20) * fVar3,(float)puVar8[1] * fVar3);
          *puVar8 = CONCAT44((float)((ulong)*puVar8 >> 0x20) * fVar3,(float)*puVar8 * fVar3);
          puVar8 = puVar8 + 4;
        } while (uVar10 != 0);
        if (uVar6 == uVar4) goto LAB_0010899c;
      }
      do {
        lVar5 = uVar6 * 4;
        uVar6 = uVar6 + 1;
        *(float *)(param_2 + lVar5) = *(float *)(param_2 + lVar5) * fVar3;
      } while ((long)uVar6 < (long)uVar4);
    }
  }
  else if (0 < (int)uVar1) {
    if ((uVar1 < 8) || ((param_3 < param_2 + uVar4 * 4 && (param_2 < param_3 + uVar4 * 4)))) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar4 & 0xfffffff8;
      puVar8 = (undefined8 *)(param_2 + 0x10);
      puVar11 = (undefined8 *)(param_3 + 0x10);
      uVar10 = uVar6;
      do {
        puVar2 = puVar8 + -1;
        uVar12 = puVar8[-2];
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar10 = uVar10 - 8;
        puVar11[-1] = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar3,(float)*puVar2 * fVar3);
        puVar11[-2] = CONCAT44((float)((ulong)uVar12 >> 0x20) * fVar3,(float)uVar12 * fVar3);
        puVar11[1] = CONCAT44((float)((ulong)uVar14 >> 0x20) * fVar3,(float)uVar14 * fVar3);
        *puVar11 = CONCAT44((float)((ulong)uVar13 >> 0x20) * fVar3,(float)uVar13 * fVar3);
        puVar11 = puVar11 + 4;
      } while (uVar10 != 0);
      if (uVar6 == uVar4) goto LAB_0010899c;
    }
    lVar5 = uVar4 - uVar6;
    pfVar7 = (float *)(param_3 + uVar6 * 4);
    pfVar9 = (float *)(param_2 + uVar6 * 4);
    do {
      lVar5 = lVar5 + -1;
      *pfVar7 = *pfVar9 * fVar3;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (lVar5 != 0);
  }
LAB_0010899c:
  spx_drft_forward(param_1,param_3);
  return;
}

