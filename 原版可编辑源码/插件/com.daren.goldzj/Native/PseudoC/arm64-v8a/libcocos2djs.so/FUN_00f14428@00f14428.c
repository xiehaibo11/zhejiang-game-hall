
void FUN_00f14428(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_70;
  undefined8 uStack_68;
  
LAB_00f14458:
  puVar8 = param_2 + -2;
  puVar6 = param_1;
LAB_00f14464:
  param_1 = puVar6;
  lVar7 = (long)param_2 - (long)param_1;
  uVar5 = lVar7 >> 4;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_00f14834_caseD_0;
  case 2:
    uVar5 = (*(code *)*param_3)(puVar8,param_1);
    if ((uVar5 & 1) == 0) {
      return;
    }
    break;
  case 3:
    puVar6 = param_1 + 2;
    uVar5 = (*(code *)*param_3)(puVar6,param_1);
    uVar4 = (*(code *)*param_3)(puVar8,puVar6);
    if ((uVar5 & 1) == 0) {
      if ((uVar4 & 1) == 0) {
        return;
      }
      uStack_68 = param_1[3];
      local_70 = *puVar6;
      uVar15 = *puVar8;
      param_1[3] = param_2[-1];
      *puVar6 = uVar15;
      param_2[-1] = uStack_68;
      *puVar8 = local_70;
      goto LAB_00f14bc8;
    }
    if ((uVar4 & 1) == 0) {
      uStack_68 = param_1[1];
      local_70 = *param_1;
      param_1[1] = param_1[3];
      *param_1 = *puVar6;
      param_1[3] = uStack_68;
      *puVar6 = local_70;
      uVar5 = (*(code *)*param_3)(puVar8,puVar6);
      if ((uVar5 & 1) == 0) {
        return;
      }
      uStack_68 = param_1[3];
      local_70 = *puVar6;
      uVar15 = *puVar8;
      param_1[3] = param_2[-1];
      *puVar6 = uVar15;
      goto LAB_00f149f4;
    }
    break;
  case 4:
    puVar6 = param_1 + 2;
    puVar13 = param_1 + 4;
    uVar5 = (*(code *)*param_3)(puVar6,param_1);
    uVar4 = (*(code *)*param_3)(puVar13,puVar6);
    if ((uVar5 & 1) == 0) {
      if ((uVar4 & 1) != 0) {
        uStack_68 = param_1[3];
        local_70 = *puVar6;
        param_1[3] = param_1[5];
        *puVar6 = *puVar13;
        param_1[5] = uStack_68;
        *puVar13 = local_70;
        uVar5 = (*(code *)*param_3)(puVar6,param_1);
        if ((uVar5 & 1) != 0) {
          uStack_68 = param_1[1];
          local_70 = *param_1;
          param_1[1] = param_1[3];
          *param_1 = *puVar6;
          param_1[3] = uStack_68;
          *puVar6 = local_70;
        }
      }
    }
    else {
      if ((uVar4 & 1) == 0) {
        uStack_68 = param_1[1];
        local_70 = *param_1;
        param_1[1] = param_1[3];
        *param_1 = *puVar6;
        param_1[3] = uStack_68;
        *puVar6 = local_70;
        uVar5 = (*(code *)*param_3)(puVar13,puVar6);
        if ((uVar5 & 1) == 0) goto LAB_00f14b70;
        uStack_68 = param_1[3];
        local_70 = *puVar6;
        param_1[3] = param_1[5];
        *puVar6 = *puVar13;
      }
      else {
        uStack_68 = param_1[1];
        local_70 = *param_1;
        param_1[1] = param_1[5];
        *param_1 = *puVar13;
      }
      param_1[5] = uStack_68;
      *puVar13 = local_70;
    }
LAB_00f14b70:
    uVar5 = (*(code *)*param_3)(puVar8,puVar13);
    if ((uVar5 & 1) == 0) {
      return;
    }
    uStack_68 = param_1[5];
    local_70 = *puVar13;
    uVar15 = *puVar8;
    param_1[5] = param_2[-1];
    *puVar13 = uVar15;
    param_2[-1] = uStack_68;
    *puVar8 = local_70;
    uVar5 = (*(code *)*param_3)(puVar13,puVar6);
    if ((uVar5 & 1) == 0) {
      return;
    }
    uStack_68 = param_1[3];
    local_70 = *puVar6;
    param_1[3] = param_1[5];
    *puVar6 = *puVar13;
    param_1[5] = uStack_68;
    *puVar13 = local_70;
LAB_00f14bc8:
    puVar6 = param_1 + 2;
    uVar5 = (*(code *)*param_3)(puVar6,param_1);
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar16 = param_1[1];
    uVar15 = *param_1;
    param_1[1] = param_1[3];
    *param_1 = *puVar6;
    param_1[3] = uVar16;
    *puVar6 = uVar15;
    return;
  case 5:
    FUN_00f14c14(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar8,param_3);
    return;
  default:
    if (0x1ef < lVar7) {
      uVar4 = uVar5;
      if ((long)uVar5 < 0) {
        uVar4 = uVar5 + 1;
      }
      puVar6 = param_1 + (uVar4 & 0x1ffffffffffffffe);
      if (lVar7 < 0x3e71) {
        uVar5 = (*(code *)*param_3)(puVar6,param_1);
        uVar4 = (*(code *)*param_3)(puVar8,puVar6);
        if ((uVar5 & 1) == 0) {
          if ((uVar4 & 1) == 0) {
            iVar3 = 0;
          }
          else {
            uStack_68 = puVar6[1];
            local_70 = *puVar6;
            uVar15 = *puVar8;
            puVar6[1] = param_2[-1];
            *puVar6 = uVar15;
            param_2[-1] = uStack_68;
            *puVar8 = local_70;
            uVar5 = (*(code *)*param_3)(puVar6,param_1);
            if ((uVar5 & 1) == 0) goto LAB_00f14774;
            uStack_68 = param_1[1];
            local_70 = *param_1;
            uVar15 = *puVar6;
            param_1[1] = puVar6[1];
            *param_1 = uVar15;
            puVar6[1] = uStack_68;
            *puVar6 = local_70;
LAB_00f14764:
            iVar3 = 2;
          }
        }
        else if ((uVar4 & 1) == 0) {
          uStack_68 = param_1[1];
          local_70 = *param_1;
          uVar15 = *puVar6;
          param_1[1] = puVar6[1];
          *param_1 = uVar15;
          puVar6[1] = uStack_68;
          *puVar6 = local_70;
          uVar5 = (*(code *)*param_3)(puVar8,puVar6);
          if ((uVar5 & 1) != 0) {
            uStack_68 = puVar6[1];
            local_70 = *puVar6;
            uVar15 = *puVar8;
            puVar6[1] = param_2[-1];
            *puVar6 = uVar15;
            param_2[-1] = uStack_68;
            *puVar8 = local_70;
            goto LAB_00f14764;
          }
LAB_00f14774:
          iVar3 = 1;
        }
        else {
          uStack_68 = param_1[1];
          local_70 = *param_1;
          iVar3 = 1;
          uVar15 = *puVar8;
          param_1[1] = param_2[-1];
          *param_1 = uVar15;
          param_2[-1] = uStack_68;
          *puVar8 = local_70;
        }
      }
      else {
        uVar4 = uVar5 + 3;
        if (-1 < (long)uVar5) {
          uVar4 = uVar5;
        }
        lVar7 = (uVar4 & 0x3ffffffffffffffc) * 4;
        iVar3 = FUN_00f14c14(param_1,(long)param_1 + lVar7,puVar6,(long)puVar6 + lVar7,puVar8,
                             param_3);
      }
      uVar5 = (*(code *)*param_3)(param_1,puVar6);
      puVar13 = param_2 + -4;
      puVar9 = puVar8;
      if ((uVar5 & 1) == 0) goto LAB_00f1453c;
      goto LAB_00f1457c;
    }
    puVar6 = param_1 + 2;
    puVar8 = param_1 + 4;
    uVar5 = (*(code *)*param_3)(puVar6,param_1);
    uVar4 = (*(code *)*param_3)(puVar8,puVar6);
    if ((uVar5 & 1) == 0) {
      if ((uVar4 & 1) != 0) {
        uStack_68 = param_1[3];
        local_70 = *puVar6;
        param_1[3] = param_1[5];
        *puVar6 = *puVar8;
        param_1[5] = uStack_68;
        *puVar8 = local_70;
        uVar5 = (*(code *)*param_3)(puVar6,param_1);
        if ((uVar5 & 1) != 0) {
          uStack_68 = param_1[1];
          local_70 = *param_1;
          param_1[1] = param_1[3];
          *param_1 = *puVar6;
          param_1[3] = uStack_68;
          *puVar6 = local_70;
        }
      }
    }
    else {
      if ((uVar4 & 1) == 0) {
        uStack_68 = param_1[1];
        local_70 = *param_1;
        param_1[1] = param_1[3];
        *param_1 = *puVar6;
        param_1[3] = uStack_68;
        *puVar6 = local_70;
        uVar5 = (*(code *)*param_3)(puVar8,puVar6);
        if ((uVar5 & 1) == 0) goto LAB_00f14928;
        uStack_68 = param_1[3];
        local_70 = *puVar6;
        param_1[3] = param_1[5];
        *puVar6 = *puVar8;
      }
      else {
        uStack_68 = param_1[1];
        local_70 = *param_1;
        param_1[1] = param_1[5];
        *param_1 = *puVar8;
      }
      param_1[5] = uStack_68;
      *puVar8 = local_70;
    }
LAB_00f14928:
    if (param_1 + 6 == param_2) {
      return;
    }
    lVar7 = 0;
    puVar6 = param_1 + 6;
    goto LAB_00f14958;
  }
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uVar15 = *puVar8;
  param_1[1] = param_2[-1];
  *param_1 = uVar15;
