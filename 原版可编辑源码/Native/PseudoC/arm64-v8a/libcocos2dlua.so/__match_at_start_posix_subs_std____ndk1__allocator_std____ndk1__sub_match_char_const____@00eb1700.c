
/* bool std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__match_at_start_posix_subs<std::__ndk1::allocator<std::__ndk1::sub_match<char const*> >
   >(char const*, char const*, std::__ndk1::match_results<char const*,
   std::__ndk1::allocator<std::__ndk1::sub_match<char const*> > >&,
   std::__ndk1::regex_constants::match_flag_type, bool) const */

bool __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__match_at_start_posix_subs<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
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
  ulong *puVar11;
  bool bVar12;
  ulong uVar13;
  uint uVar14;
  ulong *puVar15;
  long local_188;
  ulong *local_178;
  ulong *local_170;
  ulong *puStack_168;
  ulong local_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong local_148;
  void *pvStack_140;
  void *local_138;
  ulong uStack_130;
  void *local_128;
  void *pvStack_120;
  ulong local_118;
  undefined5 uStack_110;
  undefined3 uStack_10b;
  undefined4 uStack_108;
  undefined1 uStack_104;
  ulong local_f8;
  ulong uStack_f0;
  undefined1 local_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_170 = (ulong *)0x0;
  puStack_168 = (ulong *)0x0;
  local_178 = (ulong *)0x0;
  uStack_88 = 0;
  local_e0 = local_e0 & 0xffffffff00000000;
  uStack_d0 = 0;
  uStack_d8 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  pvStack_a0 = (void *)0x0;
  local_a8 = (void *)0x0;
  uStack_90 = 0;
  local_98 = 0;
  uVar13 = *(ulong *)(this + 0x28);
  bVar12 = false;
  if (uVar13 != 0) {
    local_e8 = 0;
    local_160 = local_160 & 0xffffffff00000000;
    uStack_150 = 0;
    uStack_158 = 0;
    pvStack_140 = (void *)0x0;
    local_148 = 0;
    uStack_130 = 0;
    local_138 = (void *)0x0;
    pvStack_120 = (void *)0x0;
    local_128 = (void *)0x0;
    uStack_110 = 0;
    uStack_10b = 0;
    local_118 = 0;
    uStack_108 = 0;
    local_f8 = param_2;
    uStack_f0 = param_2;
    vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
    __push_back_slow_path<std::__ndk1::__state<char>>
              ((vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                *)&local_178,(__state *)&local_160);
    if (local_128 != (void *)0x0) {
      pvStack_120 = local_128;
      operator_delete(local_128);
    }
    if (pvStack_140 != (void *)0x0) {
      local_138 = pvStack_140;
      operator_delete(pvStack_140);
    }
    *(undefined4 *)(local_170 + -0xc) = 0;
    local_170[-0xb] = param_1;
    local_170[-10] = param_1;
    local_170[-9] = param_2;
    lVar5 = *(long *)(local_170 + -8);
    uVar7 = (ulong)*(uint *)(this + 0x1c);
    lVar8 = (long)(local_170[-7] - lVar5) >> 3;
    uVar9 = lVar8 * -0x5555555555555555;
    if (uVar9 < uVar7) {
      vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
      ::__append((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                  *)(local_170 + -8),uVar7 + lVar8 * 0x5555555555555555,(sub_match *)&local_f8);
    }
    else if (uVar9 - uVar7 != 0) {
      local_170[-7] = lVar5 + uVar7 * 0x18;
    }
    lVar5 = *(long *)(local_170 + -5);
    uVar7 = (ulong)*(uint *)(this + 0x20);
    uVar9 = (long)(local_170[-4] - lVar5) >> 4;
    if (uVar9 < uVar7) {
      vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
      ::__append((vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
                  *)(local_170 + -5),uVar7 - uVar9);
    }
    else if (uVar9 != uVar7) {
      local_170[-4] = lVar5 + uVar7 * 0x10;
    }
    *(byte *)((long)local_170 + -4) = param_6 & 1;
    lVar5 = param_2 - param_1;
    local_170[-2] = uVar13;
    *(uint *)(local_170 + -1) = param_5;
    uVar14 = 0;
    local_188 = 0;
    bVar12 = false;
    do {
      puVar6 = local_170;
      uVar14 = uVar14 + 1;
      if (((uVar14 & 0xfff) == 0) && ((int)lVar5 <= (int)(uVar14 >> 0xc))) {
LAB_00eb1cf0:
        FUN_00eaaa78();
        goto LAB_00eb1cf4;
      }
      puVar11 = local_170 + -2;
      plVar3 = (long *)*puVar11;
      puVar15 = local_170 + -0xc;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,puVar15);
      }
      puVar2 = local_170;
      switch((int)*puVar15) {
      case -1000:
        if ((((param_5 >> 5 & 1) != 0) && (puVar6[-10] == param_1)) ||
           (((param_5 >> 0xc & 1) != 0 && (puVar6[-10] != param_2))))
        goto switchD_00eb1938_caseD_fffffc1f;
        lVar8 = puVar6[-10] - puVar6[-0xb];
        puVar11 = local_178;
        if ((local_188 < lVar8) || ((bool)(bVar12 ^ 1))) {
          uStack_d8 = puVar6[-0xb];
          local_e0 = *puVar15;
          local_c8 = puVar6[-9];
          uStack_d0 = puVar6[-10];
          local_188 = lVar8;
          if (&local_e0 != puVar15) {
            vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
            ::assign<std::__ndk1::sub_match<char_const*>*>
                      ((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                        *)&pvStack_c0,(sub_match *)puVar6[-8],(sub_match *)puVar6[-7]);
            vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
            ::assign<std::__ndk1::pair<unsigned_long,char_const*>*>
                      ((vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
                        *)&local_a8,(pair *)puVar6[-5],(pair *)puVar6[-4]);
            puVar11 = local_178;
            puVar2 = local_170;
          }
        }
        local_178 = puVar11;
        local_170 = puVar2;
        if (local_188 == lVar5) {
          while (puVar6 = puVar2, puVar6 != puVar11) {
            pvVar4 = (void *)puVar6[-5];
            if (pvVar4 != (void *)0x0) {
              puVar6[-4] = (ulong)pvVar4;
              operator_delete(pvVar4);
            }
            pvVar4 = (void *)puVar6[-8];
            puVar2 = puVar6 + -0xc;
            if (pvVar4 != (void *)0x0) {
              puVar6[-7] = (ulong)pvVar4;
              operator_delete(pvVar4);
            }
          }
          bVar12 = true;
          local_188 = lVar5;
          local_170 = puVar11;
        }
        else {
          pvVar4 = (void *)puVar2[-5];
          if (pvVar4 != (void *)0x0) {
            puVar2[-4] = (ulong)pvVar4;
            operator_delete(pvVar4);
          }
          pvVar4 = (void *)puVar2[-8];
          if (pvVar4 != (void *)0x0) {
            puVar2[-7] = (ulong)pvVar4;
            operator_delete(pvVar4);
          }
          local_170 = puVar2 + -0xc;
          bVar12 = true;
        }
        break;
      default:
        FUN_00eaaac4();
        goto LAB_00eb1cf0;
      case -0x3e3:
      case -0x3e2:
      case -0x3df:
        break;
      case -0x3e1:
switchD_00eb1938_caseD_fffffc1f:
        pvVar4 = (void *)local_170[-5];
        if (pvVar4 != (void *)0x0) {
          local_170[-4] = (ulong)pvVar4;
          operator_delete(pvVar4);
        }
        pvVar4 = (void *)puVar2[-8];
        if (pvVar4 != (void *)0x0) {
          puVar2[-7] = (ulong)pvVar4;
          operator_delete(pvVar4);
        }
        local_170 = puVar2 + -0xc;
        break;
      case -0x3e0:
        uStack_158 = puVar6[-0xb];
        local_160 = *puVar15;
        local_148 = puVar6[-9];
        uStack_150 = puVar6[-10];
        vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
        ::vector((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                  *)&pvStack_140,(vector *)(puVar6 + -8));
        vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
        ::vector((vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
                  *)&local_128,(vector *)(puVar6 + -5));
        uStack_108 = (undefined4)((ulong)*(undefined8 *)((long)puVar6 + -0xb) >> 0x18);
        uStack_104 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + -0xb) >> 0x38);
        uStack_110 = (undefined5)*puVar11;
        uStack_10b = (undefined3)(*puVar11 >> 0x28);
        (**(code **)(*(long *)*puVar11 + 0x18))((long *)*puVar11,1,puVar15);
        (**(code **)(*(long *)CONCAT35(uStack_10b,uStack_110) + 0x18))
                  ((long *)CONCAT35(uStack_10b,uStack_110),0,&local_160);
        if (local_170 < puStack_168) {
          local_170[5] = 0;
          local_170[6] = 0;
          local_170[4] = 0;
          local_170[1] = uStack_158;
          *local_170 = local_160;
          local_170[3] = local_148;
          local_170[2] = uStack_150;
          local_170[5] = (ulong)local_138;
          local_170[4] = (ulong)pvStack_140;
          local_170[6] = uStack_130;
          local_170[7] = 0;
          pvStack_140 = (void *)0x0;
          local_138 = (void *)0x0;
          uStack_130 = 0;
          local_170[8] = 0;
          local_170[9] = 0;
          local_170[8] = (ulong)pvStack_120;
          local_170[7] = (ulong)local_128;
          local_170[9] = local_118;
          local_128 = (void *)0x0;
          pvStack_120 = (void *)0x0;
          local_118 = 0;
          *(ulong *)((long)local_170 + 0x55) = CONCAT17(uStack_104,CONCAT43(uStack_108,uStack_10b));
          local_170[10] = CONCAT35(uStack_10b,uStack_110);
          local_170 = local_170 + 0xc;
        }
        else {
          vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
          __push_back_slow_path<std::__ndk1::__state<char>>
                    ((vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                      *)&local_178,(__state *)&local_160);
          if (local_128 != (void *)0x0) {
            pvStack_120 = local_128;
            operator_delete(local_128);
          }
          if (pvStack_140 != (void *)0x0) {
            local_138 = pvStack_140;
            operator_delete(pvStack_140);
          }
        }
      }
    } while (local_178 != local_170);
    if (bVar12) {
      bVar12 = true;
      puVar6 = (ulong *)*param_3;
      *puVar6 = param_1;
      puVar6[1] = param_1 + local_188;
      *(undefined1 *)(puVar6 + 2) = 1;
      if ((long)local_b8 - (long)pvStack_c0 != 0) {
        uVar9 = ((long)local_b8 - (long)pvStack_c0 >> 3) * -0x5555555555555555;
        uVar13 = 1;
        uVar7 = 0;
        do {
          uVar10 = uVar13;
          puVar11 = (ulong *)((long)pvStack_c0 + uVar7 * 0x18);
          uVar13 = *puVar11;
          puVar15 = puVar6 + uVar10 * 3;
          puVar15[1] = puVar11[1];
          *puVar15 = uVar13;
          *(char *)(puVar15 + 2) = (char)puVar11[2];
          uVar13 = (ulong)((int)uVar10 + 1);
          uVar7 = uVar10;
        } while (uVar10 <= uVar9 && uVar9 - uVar10 != 0);
        bVar12 = true;
      }
    }
    else {
      bVar12 = false;
    }
  }
  if (local_a8 != (void *)0x0) {
    pvStack_a0 = local_a8;
    operator_delete(local_a8);
  }
  if (pvStack_c0 != (void *)0x0) {
    local_b8 = pvStack_c0;
    operator_delete(pvStack_c0);
  }
  puVar6 = local_178;
  puVar11 = local_170;
  if (local_178 != (ulong *)0x0) {
    while (puVar15 = puVar11, puVar15 != puVar6) {
      pvVar4 = (void *)puVar15[-5];
      if (pvVar4 != (void *)0x0) {
        puVar15[-4] = (ulong)pvVar4;
        operator_delete(pvVar4);
      }
      pvVar4 = (void *)puVar15[-8];
      puVar11 = puVar15 + -0xc;
      if (pvVar4 != (void *)0x0) {
        puVar15[-7] = (ulong)pvVar4;
        operator_delete(pvVar4);
      }
    }
    local_170 = puVar6;
    operator_delete(local_178);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return bVar12;
  }
LAB_00eb1cf4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

