
void FUN_00bff9bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  
LAB_00bffa00:
  puVar9 = param_2 + -1;
LAB_00bffa20:
  puVar13 = param_1;
  lVar10 = (long)param_2 - (long)puVar13;
  uVar8 = lVar10 >> 3;
  switch(uVar8) {
  case 0:
  case 1:
    return;
  case 2:
    plVar15 = (long *)*puVar13;
    uVar5 = (**(code **)(*(long *)param_2[-1] + 0x20))();
    uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
    if (uVar6 <= uVar5) {
      return;
    }
    uVar11 = *puVar13;
    *puVar13 = param_2[-1];
    param_2[-1] = uVar11;
    return;
  case 3:
    FUN_00bfff98(puVar13,puVar13 + 1,puVar9);
    return;
  case 4:
    FUN_00c0010c(puVar13,puVar13 + 1,puVar13 + 2,puVar9);
    return;
  case 5:
    FUN_00c00230(puVar13,puVar13 + 1,puVar13 + 2,puVar13 + 3,puVar9);
    return;
  }
  if (0xf7 < lVar10) {
    uVar7 = uVar8;
    if ((long)uVar8 < 0) {
      uVar7 = uVar8 + 1;
    }
    puVar12 = (undefined8 *)((long)puVar13 + (uVar7 & 0x3ffffffffffffffe) * 4);
    if (lVar10 < 0x1f39) {
      iVar4 = FUN_00bfff98(puVar13,puVar12,puVar9);
    }
    else {
      uVar7 = uVar8 + 3;
      if (-1 < (long)uVar8) {
        uVar7 = uVar8;
      }
      lVar10 = (uVar7 & 0x7ffffffffffffffc) * 2;
      iVar4 = FUN_00c00230(puVar13,(long)puVar13 + lVar10,puVar12,(long)puVar12 + lVar10,puVar9);
    }
    plVar15 = (long *)*puVar12;
    uVar5 = (**(code **)(*(long *)*puVar13 + 0x20))();
    uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
    puVar19 = puVar9;
    puVar17 = param_2 + -2;
    if (uVar6 <= uVar5) {
LAB_00bffad8:
      puVar19 = puVar17;
      if (puVar13 != puVar19) goto code_r0x00bffae0;
      puVar12 = puVar13 + 1;
      plVar15 = (long *)*puVar9;
      uVar5 = (**(code **)(*(long *)*puVar13 + 0x20))();
      uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
      if (uVar6 <= uVar5) {
        if (puVar12 == puVar9) {
          return;
        }
        puVar12 = puVar13 + 2;
        while( true ) {
          plVar15 = (long *)puVar12[-1];
          uVar5 = (**(code **)(*(long *)*puVar13 + 0x20))();
          uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
          if (uVar5 < uVar6) break;
          puVar12 = puVar12 + 1;
          if (param_2 == puVar12) {
            return;
          }
        }
        uVar11 = puVar12[-1];
        puVar12[-1] = *puVar9;
        *puVar9 = uVar11;
      }
      if (puVar12 == puVar9) {
        return;
      }
      while( true ) {
        param_1 = puVar12 + -1;
        do {
          puVar12 = param_1;
          param_1 = puVar12 + 1;
          plVar15 = (long *)*param_1;
          uVar5 = (**(code **)(*(long *)*puVar13 + 0x20))();
          uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
        } while (uVar6 <= uVar5);
        puVar12 = puVar12 + 2;
        do {
          puVar9 = puVar9 + -1;
          plVar15 = (long *)*puVar9;
          uVar5 = (**(code **)(*(long *)*puVar13 + 0x20))();
          uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
        } while (uVar5 < uVar6);
        if (puVar9 <= param_1) break;
        uVar11 = *param_1;
        *param_1 = *puVar9;
        *puVar9 = uVar11;
      }
      uVar5 = 4;
      goto LAB_00bffd84;
    }
    goto LAB_00bffb24;
  }
  FUN_00bfff98(puVar13,puVar13 + 1,puVar13 + 2);
  if (puVar13 + 3 == param_2) {
    return;
  }
  lVar10 = 0;
  puVar9 = puVar13 + 3;
  puVar12 = puVar13 + 2;
