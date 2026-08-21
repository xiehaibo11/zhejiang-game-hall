
void FUN_008f2e78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
LAB_008f2ecc:
  puVar9 = param_2 + -2;
LAB_008f2ee8:
  puVar12 = param_1;
  lVar10 = (long)param_2 - (long)puVar12;
  uVar8 = lVar10 >> 4;
  switch(uVar8) {
  case 0:
  case 1:
    goto switchD_008f31b4_caseD_0;
  case 2:
    uVar8 = FUN_008f3374(puVar9,puVar12);
    if ((uVar8 & 1) != 0) {
      uStack_78 = puVar12[1];
      local_80 = *puVar12;
      uVar19 = *puVar9;
      puVar12[1] = param_2[-1];
      *puVar12 = uVar19;
      param_2[-1] = uStack_78;
      *puVar9 = local_80;
    }
    goto switchD_008f31b4_caseD_0;
  case 3:
    FUN_008f35c8(puVar12,puVar12 + 2,puVar9);
    goto switchD_008f31b4_caseD_0;
  case 4:
    puVar11 = puVar12 + 2;
    puVar15 = puVar12 + 4;
    FUN_008f35c8(puVar12,puVar11,puVar15);
    uVar8 = FUN_008f3374(puVar9,puVar15);
    if ((uVar8 & 1) != 0) {
      uStack_78 = puVar12[5];
      local_80 = *puVar15;
      uVar19 = *puVar9;
      puVar12[5] = param_2[-1];
      *puVar15 = uVar19;
      param_2[-1] = uStack_78;
      *puVar9 = local_80;
      uVar8 = FUN_008f3374(puVar15,puVar11);
      if ((uVar8 & 1) != 0) {
        uStack_78 = puVar12[3];
        local_80 = *puVar11;
        puVar12[3] = puVar12[5];
        *puVar11 = *puVar15;
        puVar12[5] = uStack_78;
        *puVar15 = local_80;
        uVar8 = FUN_008f3374(puVar11,puVar12);
        if ((uVar8 & 1) != 0) {
          uStack_78 = puVar12[1];
          local_80 = *puVar12;
          puVar12[1] = puVar12[3];
          *puVar12 = *puVar11;
          puVar12[3] = uStack_78;
          *puVar11 = local_80;
        }
      }
    }
    goto switchD_008f31b4_caseD_0;
  case 5:
    FUN_008f3704(puVar12,puVar12 + 2,puVar12 + 4,puVar12 + 6,puVar9);
    goto switchD_008f31b4_caseD_0;
  }
  if (lVar10 < 0x1f0) {
    FUN_008f35c8(puVar12,puVar12 + 2,puVar12 + 4);
    if (puVar12 + 6 == param_2) goto switchD_008f31b4_caseD_0;
    lVar10 = 0;
    puVar9 = puVar12 + 6;
    puVar11 = puVar12 + 4;
    goto LAB_008f3208;
  }
  uVar6 = uVar8;
  if ((long)uVar8 < 0) {
    uVar6 = uVar8 + 1;
  }
  puVar11 = puVar12 + (uVar6 & 0x1ffffffffffffffe);
  if (lVar10 < 0x3e71) {
    iVar5 = FUN_008f35c8(puVar12,puVar11,puVar9);
  }
  else {
    uVar6 = uVar8 + 3;
    if (-1 < (long)uVar8) {
      uVar6 = uVar8;
    }
    lVar10 = (uVar6 & 0x3ffffffffffffffc) * 4;
    iVar5 = FUN_008f3704(puVar12,(long)puVar12 + lVar10,puVar11,(long)puVar11 + lVar10,puVar9);
  }
  uVar8 = FUN_008f3374(puVar12,puVar11);
  puVar15 = param_2 + -4;
  puVar16 = puVar9;
  if ((uVar8 & 1) == 0) {
    do {
      puVar16 = puVar15;
      if (puVar12 == puVar16) {
        puVar11 = puVar12 + 2;
        uVar8 = FUN_008f3374(puVar12,puVar9);
        if ((uVar8 & 1) != 0) goto LAB_008f3100;
        if (puVar11 == puVar9) goto switchD_008f31b4_caseD_0;
        puVar11 = puVar12 + 4;
        goto LAB_008f30c8;
      }
      uVar8 = FUN_008f3374(puVar16,puVar11);
      puVar15 = puVar16 + -2;
    } while ((uVar8 & 1) == 0);
    uStack_78 = puVar12[1];
    local_80 = *puVar12;
    iVar5 = iVar5 + 1;
    uVar19 = *puVar16;
    puVar12[1] = puVar16[1];
    *puVar12 = uVar19;
    puVar16[1] = uStack_78;
    *puVar16 = local_80;
  }
  puVar15 = puVar12 + 2;
  puVar14 = puVar15;
  if (puVar15 < puVar16) {
    while( true ) {
      puVar15 = puVar14 + -2;
      do {
        puVar18 = puVar15;
        puVar15 = puVar18 + 2;
        uVar8 = FUN_008f3374(puVar15,puVar11);
      } while ((uVar8 & 1) != 0);
      puVar14 = puVar18 + 4;
      do {
        puVar17 = puVar16;
        puVar16 = puVar17 + -2;
        uVar8 = FUN_008f3374(puVar16,puVar11);
      } while ((uVar8 & 1) == 0);
      if (puVar16 < puVar15) break;
      uStack_78 = puVar18[3];
      local_80 = *puVar15;
      iVar5 = iVar5 + 1;
      puVar1 = puVar16;
      if (puVar11 != puVar15) {
        puVar1 = puVar11;
      }
      uVar19 = *puVar16;
      puVar18[3] = puVar17[-1];
      *puVar15 = uVar19;
      puVar17[-1] = uStack_78;
      *puVar16 = local_80;
      puVar11 = puVar1;
    }
    if (puVar15 != puVar11) goto LAB_008f303c;
  }
  else if (puVar15 != puVar11) {
LAB_008f303c:
    uVar8 = FUN_008f3374(puVar11,puVar15);
    if ((uVar8 & 1) != 0) {
      uStack_78 = puVar15[1];
      local_80 = *puVar15;
      iVar5 = iVar5 + 1;
      uVar19 = *puVar11;
      puVar15[1] = puVar11[1];
      *puVar15 = uVar19;
      puVar11[1] = uStack_78;
      *puVar11 = local_80;
    }
  }
  if (iVar5 != 0) goto LAB_008f3094;
  uVar8 = FUN_008f38c4(puVar12,puVar15);
  uVar6 = FUN_008f38c4(puVar15 + 2,param_2);
  if ((uVar6 & 1) == 0) goto code_r0x008f3090;
  bVar4 = (uVar8 & 1) == 0;
  if (bVar4) {
    param_2 = puVar15;
  }
  uVar7 = 1;
  if (bVar4) {
    uVar7 = 2;
  }
  param_1 = puVar12;
  if (uVar7 < 5) goto LAB_008f3168;
  goto switchD_008f31b4_caseD_0;
