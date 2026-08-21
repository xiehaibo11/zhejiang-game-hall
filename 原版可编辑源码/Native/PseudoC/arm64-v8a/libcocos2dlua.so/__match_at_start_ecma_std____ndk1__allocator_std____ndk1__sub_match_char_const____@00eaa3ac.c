
/* bool std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__match_at_start_ecma<std::__ndk1::allocator<std::__ndk1::sub_match<char const*> > >(char
   const*, char const*, std::__ndk1::match_results<char const*,
   std::__ndk1::allocator<std::__ndk1::sub_match<char const*> > >&,
   std::__ndk1::regex_constants::match_flag_type, bool) const */

bool __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__match_at_start_ecma<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,ulong param_1,ulong param_2,
          undefined8 *param_3,uint param_5,byte param_6)

{
  long lVar1;
  ulong *puVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  bool bVar13;
  ulong uVar14;
  ulong *puVar15;
  uint uVar16;
  ulong *local_108;
  ulong *local_100;
  ulong *puStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong local_d8;
  void *pvStack_d0;
  void *local_c8;
  ulong uStack_c0;
  void *local_b8;
  void *pvStack_b0;
  ulong local_a8;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined4 uStack_98;
  undefined1 uStack_94;
  ulong local_88;
  ulong uStack_80;
  undefined1 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_100 = (ulong *)0x0;
  puStack_f8 = (ulong *)0x0;
  local_108 = (ulong *)0x0;
  uVar14 = *(ulong *)(this + 0x28);
  bVar13 = false;
  if (uVar14 == 0) {
LAB_00eaa7d4:
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return bVar13;
    }
  }
  else {
    local_78 = 0;
    local_f0 = local_f0 & 0xffffffff00000000;
    uStack_e0 = 0;
    uStack_e8 = 0;
    pvStack_d0 = (void *)0x0;
    local_d8 = 0;
    uStack_c0 = 0;
    local_c8 = (void *)0x0;
    pvStack_b0 = (void *)0x0;
    local_b8 = (void *)0x0;
    uStack_a0 = 0;
    uStack_9b = 0;
    local_a8 = 0;
    uStack_98 = 0;
    local_88 = param_2;
    uStack_80 = param_2;
    vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
    __push_back_slow_path<std::__ndk1::__state<char>>
              ((vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                *)&local_108,(__state *)&local_f0);
    if (local_b8 != (void *)0x0) {
      pvStack_b0 = local_b8;
      operator_delete(local_b8);
    }
    if (pvStack_d0 != (void *)0x0) {
      local_c8 = pvStack_d0;
      operator_delete(pvStack_d0);
    }
    *(undefined4 *)(local_100 + -0xc) = 0;
    local_100[-0xb] = param_1;
    local_100[-10] = param_1;
    local_100[-9] = param_2;
    lVar5 = *(long *)(local_100 + -8);
    uVar7 = (ulong)*(uint *)(this + 0x1c);
    lVar8 = (long)(local_100[-7] - lVar5) >> 3;
    uVar9 = lVar8 * -0x5555555555555555;
    if (uVar9 < uVar7) {
      vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
      ::__append((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                  *)(local_100 + -8),uVar7 + lVar8 * 0x5555555555555555,(sub_match *)&local_88);
    }
    else if (uVar9 - uVar7 != 0) {
      local_100[-7] = lVar5 + uVar7 * 0x18;
    }
    lVar5 = *(long *)(local_100 + -5);
    uVar7 = (ulong)*(uint *)(this + 0x20);
    uVar9 = (long)(local_100[-4] - lVar5) >> 4;
    if (uVar9 < uVar7) {
      vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
      ::__append((vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
                  *)(local_100 + -5),uVar7 - uVar9);
    }
    else if (uVar9 != uVar7) {
      local_100[-4] = lVar5 + uVar7 * 0x10;
    }
    local_100[-2] = uVar14;
    *(uint *)(local_100 + -1) = param_5;
    uVar16 = 1;
    *(byte *)((long)local_100 + -4) = param_6 & 1;
    do {
      puVar12 = local_100;
      puVar6 = local_100 + -2;
      plVar3 = (long *)*puVar6;
      puVar15 = local_100 + -0xc;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,puVar15);
      }
      puVar2 = local_100;
      switch((int)*puVar15) {
      case -1000:
        if (((param_5 >> 5 & 1) != 0) && (puVar12[-10] == param_1))
        goto switchD_00eaa59c_caseD_fffffc1f;
        if ((param_5 >> 0xc & 1) == 0) {
          uVar14 = puVar12[-10];
        }
        else {
          uVar14 = puVar12[-10];
          if (uVar14 != param_2) goto switchD_00eaa59c_caseD_fffffc1f;
        }
        puVar6 = (ulong *)*param_3;
        *puVar6 = param_1;
        puVar6[1] = uVar14;
        *(undefined1 *)(puVar6 + 2) = 1;
        uVar14 = puVar12[-8];
        lVar5 = puVar12[-7] - uVar14;
        if (lVar5 != 0) {
          uVar11 = (lVar5 >> 3) * -0x5555555555555555;
          uVar7 = 1;
          uVar9 = 0;
          do {
            uVar10 = uVar7;
            puVar12 = (ulong *)(uVar14 + uVar9 * 0x18);
            uVar7 = *puVar12;
            puVar15 = puVar6 + uVar10 * 3;
            puVar15[1] = puVar12[1];
            *puVar15 = uVar7;
            *(char *)(puVar15 + 2) = (char)puVar12[2];
            uVar7 = (ulong)((int)uVar10 + 1);
            uVar9 = uVar10;
          } while (uVar10 <= uVar11 && uVar11 - uVar10 != 0);
        }
        bVar13 = true;
        puVar12 = local_108;
joined_r0x00eaa6f8:
        local_108 = puVar12;
        puVar6 = local_100;
        if (puVar12 != (ulong *)0x0) {
          while (puVar15 = puVar6, puVar15 != puVar12) {
            pvVar4 = (void *)puVar15[-5];
            if (pvVar4 != (void *)0x0) {
              puVar15[-4] = (ulong)pvVar4;
              operator_delete(pvVar4);
            }
            pvVar4 = (void *)puVar15[-8];
            puVar6 = puVar15 + -0xc;
            if (pvVar4 != (void *)0x0) {
              puVar15[-7] = (ulong)pvVar4;
              operator_delete(pvVar4);
            }
          }
          local_100 = puVar12;
          operator_delete(local_108);
        }
        goto LAB_00eaa7d4;
      default:
        FUN_00eaaac4();
        goto LAB_00eaa80c;
      case -0x3e3:
      case -0x3e2:
      case -0x3df:
        break;
      case -0x3e1:
switchD_00eaa59c_caseD_fffffc1f:
        pvVar4 = (void *)local_100[-5];
        if (pvVar4 != (void *)0x0) {
          local_100[-4] = (ulong)pvVar4;
          operator_delete(pvVar4);
        }
        pvVar4 = (void *)puVar2[-8];
        if (pvVar4 != (void *)0x0) {
          puVar2[-7] = (ulong)pvVar4;
          operator_delete(pvVar4);
        }
        local_100 = puVar2 + -0xc;
        break;
      case -0x3e0:
        uStack_e8 = puVar12[-0xb];
        local_f0 = *puVar15;
        local_d8 = puVar12[-9];
        uStack_e0 = puVar12[-10];
        vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
        ::vector((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                  *)&pvStack_d0,(vector *)(puVar12 + -8));
        vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
        ::vector((vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
                  *)&local_b8,(vector *)(puVar12 + -5));
        uStack_98 = (undefined4)((ulong)*(undefined8 *)((long)puVar12 + -0xb) >> 0x18);
        uStack_94 = (undefined1)((ulong)*(undefined8 *)((long)puVar12 + -0xb) >> 0x38);
        uStack_a0 = (undefined5)*puVar6;
        uStack_9b = (undefined3)(*puVar6 >> 0x28);
        (**(code **)(*(long *)*puVar6 + 0x18))((long *)*puVar6,1,puVar15);
        (**(code **)(*(long *)CONCAT35(uStack_9b,uStack_a0) + 0x18))
                  ((long *)CONCAT35(uStack_9b,uStack_a0),0,&local_f0);
        if (local_100 < puStack_f8) {
          local_100[5] = 0;
          local_100[6] = 0;
          local_100[4] = 0;
          local_100[1] = uStack_e8;
          *local_100 = local_f0;
          local_100[3] = local_d8;
          local_100[2] = uStack_e0;
          local_100[5] = (ulong)local_c8;
          local_100[4] = (ulong)pvStack_d0;
          local_100[6] = uStack_c0;
          local_100[7] = 0;
          pvStack_d0 = (void *)0x0;
          local_c8 = (void *)0x0;
          uStack_c0 = 0;
          local_100[8] = 0;
          local_100[9] = 0;
          local_100[8] = (ulong)pvStack_b0;
          local_100[7] = (ulong)local_b8;
          local_100[9] = local_a8;
          local_b8 = (void *)0x0;
          pvStack_b0 = (void *)0x0;
          local_a8 = 0;
          *(ulong *)((long)local_100 + 0x55) = CONCAT17(uStack_94,CONCAT43(uStack_98,uStack_9b));
          local_100[10] = CONCAT35(uStack_9b,uStack_a0);
          local_100 = local_100 + 0xc;
        }
        else {
          vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
          __push_back_slow_path<std::__ndk1::__state<char>>
                    ((vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                      *)&local_108,(__state *)&local_f0);
          if (local_b8 != (void *)0x0) {
            pvStack_b0 = local_b8;
            operator_delete(local_b8);
          }
          if (pvStack_d0 != (void *)0x0) {
            local_c8 = pvStack_d0;
            operator_delete(pvStack_d0);
          }
        }
      }
      uVar16 = uVar16 + 1;
      if (local_108 == local_100) {
        bVar13 = false;
        puVar12 = local_108;
        goto joined_r0x00eaa6f8;
      }
    } while (((uVar16 & 0xfff) != 0) || ((int)(uVar16 >> 0xc) < (int)param_2 - (int)param_1));
LAB_00eaa80c:
    FUN_00eaaa78();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

