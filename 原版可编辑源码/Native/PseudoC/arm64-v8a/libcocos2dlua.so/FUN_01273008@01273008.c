
undefined8
FUN_01273008(long param_1,long param_2,ulong *param_3,long param_4,long param_5,long param_6,
            int *param_7,ulong param_8)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  int *piVar17;
  ulong *puVar18;
  int *piVar19;
  int *piVar20;
  int in_w13;
  long unaff_x29;
  
  if ((param_5 == param_4) && (param_6 == DAT_01795c48)) {
    puVar18 = DAT_01795c50;
    puVar14 = (ulong *)0x0;
    puVar16 = (ulong *)0x0;
    while (puVar10 = puVar18, puVar10 != (ulong *)0x0) {
      if ((*puVar10 <= *param_3) && (*param_3 < puVar10[1])) {
        param_8 = puVar10[2];
        piVar17 = (int *)puVar10[3];
        if (puVar10 != DAT_01795c50) {
          puVar16[5] = puVar10[5];
          puVar10[5] = (ulong)DAT_01795c50;
          DAT_01795c50 = puVar10;
        }
        goto LAB_012731d8;
      }
      puVar14 = puVar10;
      if (*puVar10 == 0 && puVar10[1] == 0) break;
      puVar18 = (ulong *)puVar10[5];
      if (puVar18 != (ulong *)0x0) {
        puVar16 = puVar10;
      }
    }
  }
  else {
    *(long *)(param_2 + 0x958) = param_5;
    puVar11 = &DAT_01795c88;
    DAT_01795c48 = param_6;
    do {
      puVar11[-6] = 0;
      puVar11[-5] = 0;
      puVar11[-1] = puVar11;
      puVar11 = puVar11 + 6;
    } while (puVar11 != (undefined8 *)0x1795e08);
    DAT_01795dd0 = 0;
    DAT_01795c50 = &DAT_01795c58;
    *(undefined4 *)(param_3 + 5) = 0;
    puVar16 = (ulong *)0x0;
    puVar14 = (ulong *)0x0;
  }
  uVar15 = (ulong)*(ushort *)(param_1 + 0x18);
  uVar12 = 0;
  uVar9 = 0;
  bVar5 = false;
  piVar20 = (int *)0x0;
  piVar17 = (int *)0x0;
  while (uVar15 = uVar15 - 1, uVar15 != 0xffffffffffffffff) {
    iVar4 = *param_7;
    piVar19 = piVar17;
    if (iVar4 == 1) {
      uVar1 = param_8 + *(long *)(param_7 + 4);
      if ((uVar1 <= *param_3) && (*param_3 < uVar1 + *(long *)(param_7 + 10))) {
        bVar5 = true;
        uVar12 = uVar1 + *(long *)(param_7 + 10);
        uVar9 = uVar1;
      }
    }
    else {
      piVar19 = param_7;
      if ((iVar4 != 0x6474e550) && (piVar19 = piVar17, iVar4 == 2)) {
        piVar20 = param_7;
      }
    }
    param_7 = param_7 + 0xe;
    piVar17 = piVar19;
  }
  if (!bVar5) {
    return 0;
  }
  if (in_w13 != 0) {
    if ((puVar16 != (ulong *)0x0) && (puVar14 != (ulong *)0x0)) {
      puVar16[5] = puVar14[5];
      puVar14[5] = (ulong)DAT_01795c50;
      DAT_01795c50 = puVar14;
    }
    puVar14 = DAT_01795c50;
    DAT_01795c50[2] = param_8;
    puVar14[3] = (ulong)piVar17;
    puVar14[4] = (ulong)piVar20;
    *puVar14 = uVar9;
    puVar14[1] = uVar12;
  }
LAB_012731d8:
  if (piVar17 == (int *)0x0) {
    return 0;
  }
  lVar2 = param_8 + *(long *)(piVar17 + 4);
  if (*(char *)(param_8 + *(long *)(piVar17 + 4)) != '\x01') {
    return 1;
  }
  uVar7 = *(undefined1 *)(lVar2 + 1);
  uVar8 = FUN_01272b7c(uVar7,param_3);
  uVar8 = FUN_01272bdc(uVar7,uVar8,lVar2 + 4,unaff_x29 + 0x50);
  cVar3 = *(char *)(lVar2 + 2);
  if ((cVar3 != -1) && (*(char *)(lVar2 + 3) == ';')) {
    *(undefined8 *)(unaff_x29 + 0x48) = uVar8;
    uVar8 = FUN_01272b7c(cVar3,param_3);
    piVar17 = (int *)FUN_01272bdc(cVar3,uVar8,*(undefined8 *)(unaff_x29 + 0x48),unaff_x29 + 0x58);
    if (*(long *)(unaff_x29 + 0x58) == 0) {
      return 1;
    }
    if (((ulong)piVar17 & 3) == 0) {
      uVar12 = *param_3;
      if (uVar12 < (ulong)(lVar2 + *piVar17)) {
        return 1;
      }
      uVar9 = *(long *)(unaff_x29 + 0x58) - 1;
      if (uVar12 < (ulong)(lVar2 + piVar17[uVar9 * 2])) {
        uVar15 = 0;
        uVar1 = uVar9;
        do {
          uVar13 = uVar1;
          if (uVar13 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar9 = uVar13 + uVar15 >> 1;
          uVar1 = uVar9;
        } while ((uVar12 < (ulong)(lVar2 + piVar17[uVar9 * 2])) ||
                (uVar15 = uVar9 + 1, uVar1 = uVar13,
                (ulong)(lVar2 + piVar17[uVar9 * 2 + 2]) <= uVar12));
      }
      uVar12 = lVar2 + piVar17[uVar9 * 2 + 1];
      bVar6 = FUN_01272fb8(uVar12);
      uVar15 = FUN_01272abc(bVar6);
      FUN_01272bdc(bVar6 & 0xf,0,uVar12 + (uVar15 & 0xffffffff) + 8,unaff_x29 + 0x60);
      iVar4 = piVar17[uVar9 * 2];
      if (*param_3 < (ulong)(lVar2 + iVar4 + *(long *)(unaff_x29 + 0x60))) {
        param_3[4] = uVar12;
      }
      param_3[3] = lVar2 + iVar4;
      return 1;
    }
  }
  *(ulong *)(unaff_x29 + 0x68) = param_3[1];
  *(ulong *)(unaff_x29 + 0x70) = param_3[2];
  *(undefined8 *)(unaff_x29 + 0x80) = 0;
  uVar12 = *param_3;
  *(undefined1 *)(unaff_x29 + 0x80) = 4;
  *(undefined8 *)(unaff_x29 + 0x60) = 0;
  *(undefined8 *)(unaff_x29 + 0x78) = *(undefined8 *)(unaff_x29 + 0x50);
  uVar12 = FUN_01272e58(unaff_x29 + 0x60,*(undefined8 *)(unaff_x29 + 0x50),uVar12);
  param_3[4] = uVar12;
  if (uVar12 != 0) {
    uVar7 = FUN_01272fb8();
    uVar8 = FUN_01272b7c(uVar7,param_3);
    FUN_01272bdc(uVar7,uVar8,param_3[4] + 8,unaff_x29 + 0x58);
    param_3[3] = *(ulong *)(unaff_x29 + 0x58);
  }
  return 1;
}

