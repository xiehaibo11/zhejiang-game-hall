
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00117b3c(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  uVar10 = param_1[1];
  uVar3 = param_1[3];
  local_8 = ___stack_chk_guard;
  lVar7 = param_1[2];
  uVar11 = *param_1;
  lVar4 = _Uaarch64_get_accessors(uVar10);
  if ((int)param_2[0xc3] == 3) {
    uVar13 = param_2[0xc4];
    if (uVar13 == 0x1f) {
      uVar6 = 0x1f;
      if ((int)param_2[0x3f] != 1) goto LAB_00117c5c;
      local_28 = param_1[2];
    }
    else {
      uVar6 = (undefined4)uVar13;
      if (0x5f < uVar13) {
        uVar6 = 0;
      }
LAB_00117c5c:
      uVar5 = _Uaarch64_get_reg(param_1,uVar6,&local_28);
      if ((int)uVar5 < 0) goto LAB_00117c14;
    }
    local_28 = local_28 + param_2[0xc6];
LAB_00117c7c:
    puVar8 = param_1 + 0xb;
    do {
      puVar9 = param_2 + 2;
      switch((int)param_2[1]) {
      case 0:
        *puVar8 = 0;
        puVar8[1] = 0;
        break;
      case 2:
        uVar13 = *puVar9;
        puVar8[1] = 0;
        *puVar8 = uVar13 + local_28;
        break;
      case 3:
        uVar13 = *puVar9;
LAB_00117cd0:
        if (0x5f < uVar13) {
          uVar13 = 0;
        }
        puVar8[1] = 2;
        *puVar8 = uVar13;
        break;
      case 4:
        local_18 = *puVar9;
        uVar13 = 0;
        uVar14 = 0;
        do {
          uVar12 = local_18 & 0xfffffffffffffff8;
          iVar2 = (int)local_18;
          local_18 = local_18 + 1;
          uVar5 = (**(code **)(lVar4 + 0x18))(uVar10,uVar12,&local_10,0,uVar11);
          uVar12 = local_10 >> ((ulong)(uint)((iVar2 - (int)uVar12) * 8) & 0x3f);
          if ((int)uVar5 < 0) goto LAB_00117c14;
          uVar1 = uVar13 & 0x3f;
          uVar13 = uVar13 + 7;
          uVar14 = uVar14 | (uVar12 & 0x7f) << uVar1;
        } while (((uint)uVar12 >> 7 & 1) != 0);
        uVar5 = FUN_0011c63c(param_1,&local_18,uVar14,&local_10,&local_2c);
        if ((int)uVar5 < 0) goto LAB_00117c14;
        uVar13 = local_10;
        if (local_2c != 0) goto LAB_00117cd0;
        *puVar8 = local_10;
        puVar8[1] = 0;
      }
      puVar8 = puVar8 + 2;
      param_2 = puVar9;
    } while (puVar8 != param_1 + 0xcd);
    param_1[2] = local_28;
    lVar4 = param_1[(param_1[5] + 5) * 2 + 1];
    if (param_1[(param_1[5] + 5) * 2 + 2] == 0 && lVar4 == 0) {
      param_1[3] = 0;
      uVar5 = 0;
      if (uVar3 != 0) goto LAB_00117c14;
      lVar4 = param_1[2];
    }
    else {
      if (((uint)param_1[(param_1[5] + 5) * 2 + 2] >> 1 & 1) == 0) {
        uVar5 = (**(code **)(param_1[1] + 0x18))(param_1[1],lVar4,&local_10,0,*param_1);
      }
      else {
        uVar5 = (**(code **)(param_1[1] + 0x20))(param_1[1],lVar4,&local_10,0,*param_1);
      }
      if ((int)uVar5 < 0) goto LAB_00117c14;
      param_1[3] = local_10;
      uVar5 = 0;
      if (uVar3 != local_10) goto LAB_00117c14;
      lVar4 = param_1[2];
    }
    uVar5 = 0;
    if (lVar4 != lVar7) goto LAB_00117c14;
    log2Console(3,"Bugly-libunwind","%s: ip and cfa unchanged; stopping here (ip=0x%lx)\n",
                "apply_reg_state",uVar3);
  }
  else {
    local_20 = param_2[0xc4];
    uVar13 = 0;
    uVar14 = 0;
    do {
      uVar12 = local_20 & 0xfffffffffffffff8;
      iVar2 = (int)local_20;
      local_20 = local_20 + 1;
      uVar5 = (**(code **)(lVar4 + 0x18))(uVar10,uVar12,&local_10,0,uVar11);
      uVar12 = local_10 >> ((ulong)(uint)((iVar2 - (int)uVar12) * 8) & 0x3f);
      if ((int)uVar5 < 0) goto LAB_00117c14;
      uVar1 = uVar13 & 0x3f;
      uVar13 = uVar13 + 7;
      uVar14 = uVar14 | (uVar12 & 0x7f) << uVar1;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    uVar5 = FUN_0011c63c(param_1,&local_20,uVar14,&local_10,&local_18);
    if ((int)uVar5 < 0) goto LAB_00117c14;
    if ((int)local_18 == 0) {
      local_28 = local_10;
      goto LAB_00117c7c;
    }
  }
  uVar5 = 0xfffffff9;
LAB_00117c14:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

