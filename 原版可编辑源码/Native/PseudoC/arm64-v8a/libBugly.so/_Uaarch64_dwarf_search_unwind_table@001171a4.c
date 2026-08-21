
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Uaarch64_dwarf_search_unwind_table
               (undefined *param_1,ulong param_2,long param_3,ulong *param_4,int param_5,
               undefined8 param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  long local_58;
  int local_48;
  long local_30;
  int local_18;
  undefined4 local_14;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_3 + 0x28) == 2) {
    uVar15 = *(ulong *)(param_3 + 0x40);
    local_30 = *(long *)(param_3 + 0x48);
    local_58 = 0;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x48);
    uVar15 = *(ulong *)(lVar6 + 0x28);
    local_30 = *(long *)(lVar6 + 0x20);
    local_58 = *(long *)(lVar6 + 0x10);
    param_1 = _Uaarch64_local_addr_space;
  }
  uVar7 = _Uaarch64_get_accessors(param_1);
  lVar6 = *(long *)(param_3 + 0x38);
  local_48 = (int)param_2;
  if (param_1 == _Uaarch64_local_addr_space) {
    if ((uVar15 & 0x1fffffffffffffff) != 0) {
      uVar16 = 0;
      uVar15 = uVar15 & 0x1fffffffffffffff;
      do {
        while( true ) {
          uVar12 = uVar16 + uVar15 >> 1;
          log2Console(3,"Bugly-libunwind","e->start_ip_offset = %lx\n",
                      (long)*(int *)(local_30 + uVar12 * 8));
          if (*(int *)(local_30 + uVar12 * 8) <= local_48 - (int)lVar6) break;
          uVar15 = uVar12;
          if (uVar12 <= uVar16) goto LAB_00117688;
        }
        uVar16 = uVar12 + 1;
      } while (uVar16 < uVar15);
LAB_00117688:
      if (uVar15 != 0) {
        lVar8 = uVar15 * 8 + -8;
        piVar14 = (int *)(local_30 + lVar8);
        if (piVar14 != (int *)0x0) {
          iVar9 = *(int *)(local_30 + lVar8);
          goto LAB_001176ac;
        }
      }
    }
  }
  else {
    lVar8 = _Uaarch64_get_accessors(param_1);
    if ((uVar15 & 0x1fffffffffffffff) != 0) {
      uVar16 = 0;
      uVar15 = uVar15 & 0x1fffffffffffffff;
      do {
        while( true ) {
          uVar13 = uVar15 + uVar16 >> 1;
          uVar12 = local_30 + uVar13 * 8;
          iVar5 = (**(code **)(lVar8 + 0x18))
                            (param_1,uVar12 & 0xfffffffffffffff8,&local_10,0,param_6);
          uVar4 = local_10;
          if (iVar5 < 0) goto LAB_001175a0;
          uVar11 = uVar12 + 1 & 0xfffffffffffffff8;
          iVar5 = (**(code **)(lVar8 + 0x18))(param_1,uVar11,&local_10,0,param_6);
          uVar1 = (undefined1)
                  (local_10 >> ((ulong)(uint)(((int)(uVar12 + 1) - (int)uVar11) * 8) & 0x3f));
          if (iVar5 < 0) goto LAB_001175a0;
          uVar2 = (undefined1)
                  (uVar4 >> ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) &
                            0x3f));
          if (*(int *)(param_1 + 0x40) == 0) {
            uVar3 = CONCAT11(uVar1,uVar2);
          }
          else {
            uVar3 = CONCAT11(uVar2,uVar1);
          }
          uVar11 = uVar12 + 2 & 0xfffffffffffffff8;
          iVar5 = (**(code **)(lVar8 + 0x18))(param_1,uVar11,&local_10,0,param_6);
          uVar4 = local_10;
          if (iVar5 < 0) goto LAB_001175a0;
          uVar10 = uVar12 + 3 & 0xfffffffffffffff8;
          iVar5 = (**(code **)(lVar8 + 0x18))(param_1,uVar10,&local_10,0,param_6);
          uVar1 = (undefined1)
                  (local_10 >> ((ulong)(uint)(((int)(uVar12 + 3) - (int)uVar10) * 8) & 0x3f));
          if (iVar5 < 0) goto LAB_001175a0;
          uVar2 = (undefined1)
                  (uVar4 >> ((ulong)(uint)(((int)(uVar12 + 2) - (int)uVar11) * 8) & 0x3f));
          if (*(int *)(param_1 + 0x40) == 0) {
            iVar9 = CONCAT22(CONCAT11(uVar1,uVar2),uVar3);
          }
          else {
            iVar9 = CONCAT22(uVar3,CONCAT11(uVar2,uVar1));
          }
          if (local_48 - (int)lVar6 < iVar9) break;
          uVar16 = uVar13 + 1;
          uVar13 = uVar15;
          if (uVar15 <= uVar16) goto LAB_001173d8;
        }
        uVar15 = uVar13;
      } while (uVar16 < uVar13);
