
void kiss_fftri(undefined8 *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  short *psVar10;
  short *psVar11;
  ulong uVar12;
  short *psVar13;
  short *psVar14;
  ulong uVar15;
  
  puVar9 = (uint *)*param_1;
  if (puVar9[1] != 0) {
    uVar5 = *puVar9;
    psVar10 = (short *)param_1[1];
    *psVar10 = param_2[(long)(int)uVar5 * 2] + *param_2;
    psVar10[1] = *param_2 - param_2[(long)(int)uVar5 * 2];
    if (1 < (int)uVar5) {
      uVar12 = (ulong)(uVar5 >> 1);
      psVar13 = (short *)(param_1[2] + 6);
      psVar14 = psVar10 + 3;
      psVar11 = param_2 + 3;
      do {
        uVar5 = uVar5 - 1;
        uVar15 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
        psVar2 = (short *)((long)param_2 + uVar15);
        sVar3 = *psVar2;
        sVar4 = psVar2[1];
        sVar1 = sVar3 + psVar11[-1];
        sVar6 = *psVar11 - sVar4;
        iVar7 = (int)(short)(sVar4 + *psVar11);
        iVar8 = (int)(short)(psVar11[-1] - sVar3);
        sVar3 = (short)((uint)((psVar13[-1] * iVar7 + *psVar13 * iVar8) * 2 + 0x8000) >> 0x10);
        sVar4 = (short)((uint)((psVar13[-1] * iVar8 - *psVar13 * iVar7) * 2 + 0x8000) >> 0x10);
        uVar12 = uVar12 - 1;
        psVar13 = psVar13 + 2;
        psVar2 = (short *)((long)psVar10 + uVar15);
        *psVar14 = sVar6 + sVar3;
        psVar14[-1] = sVar1 + sVar4;
        psVar14 = psVar14 + 2;
        *psVar2 = sVar1 - sVar4;
        psVar2[1] = sVar3 - sVar6;
        psVar11 = psVar11 + 2;
      } while (uVar12 != 0);
    }
    kiss_fft(puVar9,psVar10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0010fe2c(0x8e);
}