LAB_008f30c8:
  uVar8 = FUN_008f3374(puVar12,puVar11 + -2);
  if ((uVar8 & 1) != 0) goto LAB_008f30e8;
  puVar11 = puVar11 + 2;
  if (param_2 == puVar11) goto switchD_008f31b4_caseD_0;
  goto LAB_008f30c8;
LAB_008f30e8:
  uStack_78 = puVar11[-1];
  local_80 = puVar11[-2];
  uVar19 = *puVar9;
  puVar11[-1] = param_2[-1];
  puVar11[-2] = uVar19;
  param_2[-1] = uStack_78;
  *puVar9 = local_80;
LAB_008f3100:
  if (puVar11 == puVar9) goto switchD_008f31b4_caseD_0;
  while( true ) {
    param_1 = puVar11 + -2;
    do {
      puVar15 = param_1;
      param_1 = puVar15 + 2;
      uVar8 = FUN_008f3374(puVar12,param_1);
    } while ((uVar8 & 1) == 0);
    puVar11 = puVar15 + 4;
    do {
      puVar16 = puVar9;
      puVar9 = puVar16 + -2;
      uVar8 = FUN_008f3374(puVar12,puVar9);
    } while ((uVar8 & 1) != 0);
    if (puVar9 <= param_1) break;
    uStack_78 = puVar15[3];
    local_80 = *param_1;
    uVar19 = *puVar9;
    puVar15[3] = puVar16[-1];
    *param_1 = uVar19;
    puVar16[-1] = uStack_78;
    *puVar9 = local_80;
  }
  uVar7 = 4;
LAB_008f3168:
  if ((1 << uVar7 & 0x15U) == 0) goto switchD_008f31b4_caseD_0;
  goto LAB_008f2ecc;
code_r0x008f3090:
  param_1 = puVar15 + 2;
  if ((uVar8 & 1) == 0) {
LAB_008f3094:
    if ((long)param_2 - (long)puVar15 <= (long)puVar15 - (long)puVar12) {
      FUN_008f2e78(puVar15 + 2,param_2);
      param_2 = puVar15;
      param_1 = puVar12;
      goto LAB_008f2ecc;
    }
    FUN_008f2e78(puVar12,puVar15);
    param_1 = puVar15 + 2;
  }
  goto LAB_008f2ee8;
LAB_008f3208:
  do {
    puVar15 = puVar9;
    uVar8 = FUN_008f3374(puVar15,puVar11);
    if ((uVar8 & 1) != 0) {
      uStack_78 = puVar15[1];
      local_80 = *puVar15;
      lVar3 = lVar10;
      do {
        lVar13 = lVar3;
        *(undefined8 *)((long)puVar12 + lVar13 + 0x38) =
             *(undefined8 *)((long)puVar12 + lVar13 + 0x28);
        *(undefined8 *)((long)puVar12 + lVar13 + 0x30) =
             *(undefined8 *)((long)puVar12 + lVar13 + 0x20);
        puVar9 = puVar12;
        if (lVar13 == -0x20) goto LAB_008f3260;
        uVar8 = FUN_008f3374(&local_80,(long)puVar12 + lVar13 + 0x10);
        lVar3 = lVar13 + -0x10;
      } while ((uVar8 & 1) != 0);
      puVar9 = (undefined8 *)((long)puVar12 + lVar13 + 0x20);
LAB_008f3260:
      puVar9[1] = uStack_78;
      *puVar9 = local_80;
    }
    lVar10 = lVar10 + 0x10;
    puVar9 = puVar15 + 2;
    puVar11 = puVar15;
  } while (puVar15 + 2 != param_2);
switchD_008f31b4_caseD_0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

