
void kiss_fftr2(undefined8 *param_1,undefined8 param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  short *psVar9;
  uint *puVar10;
  short *psVar11;
  short *psVar12;
  ulong uVar13;
  int iVar14;
  short *psVar15;
  
  puVar10 = (uint *)*param_1;
  if (puVar10[1] == 0) {
    uVar5 = *puVar10;
    kiss_fft(puVar10,param_2,param_1[1]);
    psVar11 = (short *)param_1[1];
    sVar7 = (short)((uint)(psVar11[1] * 0x7ffe + 0x8000) >> 0x10);
    sVar8 = (short)((uint)(*psVar11 * 0x7ffe + 0x8000) >> 0x10);
    *param_3 = sVar7 + sVar8;
    param_3[(int)(uVar5 * 2 + -1)] = sVar8 - sVar7;
    if (1 < (int)uVar5) {
      psVar12 = psVar11 + 3;
      uVar13 = (ulong)(uVar5 >> 1);
      iVar14 = uVar5 * 2 + -3;
      psVar11 = psVar11 + (long)(int)uVar5 * 2 + -1;
      psVar15 = (short *)(param_1[2] + 6);
      psVar9 = param_3;
      do {
        iVar6 = (int)*psVar12 - (int)*psVar11;
        iVar2 = (int)psVar12[-1] - (int)psVar11[-1] >> 1;
        iVar3 = ((int)*psVar11 + (int)*psVar12) * 0x8000 + 0x8000 >> 0x10;
        iVar4 = iVar2 * *psVar15 + iVar3 * psVar15[-1] >> 1;
        iVar1 = ((int)psVar11[-1] + (int)psVar12[-1]) * 0x2000 + 0x4000;
        iVar3 = iVar2 * psVar15[-1] - iVar3 * *psVar15 >> 1;
        iVar2 = iVar14 + 1;
        uVar13 = uVar13 - 1;
        psVar11 = psVar11 + -2;
        psVar15 = psVar15 + 2;
        psVar9[2] = (short)(iVar6 * 0x2000 + iVar4 + 0x4000U >> 0xf);
        psVar9[1] = (short)((uint)(iVar1 + iVar3) >> 0xf);
        param_3[iVar14] = (short)((uint)(iVar1 - iVar3) >> 0xf);
        iVar14 = iVar14 + -2;
        psVar12 = psVar12 + 2;
        param_3[iVar2] = (short)((uint)(iVar6 * -0x2000 + 0x4000 + iVar4) >> 0xf);
        psVar9 = psVar9 + 2;
      } while (uVar13 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0010fe2c(0xb5);
}

