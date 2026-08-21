
void kiss_fftri2(undefined8 *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short sVar8;
  uint *puVar9;
  short *psVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  short *psVar14;
  short *psVar15;
  
  puVar9 = (uint *)*param_1;
  if (puVar9[1] != 0) {
    uVar11 = *puVar9;
    uVar3 = uVar11 * 2 - 1;
    uVar13 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
    psVar10 = (short *)param_1[1];
    *psVar10 = *(short *)((long)param_2 + uVar13) + *param_2;
    psVar10[1] = *param_2 - *(short *)((long)param_2 + uVar13);
    if (1 < (int)uVar11) {
      uVar13 = (ulong)(uVar11 >> 1);
      iVar12 = uVar11 * 2 + -3;
      psVar14 = (short *)(param_1[2] + 6);
      psVar15 = psVar10 + 3;
      psVar7 = param_2;
      do {
        uVar11 = uVar11 - 1;
        sVar2 = psVar7[2];
        sVar1 = param_2[iVar12] + psVar7[1];
        sVar4 = sVar2 - param_2[iVar12 + 1];
        iVar5 = (int)(short)(param_2[iVar12 + 1] + sVar2);
        iVar6 = (int)(short)(psVar7[1] - param_2[iVar12]);
        sVar2 = (short)((uint)((psVar14[-1] * iVar5 + *psVar14 * iVar6) * 2 + 0x8000) >> 0x10);
        sVar8 = (short)((uint)((psVar14[-1] * iVar6 - *psVar14 * iVar5) * 2 + 0x8000) >> 0x10);
        iVar12 = iVar12 + -2;
        uVar13 = uVar13 - 1;
        psVar14 = psVar14 + 2;
        *psVar15 = sVar4 + sVar2;
        psVar15[-1] = sVar1 + sVar8;
        psVar15 = psVar15 + 2;
        psVar10[(long)(int)uVar11 * 2] = sVar1 - sVar8;
        (psVar10 + (long)(int)uVar11 * 2)[1] = sVar2 - sVar4;
        psVar7 = psVar7 + 2;
      } while (uVar13 != 0);
    }
    kiss_fft(puVar9,psVar10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0010fe2c(0x10b);
}

