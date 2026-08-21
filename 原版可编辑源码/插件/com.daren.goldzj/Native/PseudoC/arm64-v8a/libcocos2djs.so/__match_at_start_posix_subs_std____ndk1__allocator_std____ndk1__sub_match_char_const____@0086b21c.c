
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
  size_t sVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  bool bVar14;
  ulong uVar15;
  uint uVar16;
  ulong *puVar17;
  long lVar18;
  long local_190;
  ulong *local_178;
  ulong *local_170;
  ulong *local_168;
  ulong local_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong local_148;
  void *pvStack_140;
  void *local_138;
  void *pvStack_130;
  void *local_128;
  void *pvStack_120;
  void *local_118;
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
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  local_178 = (ulong *)0x0;
  local_170 = (ulong *)0x0;
  local_168 = (ulong *)0x0;
  local_e0 = local_e0 & 0xffffffff00000000;
  uStack_88 = 0;
  uStack_90 = 0;
  local_98 = 0;
  pvStack_a0 = (void *)0x0;
  local_a8 = (void *)0x0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uVar15 = *(ulong *)(this + 0x28);
  bVar14 = false;
  if (uVar15 != 0) {
    local_e8 = 0;
    local_160 = local_160 & 0xffffffff00000000;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_10b = 0;
    local_118 = (void *)0x0;
    pvStack_120 = (void *)0x0;
    local_128 = (void *)0x0;
    pvStack_130 = (void *)0x0;
    local_138 = (void *)0x0;
    pvStack_140 = (void *)0x0;
    local_148 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
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
    lVar7 = *(long *)(local_170 + -8);
    lVar18 = param_2 - param_1;
    uVar9 = (ulong)*(uint *)(this + 0x1c);
    lVar10 = (long)(local_170[-7] - lVar7) >> 3;
    uVar11 = lVar10 * -0x5555555555555555;
    if (uVar11 < uVar9) {
      vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
      ::__append((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                  *)(local_170 + -8),uVar9 + lVar10 * 0x5555555555555555,(sub_match *)&local_f8);
    }
    else if (uVar11 - uVar9 != 0) {
      local_170[-7] = lVar7 + uVar9 * 0x18;
    }
    lVar7 = *(long *)(local_170 + -5);
    uVar9 = (ulong)*(uint *)(this + 0x20);
    uVar11 = (long)(local_170[-4] - lVar7) >> 4;
    if (uVar11 < uVar9) {
      vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
      ::__append((vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
                  *)(local_170 + -5),uVar9 - uVar11);
    }
    else if (uVar11 != uVar9) {
      local_170[-4] = lVar7 + uVar9 * 0x10;
    }
    local_170[-2] = uVar15;
    *(uint *)(local_170 + -1) = param_5;
    uVar16 = 0;
    local_190 = 0;
    bVar14 = false;
    *(byte *)((long)local_170 + -4) = param_6 & 1;
    do {
      puVar8 = local_170;
      uVar16 = uVar16 + 1;
      if (((uVar16 & 0xfff) == 0) && ((int)lVar18 <= (int)(uVar16 >> 0xc))) {
LAB_0086b8cc:
        FUN_00864d40();
LAB_0086b8d0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar13 = local_170 + -2;
      plVar3 = (long *)*puVar13;
      puVar17 = local_170 + -0xc;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,puVar17);
      }
      puVar2 = local_170;
      switch((int)*puVar17) {
      case -1000:
        if ((((param_5 >> 5 & 1) != 0) && (puVar8[-10] == param_1)) ||
           (((param_5 >> 0xc & 1) != 0 && (puVar8[-10] != param_2))))
        goto switchD_0086b43c_caseD_fffffc1f;
        lVar7 = puVar8[-10] - puVar8[-0xb];
        puVar13 = local_178;
        if ((local_190 < lVar7) || ((bool)(bVar14 ^ 1))) {
          uStack_d8 = puVar8[-0xb];
          local_e0 = *puVar17;
          local_c8 = puVar8[-9];
          uStack_d0 = puVar8[-10];
          local_190 = lVar7;
          if (&local_e0 != puVar17) {
            vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
            ::assign<std::__ndk1::sub_match<char_const*>*>
                      ((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                        *)&pvStack_c0,(sub_match *)puVar8[-8],(sub_match *)puVar8[-7]);
            vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
            ::assign<std::__ndk1::pair<unsigned_long,char_const*>*>
                      ((vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
                        *)&local_a8,(pair *)puVar8[-5],(pair *)puVar8[-4]);
            puVar13 = local_178;
            puVar2 = local_170;
          }
        }
        local_178 = puVar13;
        local_170 = puVar2;
        if (local_190 == lVar18) {
          while (puVar8 = puVar2, puVar8 != puVar13) {
            pvVar4 = (void *)puVar8[-5];
            if (pvVar4 != (void *)0x0) {
              puVar8[-4] = (ulong)pvVar4;
              operator_delete(pvVar4);
            }
            pvVar4 = (void *)puVar8[-8];
            puVar2 = puVar8 + -0xc;
            if (pvVar4 != (void *)0x0) {
              puVar8[-7] = (ulong)pvVar4;
              operator_delete(pvVar4);
            }
          }
          bVar14 = true;
          local_190 = lVar18;
          local_170 = puVar13;
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
          bVar14 = true;
        }
        break;
      default:
        FUN_00864d4c();
        goto LAB_0086b8cc;
      case -0x3e3:
      case -0x3e2:
      case -0x3df:
        break;
      case -0x3e1:
switchD_0086b43c_caseD_fffffc1f:
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
        uStack_158 = puVar8[-0xb];
        local_160 = *puVar17;
        local_148 = puVar8[-9];
        uStack_150 = puVar8[-10];
        pvStack_140 = (void *)0x0;
        local_138 = (void *)0x0;
        pvStack_130 = (void *)0x0;
        uVar15 = puVar8[-7] - puVar8[-8];
        if (uVar15 != 0) {
          if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar15 >> 3) * -0x5555555555555555))
          goto LAB_0086b8d0;
          pvVar4 = operator_new(uVar15);
          pvStack_130 = (void *)((long)pvVar4 + ((long)uVar15 >> 3) * 8);
          sVar5 = puVar8[-7] - (long)puVar8[-8];
          pvStack_140 = pvVar4;
          local_138 = pvVar4;
          if (0 < (long)sVar5) {
            memcpy(pvVar4,(void *)puVar8[-8],sVar5);
            local_138 = (void *)((long)pvVar4 + (sVar5 / 0x18) * 0x18);
          }
        }
        local_128 = (void *)0x0;
        pvStack_120 = (void *)0x0;
        local_118 = (void *)0x0;
        uVar15 = puVar8[-4] - puVar8[-5];
        if (uVar15 != 0) {
          if ((ulong)((long)uVar15 >> 4) >> 0x3c != 0) goto LAB_0086b8d0;
          pvVar4 = operator_new(uVar15);
          local_118 = (void *)((long)pvVar4 + ((long)uVar15 >> 4) * 0x10);
          sVar5 = puVar8[-4] - (long)puVar8[-5];
          local_128 = pvVar4;
          pvStack_120 = pvVar4;
          if (0 < (long)sVar5) {
            memcpy(pvVar4,(void *)puVar8[-5],sVar5);
            pvStack_120 = (void *)((long)pvVar4 + sVar5);
          }
        }
        uStack_108 = (undefined4)((ulong)*(undefined8 *)((long)puVar8 + -0xb) >> 0x18);
        uStack_104 = (undefined1)((ulong)*(undefined8 *)((long)puVar8 + -0xb) >> 0x38);
        uStack_110 = (undefined5)*puVar13;
        uStack_10b = (undefined3)(*puVar13 >> 0x28);
        (**(code **)(*(long *)*puVar13 + 0x18))((long *)*puVar13,1,puVar17);
        (**(code **)(*(long *)CONCAT35(uStack_10b,uStack_110) + 0x18))
                  ((long *)CONCAT35(uStack_10b,uStack_110),0,&local_160);
        if (local_170 < local_168) {
          local_170[5] = 0;
          local_170[6] = 0;
          local_170[4] = 0;
          local_170[1] = uStack_158;
          *local_170 = local_160;
          local_170[3] = local_148;
          local_170[2] = uStack_150;
          local_170[5] = (ulong)local_138;
          local_170[4] = (ulong)pvStack_140;
          local_170[6] = (ulong)pvStack_130;
          local_170[7] = 0;
          local_138 = (void *)0x0;
          pvStack_130 = (void *)0x0;
          pvStack_140 = (void *)0x0;
          local_170[8] = 0;
          local_170[9] = 0;
          local_170[8] = (ulong)pvStack_120;
          local_170[7] = (ulong)local_128;
          local_170[9] = (ulong)local_118;
          pvStack_120 = (void *)0x0;
          local_118 = (void *)0x0;
          local_128 = (void *)0x0;
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
    if (bVar14) {
      puVar8 = (ulong *)*param_3;
      *puVar8 = param_1;
      puVar8[1] = param_1 + local_190;
      *(undefined1 *)(puVar8 + 2) = 1;
      if ((long)local_b8 - (long)pvStack_c0 != 0) {
        uVar11 = ((long)local_b8 - (long)pvStack_c0 >> 3) * -0x5555555555555555;
        uVar15 = 1;
        uVar9 = 0;
        do {
          uVar12 = uVar15;
          puVar13 = (ulong *)((long)pvStack_c0 + uVar9 * 0x18);
          uVar15 = *puVar13;
          puVar17 = puVar8 + uVar12 * 3;
          puVar17[1] = puVar13[1];
          *puVar17 = uVar15;
          *(char *)(puVar17 + 2) = (char)puVar13[2];
          uVar15 = (ulong)((int)uVar12 + 1);
          uVar9 = uVar12;
        } while (uVar12 <= uVar11 && uVar11 - uVar12 != 0);
      }
      bVar14 = true;
    }
    else {
      bVar14 = false;
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
  puVar8 = local_178;
  puVar13 = local_170;
  if (local_178 != (ulong *)0x0) {
    while (puVar17 = puVar13, puVar17 != puVar8) {
      pvVar4 = (void *)puVar17[-5];
      if (pvVar4 != (void *)0x0) {
        puVar17[-4] = (ulong)pvVar4;
        operator_delete(pvVar4);
      }
      pvVar4 = (void *)puVar17[-8];
      puVar13 = puVar17 + -0xc;
      if (pvVar4 != (void *)0x0) {
        puVar17[-7] = (ulong)pvVar4;
        operator_delete(pvVar4);
      }
    }
    local_170 = puVar8;
    operator_delete(local_178);
  }
  if (*(long *)(lVar1 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar14;
}