LAB_001173d8:
      if (uVar13 != 0) {
        local_30 = local_30 + uVar13 * 8;
        uVar16 = local_30 - 8U & 0xfffffffffffffff8;
        iVar5 = (**(code **)(lVar8 + 0x18))(param_1,uVar16,&local_10,0,param_6);
        uVar15 = local_10;
        if (iVar5 < 0) goto LAB_001175a0;
        uVar12 = local_30 - 7U & 0xfffffffffffffff8;
        iVar5 = (**(code **)(lVar8 + 0x18))(param_1,uVar12,&local_10,0,param_6);
        uVar1 = (undefined1)
                (local_10 >> ((ulong)(uint)(((int)(local_30 - 7U) - (int)uVar12) * 8) & 0x3f));
        if (iVar5 < 0) goto LAB_001175a0;
        uVar2 = (undefined1)
                (uVar15 >> ((ulong)(uint)(((int)(local_30 - 8U) - (int)uVar16) * 8) & 0x3f));
        if (*(int *)(param_1 + 0x40) == 0) {
          uVar3 = CONCAT11(uVar1,uVar2);
        }
        else {
          uVar3 = CONCAT11(uVar2,uVar1);
        }
        uVar16 = local_30 - 6U & 0xfffffffffffffff8;
        iVar5 = (**(code **)(lVar8 + 0x18))(param_1,uVar16,&local_10,0,param_6);
        uVar15 = local_10;
        if (iVar5 < 0) goto LAB_001175a0;
        uVar12 = local_30 - 5U & 0xfffffffffffffff8;
        iVar5 = (**(code **)(lVar8 + 0x18))(param_1,uVar12,&local_10,0,param_6);
        uVar1 = (undefined1)
                (local_10 >> ((ulong)(uint)(((int)(local_30 - 5U) - (int)uVar12) * 8) & 0x3f));
        if (iVar5 < 0) goto LAB_001175a0;
        uVar2 = (undefined1)
                (uVar15 >> ((ulong)(uint)(((int)(local_30 - 6U) - (int)uVar16) * 8) & 0x3f));
        if (*(int *)(param_1 + 0x40) == 0) {
          iVar9 = CONCAT22(CONCAT11(uVar1,uVar2),uVar3);
        }
        else {
          iVar9 = CONCAT22(uVar3,CONCAT11(uVar2,uVar1));
        }
        uVar16 = local_30 - 4U & 0xfffffffffffffff8;
        local_18 = iVar9;
        iVar5 = (**(code **)(lVar8 + 0x18))(param_1,uVar16,&local_10,0,param_6);
        uVar15 = local_10;
        if (iVar5 < 0) goto LAB_001175a0;
        uVar12 = local_30 - 3U & 0xfffffffffffffff8;
        iVar5 = (**(code **)(lVar8 + 0x18))(param_1,uVar12,&local_10,0,param_6);
        uVar1 = (undefined1)
                (local_10 >> ((ulong)(uint)(((int)(local_30 - 3U) - (int)uVar12) * 8) & 0x3f));
        if (iVar5 < 0) goto LAB_001175a0;
        uVar2 = (undefined1)
                (uVar15 >> ((ulong)(uint)(((int)(local_30 - 4U) - (int)uVar16) * 8) & 0x3f));
        if (*(int *)(param_1 + 0x40) == 0) {
          uVar3 = CONCAT11(uVar1,uVar2);
        }
        else {
          uVar3 = CONCAT11(uVar2,uVar1);
        }
        uVar16 = local_30 - 2U & 0xfffffffffffffff8;
        iVar5 = (**(code **)(lVar8 + 0x18))(param_1,uVar16,&local_10,0,param_6);
        uVar15 = local_10;
        if (iVar5 < 0) goto LAB_001175a0;
        uVar12 = local_30 - 1U & 0xfffffffffffffff8;
        iVar5 = (**(code **)(lVar8 + 0x18))(param_1,uVar12,&local_10,0,param_6);
        uVar1 = (undefined1)
                (local_10 >> ((ulong)(uint)(((int)(local_30 - 1U) - (int)uVar12) * 8) & 0x3f));
        if (iVar5 < 0) goto LAB_001175a0;
        uVar2 = (undefined1)
                (uVar15 >> ((ulong)(uint)(((int)(local_30 - 2U) - (int)uVar16) * 8) & 0x3f));
        if (*(int *)(param_1 + 0x40) == 0) {
          local_14 = CONCAT22(CONCAT11(uVar1,uVar2),uVar3);
        }
        else {
          local_14 = CONCAT22(uVar3,CONCAT11(uVar2,uVar1));
        }
        piVar14 = &local_18;
LAB_001176ac:
        log2Console(3,"Bugly-libunwind","ip=0x%lx, start_ip=0x%lx\n",param_2,(long)iVar9);
        lVar8 = local_58;
        if (local_58 == 0) {
          lVar8 = lVar6;
        }
        local_10 = lVar8 + piVar14[1];
        log2Console(3,"Bugly-libunwind",
                    "e->fde_offset = %lx, segbase = %lx, debug_frame_base = %lx, fde_addr = %lx\n",
                    (long)piVar14[1],lVar6,local_58,local_10);
        iVar5 = FUN_0011dd90(param_1,uVar7,&local_10,param_4,param_5,local_58,param_6);
        if (-1 < iVar5) {
          if (*(int *)(param_3 + 0x28) == 1) {
            uVar15 = lVar6 + *param_4;
            param_4[5] = 0x20;
            *param_4 = uVar15;
            param_4[1] = param_4[1] + lVar6;
          }
          else {
            uVar15 = *param_4;
          }
          if ((param_2 < uVar15) || (iVar5 = 0, param_4[1] <= param_2)) {
            if ((param_5 == 0) || (param_4[7] == 0)) {
              iVar5 = -10;
            }
            else {
              iVar5 = -10;
              if ((int)param_4[6] == 1) {
                FUN_0011b9a8(&DAT_00176398);
                param_4[7] = 0;
              }
            }
          }
        }
        goto LAB_001175a0;
      }
    }
  }
  iVar5 = -10;
  log2Console(3,"Bugly-libunwind","IP %lx inside range %lx-%lx, but no explicit unwind info found\n"
              ,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
LAB_001175a0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5);
  }
  return;
}