LAB_00bffe3c:
  puVar19 = puVar9;
  plVar15 = (long *)*puVar12;
  uVar5 = (**(code **)(*(long *)*puVar19 + 0x20))();
  uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
  if (uVar5 < uVar6) {
    plVar15 = (long *)*puVar19;
    lVar2 = lVar10;
    do {
      lVar18 = lVar2;
      *(undefined8 *)((long)puVar13 + lVar18 + 0x18) =
           *(undefined8 *)((long)puVar13 + lVar18 + 0x10);
      puVar9 = puVar13;
      if (lVar18 == -0x10) goto LAB_00bffed4;
      plVar14 = *(long **)((long)puVar13 + lVar18 + 8);
      uVar5 = (**(code **)(*plVar15 + 0x20))(plVar15);
      uVar6 = (**(code **)(*plVar14 + 0x20))(plVar14);
      lVar2 = lVar18 + -8;
    } while (uVar5 < uVar6);
    puVar9 = (undefined8 *)((long)puVar13 + lVar18 + 0x10);
LAB_00bffed4:
    *puVar9 = plVar15;
  }
  lVar10 = lVar10 + 8;
  puVar9 = puVar19 + 1;
  puVar12 = puVar19;
  if (puVar19 + 1 == param_2) {
    return;
  }
  goto LAB_00bffe3c;
code_r0x00bffae0:
  plVar15 = (long *)*puVar12;
  uVar5 = (**(code **)(*(long *)*puVar19 + 0x20))();
  uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
  puVar17 = puVar19 + -1;
  if (uVar5 < uVar6) goto code_r0x00bffb10;
  goto LAB_00bffad8;
code_r0x00bffb10:
  uVar11 = *puVar13;
  iVar4 = iVar4 + 1;
  *puVar13 = *puVar19;
  *puVar19 = uVar11;
LAB_00bffb24:
  puVar17 = puVar13 + 1;
  puVar1 = puVar12;
  puVar16 = puVar17;
  if (puVar17 < puVar19) {
    while( true ) {
      puVar12 = puVar1;
      puVar17 = puVar16 + -1;
      do {
        puVar16 = puVar17;
        puVar17 = puVar16 + 1;
        plVar15 = (long *)*puVar12;
        uVar5 = (**(code **)(*(long *)*puVar17 + 0x20))();
        uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
      } while (uVar5 < uVar6);
      puVar16 = puVar16 + 2;
      do {
        puVar19 = puVar19 + -1;
        plVar15 = (long *)*puVar12;
        uVar5 = (**(code **)(*(long *)*puVar19 + 0x20))();
        uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
      } while (uVar6 <= uVar5);
      if (puVar19 < puVar17) break;
      uVar11 = *puVar17;
      iVar4 = iVar4 + 1;
      *puVar17 = *puVar19;
      *puVar19 = uVar11;
      puVar1 = puVar19;
      if (puVar12 != puVar17) {
        puVar1 = puVar12;
      }
    }
    if (puVar17 == puVar12) goto LAB_00bffc1c;
  }
  else if (puVar17 == puVar12) goto LAB_00bffc1c;
  plVar15 = (long *)*puVar17;
  uVar5 = (**(code **)(*(long *)*puVar12 + 0x20))();
  uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15);
  if (uVar5 < uVar6) {
    uVar11 = *puVar17;
    iVar4 = iVar4 + 1;
    *puVar17 = *puVar12;
    *puVar12 = uVar11;
  }
LAB_00bffc1c:
  if (iVar4 == 0) {
    uVar8 = FUN_00c003a0(puVar13,puVar17);
    uVar7 = FUN_00c003a0(puVar17 + 1,param_2);
    if ((uVar7 & 1) != 0) goto LAB_00bffd9c;
    param_1 = puVar17 + 1;
    if ((uVar8 & 1) != 0) goto LAB_00bffa20;
  }
  if ((long)param_2 - (long)puVar17 <= (long)puVar17 - (long)puVar13) {
    FUN_00bff9bc(puVar17 + 1,param_2);
    param_2 = puVar17;
    param_1 = puVar13;
    goto LAB_00bffa00;
  }
  FUN_00bff9bc(puVar13,puVar17);
  param_1 = puVar17 + 1;
  goto LAB_00bffa20;
LAB_00bffd9c:
  bVar3 = (uVar8 & 1) == 0;
  if (bVar3) {
    param_2 = puVar17;
  }
  uVar5 = 1;
  if (bVar3) {
    uVar5 = 2;
  }
  param_1 = puVar13;
  if (4 < uVar5) {
    return;
  }
LAB_00bffd84:
  if ((1 << uVar5 & 0x15U) == 0) {
    return;
  }
  goto LAB_00bffa00;
}

