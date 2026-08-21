
/* WARNING: Removing unreachable block (ram,0x0011b720) */

void FUN_0011b330(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong extraout_x8;
  ulong uVar10;
  ulong extraout_x8_00;
  ulong uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong local_88;
  int local_7c;
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar1 = param_1[1];
  lVar2 = param_1[2];
  uVar14 = *param_1;
  uVar9 = param_1[3];
  lVar6 = _Uaarch64_get_accessors(uVar1);
  uVar13 = *(ulong *)(param_2 + 0x620);
  if (*(int *)(param_2 + 0x618) == 3) {
    if ((uVar13 == 0x1f) && (*(int *)(param_2 + 0x1f8) == 1)) {
      local_88 = param_1[2];
    }
    else {
      uVar12 = (undefined4)uVar13;
      if (0x5f < uVar13) {
        uVar12 = 0;
      }
      uVar8 = _Uaarch64_get_reg(param_1,uVar12,&local_88);
      if ((int)uVar8 < 0) goto LAB_0011b6e0;
    }
    uVar16 = local_88 + *(long *)(param_2 + 0x630);
LAB_0011b494:
    uVar13 = 0;
    local_88 = uVar16;
    do {
      switch(*(undefined4 *)(param_2 + uVar13 * 0x10 + 8)) {
      case 0:
        param_1[uVar13 * 2 + 0xb] = 0;
        param_1[uVar13 * 2 + 0xc] = 0;
        break;
      case 2:
        param_1[uVar13 * 2 + 0xb] = *(long *)(param_2 + uVar13 * 0x10 + 0x10) + local_88;
        param_1[uVar13 * 2 + 0xc] = 0;
        break;
      case 3:
        uVar17 = *(ulong *)(param_2 + uVar13 * 0x10 + 0x10);
        if (0x5f < uVar17) {
          uVar17 = 0;
        }
        param_1[uVar13 * 2 + 0xb] = uVar17;
        param_1[uVar13 * 2 + 0xc] = 2;
        break;
      case 4:
        uVar15 = *(ulong *)(param_2 + uVar13 * 0x10 + 0x10);
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = uVar15 << 3;
        do {
          local_78 = uVar15 + 1;
          uVar8 = (**(code **)(lVar6 + 0x18))(uVar1,uVar15 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if ((int)uVar8 < 0) goto LAB_0011b618;
          uVar11 = local_70 >> (uVar18 & 0x3f);
          uVar10 = uVar17 & 0x3f;
          uVar17 = uVar17 + 7;
          uVar16 = (uVar11 & 0x7f) << uVar10 | uVar16;
          uVar18 = uVar18 + 8;
          uVar15 = uVar15 + 1;
        } while ((char)uVar11 < '\0');
        uVar8 = FUN_0011edd8(param_1,&local_78,uVar16,&local_70,&local_7c);
        if (-1 < (int)uVar8) {
          uVar8 = 0;
          if (local_7c == 0) {
            param_1[uVar13 * 2 + 0xb] = local_70;
            param_1[uVar13 * 2 + 0xc] = 0;
          }
          else {
            uVar17 = local_70;
            if (0x5f < local_70) {
              uVar17 = 0;
            }
            param_1[uVar13 * 2 + 0xb] = uVar17;
            param_1[uVar13 * 2 + 0xc] = 2;
          }
        }
LAB_0011b618:
        if ((int)uVar8 < 0) goto LAB_0011b6e0;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < 0x61);
    param_1[2] = local_88;
    lVar6 = param_1[param_1[5] * 2 + 0xb];
    if (param_1[param_1[5] * 2 + 0xc] == 0 && lVar6 == 0) {
      local_70 = 0;
    }
    else {
      lVar7 = param_1[1];
      if (((uint)param_1[param_1[5] * 2 + 0xc] >> 1 & 1) == 0) {
        uVar8 = (**(code **)(lVar7 + 0x18))(lVar7,lVar6,&local_70,0,*param_1);
        iVar5 = (int)uVar8;
      }
      else {
        uVar8 = (**(code **)(lVar7 + 0x20))(lVar7,lVar6,&local_70,0,*param_1);
        iVar5 = (int)uVar8;
      }
      if (iVar5 < 0) goto LAB_0011b6e0;
    }
    param_1[3] = local_70;
    if ((local_70 != uVar9) || (param_1[2] != lVar2)) {
      uVar8 = 0;
      goto LAB_0011b6e0;
    }
    log2Console(3,"Bugly-libunwind","%s: ip and cfa unchanged; stopping here (ip=0x%lx)\n",
                "apply_reg_state");
  }
  else {
    uVar15 = 0;
    uVar17 = 0;
    uVar18 = uVar13 << 3;
    do {
      local_78 = uVar13 + 1;
      uVar8 = (**(code **)(lVar6 + 0x18))(uVar1,uVar13 & 0xfffffffffffffff8,&local_70,0,uVar14);
      uVar16 = extraout_x8;
      if ((int)uVar8 < 0) goto LAB_0011b4ac;
      uVar10 = local_70 >> (uVar18 & 0x3f);
      uVar16 = uVar17 & 0x3f;
      uVar17 = uVar17 + 7;
      uVar15 = (uVar10 & 0x7f) << uVar16 | uVar15;
      uVar18 = uVar18 + 8;
      uVar13 = uVar13 + 1;
    } while ((char)uVar10 < '\0');
    uVar8 = FUN_0011edd8(param_1,&local_78,uVar15,&local_70,&local_88);
    uVar16 = extraout_x8_00;
    if ((int)uVar8 < 0) {
LAB_0011b4ac:
      bVar4 = false;
      if ((int)uVar8 < 0) goto LAB_0011b6e0;
    }
    else {
      uVar16 = local_70;
      if ((int)local_88 == 0) {
        bVar4 = false;
      }
      else {
        if (0x5f < local_70) {
          uVar16 = 0;
        }
        bVar4 = true;
      }
    }
    if (!bVar4) goto LAB_0011b494;
  }
  uVar8 = 0xfffffff9;
LAB_0011b6e0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

