
void _Uaarch64_dwarf_search_unwind_table
               (undefined *param_1,ulong param_2,long param_3,ulong *param_4,int param_5,
               undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long local_a0;
  int local_80;
  int local_7c;
  long local_78;
  int local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)(param_3 + 0x48);
  if (*(int *)(param_3 + 0x28) == 2) {
    local_a0 = 0;
    puVar6 = (ulong *)(param_3 + 0x40);
  }
  else {
    lVar13 = *plVar5;
    local_a0 = *(long *)(lVar13 + 0x10);
    plVar5 = (long *)(lVar13 + 0x20);
    puVar6 = (ulong *)(lVar13 + 0x28);
    param_1 = _Uaarch64_local_addr_space;
  }
  lVar13 = *plVar5;
  uVar9 = *puVar6;
  uVar2 = _Uaarch64_get_accessors(param_1);
  lVar7 = *(long *)(param_3 + 0x38);
  if (param_1 == _Uaarch64_local_addr_space) {
    uVar9 = uVar9 & 0x1fffffffffffffff;
    if (uVar9 != 0) {
      uVar12 = 0;
      do {
        uVar10 = uVar12 + uVar9 >> 1;
        log2Console(3,"Bugly-libunwind","e->start_ip_offset = %lx\n",
                    (long)*(int *)(lVar13 + uVar10 * 8));
        if (*(int *)(lVar13 + uVar10 * 8) <= (int)param_2 - (int)lVar7) {
          uVar12 = uVar10 + 1;
          uVar10 = uVar9;
        }
        uVar9 = uVar10;
      } while (uVar12 < uVar10);
      if (uVar10 != 0) {
        lVar13 = lVar13 + uVar10 * 8;
        piVar11 = (int *)(lVar13 + -4);
        iVar8 = *(int *)(lVar13 + -8);
        goto LAB_0011a3b8;
      }
    }
LAB_0011a484:
    log2Console(3,"Bugly-libunwind",
                "IP %lx inside range %lx-%lx, but no explicit unwind info found\n",param_2,
                *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  }
  else {
    uVar9 = uVar9 & 0x1fffffffffffffff;
    uVar3 = _Uaarch64_get_accessors(param_1);
    local_78 = 0;
    if (uVar9 == 0) goto LAB_0011a484;
    uVar12 = 0;
    do {
      uVar10 = uVar12 + uVar9 >> 1;
      local_78 = lVar13 + uVar10 * 8;
      uVar4 = FUN_0011991c(param_1,uVar3,&local_78,&local_80,param_6);
      if ((int)uVar4 < 0) goto LAB_0011a4a8;
      if (local_80 <= (int)param_2 - (int)lVar7) {
        uVar12 = uVar10 + 1;
        uVar10 = uVar9;
      }
      uVar9 = uVar10;
    } while (uVar12 < uVar10);
    if (uVar10 == 0) goto LAB_0011a484;
    local_78 = lVar13 + uVar10 * 8 + -8;
    uVar4 = FUN_0011991c(param_1,uVar3,&local_78,&local_6c,param_6);
    iVar8 = local_6c;
    if ((int)uVar4 < 0) goto LAB_0011a4a8;
    local_80 = local_6c;
    uVar4 = FUN_0011991c(param_1,uVar3,&local_78,&local_6c,param_6);
    if ((int)uVar4 < 0) goto LAB_0011a4a8;
    piVar11 = (int *)((ulong)&local_80 | 4);
    local_7c = local_6c;
LAB_0011a3b8:
    log2Console(3,"Bugly-libunwind","ip=0x%lx, start_ip=0x%lx\n",param_2,(long)iVar8);
    local_78 = lVar7;
    if (local_a0 != 0) {
      local_78 = local_a0;
    }
    local_78 = local_78 + *piVar11;
    log2Console(3,"Bugly-libunwind",
                "e->fde_offset = %lx, segbase = %lx, debug_frame_base = %lx, fde_addr = %lx\n",
                (long)*piVar11,lVar7,local_a0);
    uVar4 = FUN_00120b5c(param_1,uVar2,&local_78,param_4,param_5,local_a0,param_6);
    if ((int)uVar4 < 0) goto LAB_0011a4a8;
    uVar9 = *param_4;
    if (*(int *)(param_3 + 0x28) == 1) {
      param_4[5] = 0x20;
      uVar9 = uVar9 + lVar7;
      *param_4 = uVar9;
      param_4[1] = param_4[1] + lVar7;
    }
    if ((uVar9 <= param_2) && (param_2 < param_4[1])) {
      uVar4 = 0;
      goto LAB_0011a4a8;
    }
    if (((param_5 != 0) && (param_4[7] != 0)) && ((int)param_4[6] == 1)) {
      FUN_0011e848(&DAT_00177448);
      param_4[7] = 0;
    }
  }
  uVar4 = 0xfffffff6;
LAB_0011a4a8:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

