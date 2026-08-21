
void kiss_fftr(undefined8 *param_1,undefined8 param_2,short *param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  uint *puVar13;
  short *psVar14;
  short *psVar15;
  ulong uVar16;
  short *psVar17;
  short *psVar18;
  ulong uVar19;
  
  puVar13 = (uint *)*param_1;
  if (puVar13[1] == 0) {
    uVar4 = *puVar13;
    kiss_fft(puVar13,param_2,param_1[1]);
    psVar14 = (short *)param_1[1];
    sVar9 = (short)((uint)(psVar14[1] * 0x7ffe + 0x8000) >> 0x10);
    sVar10 = (short)((uint)(*psVar14 * 0x7ffe + 0x8000) >> 0x10);
    *param_3 = sVar9 + sVar10;
    param_3[(long)(int)uVar4 * 2] = sVar10 - sVar9;
    param_3[1] = 0;
    (param_3 + (long)(int)uVar4 * 2)[1] = 0;
    if (1 < (int)uVar4) {
      psVar15 = param_3 + 3;
      uVar16 = (ulong)(uVar4 >> 1);
      psVar17 = (short *)(param_1[2] + 6);
      psVar18 = psVar14 + 3;
      do {
        uVar4 = uVar4 - 1;
        uVar19 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        psVar1 = (short *)((long)psVar14 + uVar19);
        sVar9 = (short)((uint)(*psVar1 * 0x7ffe + 0x8000) >> 0x10);
        sVar10 = (short)((uint)(psVar18[-1] * 0x7ffe + 0x8000) >> 0x10);
        iVar5 = (int)(short)(sVar9 + sVar10);
        sVar11 = (short)((uint)(-psVar1[1] * 0x7ffe + 0x8000) >> 0x10);
        sVar12 = (short)((uint)(*psVar18 * 0x7ffe + 0x8000) >> 0x10);
        iVar6 = (int)(short)(sVar10 - sVar9);
        iVar7 = (int)(short)(sVar12 - sVar11);
        iVar8 = (int)(short)(sVar11 + sVar12);
        iVar3 = (iVar6 * *psVar17 + iVar7 * psVar17[-1]) * 2 + 0x8000 >> 0x10;
        iVar6 = (iVar6 * psVar17[-1] - iVar7 * *psVar17) * 2 + 0x8000 >> 0x10;
        *psVar15 = (short)((uint)(iVar3 + iVar8) >> 1);
        uVar16 = uVar16 - 1;
        psVar17 = psVar17 + 2;
        puVar2 = (undefined2 *)((long)param_3 + uVar19);
        psVar15[-1] = (short)((uint)(iVar6 + iVar5) >> 1);
        psVar15 = psVar15 + 2;
        psVar18 = psVar18 + 2;
        *puVar2 = (short)((uint)(iVar5 - iVar6) >> 1);
        puVar2[1] = (short)((uint)(iVar3 - iVar8) >> 1);
      } while (uVar16 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0010fe2c(0x58);
}