LAB_00f149f4:
  param_2[-1] = uStack_68;
  *puVar8 = local_70;
  return;
LAB_00f14958:
  puVar13 = puVar6;
  uVar5 = (*(code *)*param_3)(puVar13,puVar8);
  if ((uVar5 & 1) != 0) {
    uStack_68 = puVar13[1];
    local_70 = *puVar13;
    lVar2 = lVar7;
    do {
      lVar11 = lVar2;
      *(undefined8 *)((long)param_1 + lVar11 + 0x38) =
           *(undefined8 *)((long)param_1 + lVar11 + 0x28);
      *(undefined8 *)((long)param_1 + lVar11 + 0x30) =
           *(undefined8 *)((long)param_1 + lVar11 + 0x20);
      puVar6 = param_1;
      if (lVar11 == -0x20) goto LAB_00f14940;
      uVar5 = (*(code *)*param_3)(&local_70,(long)param_1 + lVar11 + 0x10);
      lVar2 = lVar11 + -0x10;
    } while ((uVar5 & 1) != 0);
    puVar6 = (undefined8 *)((long)param_1 + lVar11 + 0x20);
LAB_00f14940:
    puVar6[1] = uStack_68;
    *puVar6 = local_70;
  }
  lVar7 = lVar7 + 0x10;
  puVar6 = puVar13 + 2;
  puVar8 = puVar13;
  if (puVar13 + 2 == param_2) {
switchD_00f14834_caseD_0:
    return;
  }
  goto LAB_00f14958;
