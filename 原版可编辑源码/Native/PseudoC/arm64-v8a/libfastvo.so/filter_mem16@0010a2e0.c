
void filter_mem16(long param_1,long param_2,long param_3,long param_4,uint param_5,int param_6,
                 int *param_7)

{
  int iVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  short *psVar14;
  short *psVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (0 < (int)param_5) {
    uVar4 = param_6 - 1;
    uVar9 = (ulong)uVar4;
    uVar8 = 0;
    uVar10 = uVar9 & 0xfffffff8;
    do {
      sVar3 = *(short *)(param_1 + uVar8 * 2);
      iVar5 = (int)sVar3;
      iVar1 = iVar5 + (*param_7 + 0x1000 >> 0xd);
      if (iVar1 < -0x7ffe) {
        iVar1 = -0x7fff;
      }
      if (0x7ffe < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar2 = iVar1 * -0x10000 >> 0x10;
      iVar6 = (int)sVar3;
      if (1 < param_6) {
        iVar7 = (int)sVar3;
        puVar11 = (undefined8 *)(param_2 + 8);
        puVar13 = (undefined8 *)(param_3 + 8);
        piVar12 = param_7 + 5;
        uVar16 = uVar10;
        if (uVar4 < 8) {
          uVar16 = 0;
        }
        else {
          do {
            uVar18 = puVar11[-1];
            uVar20 = *puVar11;
            uVar16 = uVar16 - 8;
            uVar19 = puVar13[-1];
            uVar21 = *puVar13;
            *(ulong *)(piVar12 + -3) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar12 + -2) >> 0x20) +
                          iVar7 * (short)((ulong)uVar18 >> 0x30) +
                          iVar2 * (short)((ulong)uVar19 >> 0x30),
                          (int)*(undefined8 *)(piVar12 + -2) +
                          iVar6 * (short)((ulong)uVar18 >> 0x20) +
                          iVar2 * (short)((ulong)uVar19 >> 0x20));
            *(ulong *)(piVar12 + -5) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar12 + -4) >> 0x20) +
                          iVar6 * (short)((ulong)uVar18 >> 0x10) +
                          iVar2 * (short)((ulong)uVar19 >> 0x10),
                          (int)*(undefined8 *)(piVar12 + -4) + iVar5 * (short)uVar18 +
                          iVar2 * (short)uVar19);
            *(ulong *)(piVar12 + 1) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar12 + 2) >> 0x20) +
                          iVar7 * (short)((ulong)uVar20 >> 0x30) +
                          iVar2 * (short)((ulong)uVar21 >> 0x30),
                          (int)*(undefined8 *)(piVar12 + 2) + iVar6 * (short)((ulong)uVar20 >> 0x20)
                          + iVar2 * (short)((ulong)uVar21 >> 0x20));
            *(ulong *)(piVar12 + -1) =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar12 >> 0x20) +
                          iVar6 * (short)((ulong)uVar20 >> 0x10) +
                          iVar2 * (short)((ulong)uVar21 >> 0x10),
                          (int)*(undefined8 *)piVar12 + iVar5 * (short)uVar20 +
                          iVar2 * (short)uVar21);
            puVar11 = puVar11 + 2;
            puVar13 = puVar13 + 2;
            piVar12 = piVar12 + 8;
          } while (uVar16 != 0);
          uVar16 = uVar10;
          if (uVar10 == uVar9) goto LAB_0010a408;
        }
        piVar12 = param_7 + uVar16 + 1;
        lVar17 = uVar9 - uVar16;
        psVar14 = (short *)(param_3 + uVar16 * 2);
        psVar15 = (short *)(param_2 + uVar16 * 2);
        do {
          lVar17 = lVar17 + -1;
          piVar12[-1] = *piVar12 + *psVar15 * iVar7 + iVar2 * *psVar14;
          piVar12 = piVar12 + 1;
          psVar14 = psVar14 + 1;
          psVar15 = psVar15 + 1;
        } while (lVar17 != 0);
      }
LAB_0010a408:
      lVar17 = (long)(int)uVar4 * 2;
      param_7[(int)uVar4] =
           *(short *)(param_2 + lVar17) * iVar6 + iVar2 * *(short *)(param_3 + lVar17);
      *(short *)(param_4 + uVar8 * 2) = (short)iVar1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_5);
  }
  return;
}

