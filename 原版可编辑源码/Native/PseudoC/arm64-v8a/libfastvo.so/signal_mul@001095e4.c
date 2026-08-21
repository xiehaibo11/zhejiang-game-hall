
void signal_mul(ulong param_1,ulong param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  if (0 < (int)param_4) {
    iVar2 = (int)(param_3 << 2) >> 0x10;
    param_3 = param_3 & 0x3fff;
    uVar5 = (ulong)param_4;
    if ((param_4 < 8) || ((param_2 < param_1 + uVar5 * 4 && (param_1 < param_2 + uVar5 * 4)))) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar5 & 0xfffffff8;
      puVar9 = (undefined8 *)(param_1 + 0x10);
      puVar11 = (undefined8 *)(param_2 + 0x10);
      uVar12 = uVar7;
      do {
        puVar1 = puVar9 + -2;
        puVar3 = puVar9 + -1;
        puVar4 = puVar9 + 1;
        uVar18 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar12 = uVar12 - 8;
        iVar13 = ((int)*puVar1 << 9) >> 0x10;
        iVar14 = ((int)((ulong)*puVar1 >> 0x20) << 9) >> 0x10;
        iVar15 = ((int)*puVar3 << 9) >> 0x10;
        iVar16 = ((int)((ulong)*puVar3 >> 0x20) << 9) >> 0x10;
        iVar17 = ((int)uVar18 << 9) >> 0x10;
        iVar19 = ((int)((ulong)uVar18 >> 0x20) << 9) >> 0x10;
        iVar20 = ((int)*puVar4 << 9) >> 0x10;
        iVar21 = ((int)((ulong)*puVar4 >> 0x20) << 9) >> 0x10;
        puVar11[-1] = CONCAT44((iVar16 * iVar2 + ((int)(iVar16 * param_3) >> 0xe)) * 0x80,
                               (iVar15 * iVar2 + ((int)(iVar15 * param_3) >> 0xe)) * 0x80);
        puVar11[-2] = CONCAT44((iVar14 * iVar2 + ((int)(iVar14 * param_3) >> 0xe)) * 0x80,
                               (iVar13 * iVar2 + ((int)(iVar13 * param_3) >> 0xe)) * 0x80);
        puVar11[1] = CONCAT44((iVar21 * iVar2 + ((int)(iVar21 * param_3) >> 0xe)) * 0x80,
                              (iVar20 * iVar2 + ((int)(iVar20 * param_3) >> 0xe)) * 0x80);
        *puVar11 = CONCAT44((iVar19 * iVar2 + ((int)(iVar19 * param_3) >> 0xe)) * 0x80,
                            (iVar17 * iVar2 + ((int)(iVar17 * param_3) >> 0xe)) * 0x80);
        puVar11 = puVar11 + 4;
      } while (uVar12 != 0);
      if (uVar7 == uVar5) {
        return;
      }
    }
    lVar6 = uVar5 - uVar7;
    piVar8 = (int *)(param_2 + uVar7 * 4);
    piVar10 = (int *)(param_1 + uVar7 * 4);
    do {
      lVar6 = lVar6 + -1;
      iVar13 = (*piVar10 << 9) >> 0x10;
      *piVar8 = (iVar13 * iVar2 + ((int)(iVar13 * param_3) >> 0xe)) * 0x80;
      piVar8 = piVar8 + 1;
      piVar10 = piVar10 + 1;
    } while (lVar6 != 0);
  }
  return;
}