LAB_00f1453c:
  while (puVar9 = puVar13, param_1 != puVar9) {
    uVar5 = (*(code *)*param_3)(puVar9,puVar6);
    puVar13 = puVar9 + -2;
    if ((uVar5 & 1) != 0) goto code_r0x00f1455c;
  }
  puVar13 = param_1 + 2;
  uVar5 = (*(code *)*param_3)(param_1,puVar8);
  if ((uVar5 & 1) == 0) {
    if (puVar13 == puVar8) {
      return;
    }
    puVar13 = param_1 + 4;
    while (uVar5 = (*(code *)*param_3)(param_1,puVar13 + -2), (uVar5 & 1) == 0) {
      puVar13 = puVar13 + 2;
      if (param_2 == puVar13) {
        return;
      }
    }
    uStack_68 = puVar13[-1];
    local_70 = puVar13[-2];
    uVar15 = *puVar8;
    puVar13[-1] = param_2[-1];
    puVar13[-2] = uVar15;
    param_2[-1] = uStack_68;
    *puVar8 = local_70;
  }
  puVar9 = puVar8;
  if (puVar13 == puVar8) {
    return;
  }
  while( true ) {
    puVar6 = puVar13 + -2;
    do {
      puVar12 = puVar6;
      puVar6 = puVar12 + 2;
      uVar5 = (*(code *)*param_3)(param_1,puVar6);
    } while ((uVar5 & 1) == 0);
    puVar13 = puVar12 + 4;
    do {
      puVar10 = puVar9;
      puVar9 = puVar10 + -2;
      uVar5 = (*(code *)*param_3)(param_1,puVar9);
    } while ((uVar5 & 1) != 0);
    if (puVar9 <= puVar6) break;
    uStack_68 = puVar12[3];
    local_70 = *puVar6;
    uVar15 = *puVar9;
    puVar12[3] = puVar10[-1];
    *puVar6 = uVar15;
    puVar10[-1] = uStack_68;
    *puVar9 = local_70;
  }
  goto LAB_00f14464;
