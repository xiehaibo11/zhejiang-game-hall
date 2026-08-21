
undefined8 FUN_01850f08(ulong *param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  int *piVar16;
  ulong uVar17;
  int *piVar18;
  ulong *puVar19;
  int *piVar20;
  int *piVar21;
  ulong uVar22;
  undefined8 local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  piVar16 = (int *)param_1[2];
  uVar17 = *param_1;
  if ((param_2 < 0x30) || ((int)param_3[5] == 0)) {
    if (param_2 < 0x1a) {
      return 0xffffffff;
    }
  }
  else {
    if ((param_1[4] == DAT_01d359f0) && (param_1[5] == DAT_01d54178)) {
      puVar19 = DAT_01d54180;
      puVar13 = (ulong *)0x0;
      puVar15 = (ulong *)0x0;
      while (puVar10 = puVar19, puVar10 != (ulong *)0x0) {
        if ((*puVar10 <= *param_3) && (*param_3 < puVar10[1])) {
          uVar17 = puVar10[2];
          piVar18 = (int *)puVar10[3];
          if (puVar10 != DAT_01d54180) {
            puVar15[5] = puVar10[5];
            puVar10[5] = (ulong)DAT_01d54180;
            DAT_01d54180 = puVar10;
          }
          goto LAB_01851118;
        }
        puVar13 = puVar10;
        if (*puVar10 == 0 && puVar10[1] == 0) break;
        puVar19 = (ulong *)puVar10[5];
        if (puVar19 != (ulong *)0x0) {
          puVar15 = puVar10;
        }
      }
      goto LAB_01851038;
    }
    puVar11 = &DAT_01d541b8;
    DAT_01d359f0 = param_1[4];
    DAT_01d54178 = param_1[5];
    do {
      puVar11[-6] = 0;
      puVar11[-5] = 0;
      puVar11[-1] = puVar11;
      puVar11 = puVar11 + 6;
    } while (puVar11 != (undefined8 *)0x1d54338);
    DAT_01d54300 = 0;
    DAT_01d54180 = &DAT_01d54188;
    *(undefined4 *)(param_3 + 5) = 0;
  }
  puVar15 = (ulong *)0x0;
  puVar13 = (ulong *)0x0;
LAB_01851038:
  uVar22 = (ulong)(ushort)param_1[3];
  uVar9 = 0;
  uVar14 = 0;
  bVar4 = false;
  piVar21 = (int *)0x0;
  piVar18 = (int *)0x0;
  while (uVar22 = uVar22 - 1, uVar22 != 0xffffffffffffffff) {
    iVar3 = *piVar16;
    piVar20 = piVar18;
    if (iVar3 == 1) {
      uVar12 = uVar17 + *(long *)(piVar16 + 4);
      if ((uVar12 <= *param_3) && (*param_3 < uVar12 + *(long *)(piVar16 + 10))) {
        bVar4 = true;
        uVar9 = uVar12 + *(long *)(piVar16 + 10);
        uVar14 = uVar12;
      }
    }
    else {
      piVar20 = piVar16;
      if ((iVar3 != 0x6474e550) && (piVar20 = piVar18, iVar3 == 2)) {
        piVar21 = piVar16;
      }
    }
    piVar16 = piVar16 + 0xe;
    piVar18 = piVar20;
  }
  if (!bVar4) {
    return 0;
  }
  if (param_2 >= 0x30) {
    if ((puVar15 != (ulong *)0x0) && (puVar13 != (ulong *)0x0)) {
      puVar15[5] = puVar13[5];
      puVar13[5] = (ulong)DAT_01d54180;
      DAT_01d54180 = puVar13;
    }
    puVar13 = DAT_01d54180;
    DAT_01d54180[2] = uVar17;
    puVar13[3] = (ulong)piVar18;
    puVar13[4] = (ulong)piVar21;
    *puVar13 = uVar14;
    puVar13[1] = uVar9;
  }
LAB_01851118:
  if (piVar18 == (int *)0x0) {
    return 0;
  }
  lVar1 = uVar17 + *(long *)(piVar18 + 4);
  if (*(char *)(uVar17 + *(long *)(piVar18 + 4)) != '\x01') {
    return 1;
  }
  uVar6 = *(undefined1 *)(lVar1 + 1);
  uVar7 = FUN_01850abc(uVar6,param_3);
  uVar7 = FUN_01850b1c(uVar6,uVar7,lVar1 + 4,&local_40);
  cVar2 = *(char *)(lVar1 + 2);
  if ((cVar2 != -1) && (*(char *)(lVar1 + 3) == ';')) {
    uVar8 = FUN_01850abc(cVar2,param_3);
    piVar16 = (int *)FUN_01850b1c(cVar2,uVar8,uVar7,&local_38);
    if (local_38 == 0) {
      return 1;
    }
    if (((ulong)piVar16 & 3) == 0) {
      uVar17 = *param_3;
      if (uVar17 < (ulong)(lVar1 + *piVar16)) {
        return 1;
      }
      uVar9 = local_38 - 1;
      if (uVar17 < (ulong)(lVar1 + piVar16[uVar9 * 2])) {
        uVar14 = 0;
        uVar22 = uVar9;
        do {
          uVar12 = uVar22;
          if (uVar12 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar9 = uVar12 + uVar14 >> 1;
          uVar22 = uVar9;
        } while ((uVar17 < (ulong)(lVar1 + piVar16[uVar9 * 2])) ||
                (uVar14 = uVar9 + 1, uVar22 = uVar12,
                (ulong)(lVar1 + piVar16[uVar9 * 2 + 2]) <= uVar17));
      }
      uVar17 = lVar1 + piVar16[uVar9 * 2 + 1];
      bVar5 = FUN_01850ef8(uVar17);
      uVar14 = FUN_018509fc(bVar5);
      FUN_01850b1c(bVar5 & 0xf,0,uVar17 + (uVar14 & 0xffffffff) + 8,&local_30);
      iVar3 = piVar16[uVar9 * 2];
      if (*param_3 < (ulong)(lVar1 + iVar3 + local_30)) {
        param_3[4] = uVar17;
      }
      param_3[3] = lVar1 + iVar3;
      return 1;
    }
  }
  local_28 = param_3[1];
  local_20 = param_3[2];
  local_10 = 4;
  local_30 = 0;
  local_18 = local_40;
  uVar17 = FUN_01850d98(&local_30,local_40,*param_3);
  param_3[4] = uVar17;
  if (uVar17 != 0) {
    uVar6 = FUN_01850ef8();
    uVar7 = FUN_01850abc(uVar6,param_3);
    FUN_01850b1c(uVar6,uVar7,param_3[4] + 8,&local_38);
    param_3[3] = local_38;
  }
  return 1;
}