code_r0x00f1455c:
  uStack_68 = param_1[1];
  local_70 = *param_1;
  iVar3 = iVar3 + 1;
  uVar15 = *puVar9;
  param_1[1] = puVar9[1];
  *param_1 = uVar15;
  puVar9[1] = uStack_68;
  *puVar9 = local_70;
LAB_00f1457c:
  puVar13 = param_1 + 2;
  puVar12 = puVar13;
  if (puVar13 < puVar9) {
    while( true ) {
      puVar13 = puVar12 + -2;
      do {
        puVar10 = puVar13;
        puVar13 = puVar10 + 2;
        uVar5 = (*(code *)*param_3)(puVar13,puVar6);
      } while ((uVar5 & 1) != 0);
      puVar12 = puVar10 + 4;
      do {
        puVar14 = puVar9;
        puVar9 = puVar14 + -2;
        uVar5 = (*(code *)*param_3)(puVar9,puVar6);
      } while ((uVar5 & 1) == 0);
      if (puVar9 < puVar13) break;
      uStack_68 = puVar10[3];
      local_70 = *puVar13;
      iVar3 = iVar3 + 1;
      puVar1 = puVar9;
      if (puVar6 != puVar13) {
        puVar1 = puVar6;
      }
      uVar15 = *puVar9;
      puVar10[3] = puVar14[-1];
      *puVar13 = uVar15;
      puVar14[-1] = uStack_68;
      *puVar9 = local_70;
      puVar6 = puVar1;
    }
  }
  if ((puVar13 != puVar6) && (uVar5 = (*(code *)*param_3)(puVar6,puVar13), (uVar5 & 1) != 0)) {
    uStack_68 = puVar13[1];
    local_70 = *puVar13;
    iVar3 = iVar3 + 1;
    uVar15 = *puVar6;
    puVar13[1] = puVar6[1];
    *puVar13 = uVar15;
    puVar6[1] = uStack_68;
    *puVar6 = local_70;
  }
  if (iVar3 == 0) {
    uVar5 = FUN_00f14ebc(param_1,puVar13,param_3);
    uVar4 = FUN_00f14ebc(puVar13 + 2,param_2,param_3);
    if ((uVar4 & 1) != 0) goto LAB_00f14814;
    puVar6 = puVar13 + 2;
    if ((uVar5 & 1) != 0) goto LAB_00f14464;
  }
  if ((long)param_2 - (long)puVar13 <= (long)puVar13 - (long)param_1) {
    FUN_00f14428(puVar13 + 2,param_2,param_3);
    param_2 = puVar13;
    goto LAB_00f14458;
  }
  FUN_00f14428(param_1,puVar13,param_3);
  puVar6 = puVar13 + 2;
  goto LAB_00f14464;
LAB_00f14814:
  param_2 = puVar13;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_00f14458;
}

