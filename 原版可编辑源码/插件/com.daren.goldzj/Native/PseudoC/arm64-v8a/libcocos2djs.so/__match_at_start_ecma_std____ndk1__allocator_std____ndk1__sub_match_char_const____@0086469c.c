
/* WARNING: Restarted to delay deadcode elimination for space: stack */
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
  undefined3 uVar4;
  bool bVar5;
  long *plVar6;
  void *pvVar7;
  size_t sVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  bool bVar17;
  ulong uVar18;
  ulong *puVar19;
  uint uVar20;
  ulong *local_108;
  ulong *local_100;
  ulong *puStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong local_d8;
  void *pvStack_d0;
  void *local_c8;
  void *pvStack_c0;
  void *local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
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
  uVar18 = *(ulong *)(this + 0x28);
  bVar17 = false;
  plVar3 = uStack_a0;
  uVar4 = uStack_a0._5_3_;
  if (uVar18 != 0) {
    local_78 = 0;
    local_f0 = local_f0 & 0xffffffff00000000;
    uStack_98 = 0;
    uStack_a0 = (long *)0x0;
    uStack_a0._5_3_ = 0;
    local_a8 = (void *)0x0;
    pvStack_b0 = (void *)0x0;
    local_b8 = (void *)0x0;
    pvStack_c0 = (void *)0x0;
    local_c8 = (void *)0x0;
    pvStack_d0 = (void *)0x0;
    local_d8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    local_88 = param_2;
    uStack_80 = param_2;
    vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
    __push_back_slow_path<std::__ndk1::__state<char>>
              ((vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                *)&local_108,(__state *)&local_f0);
    plVar3 = uStack_a0;
    if (local_b8 != (void *)0x0) {
      pvStack_b0 = local_b8;
      uVar4 = uStack_a0._5_3_;
      uStack_a0 = plVar3;
      plVar3 = uStack_a0;
      uStack_a0._5_3_ = uVar4;
      operator_delete(local_b8);
      plVar3 = uStack_a0;
    }
    uStack_a0 = plVar3;
    uVar4 = uStack_a0._5_3_;
    plVar3 = uStack_a0;
    if (pvStack_d0 != (void *)0x0) {
      local_c8 = pvStack_d0;
      uStack_a0._5_3_ = uVar4;
      operator_delete(pvStack_d0);
      plVar3 = uStack_a0;
      uVar4 = uStack_a0._5_3_;
    }
    uStack_a0._5_3_ = uVar4;
    uStack_a0 = plVar3;
    uVar4 = uStack_a0._5_3_;
    *(undefined4 *)(local_100 + -0xc) = 0;
    local_100[-0xb] = param_1;
    local_100[-10] = param_1;
    local_100[-9] = param_2;
    lVar9 = *(long *)(local_100 + -8);
    uVar11 = (ulong)*(uint *)(this + 0x1c);
    lVar12 = (long)(local_100[-7] - lVar9) >> 3;
    uVar13 = lVar12 * -0x5555555555555555;
    if (uVar13 < uVar11) {
      plVar3 = uStack_a0;
      uStack_a0._5_3_ = uVar4;
      vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
      ::__append((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                  *)(local_100 + -8),uVar11 + lVar12 * 0x5555555555555555,(sub_match *)&local_88);
      plVar3 = uStack_a0;
      uVar4 = uStack_a0._5_3_;
    }
    else {
      plVar3 = uStack_a0;
      if (uVar13 - uVar11 != 0) {
        local_100[-7] = lVar9 + uVar11 * 0x18;
      }
    }
    uStack_a0._5_3_ = uVar4;
    uStack_a0 = plVar3;
    uVar4 = uStack_a0._5_3_;
    lVar9 = *(long *)(local_100 + -5);
    uVar11 = (ulong)*(uint *)(this + 0x20);
    uVar13 = (long)(local_100[-4] - lVar9) >> 4;
    if (uVar13 < uVar11) {
      plVar3 = uStack_a0;
      uStack_a0._5_3_ = uVar4;
      vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
      ::__append((vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
                  *)(local_100 + -5),uVar11 - uVar13);
      plVar3 = uStack_a0;
      uVar4 = uStack_a0._5_3_;
    }
    else {
      plVar3 = uStack_a0;
      if (uVar13 != uVar11) {
        local_100[-4] = lVar9 + uVar11 * 0x10;
      }
    }
    uStack_a0._5_3_ = uVar4;
    uStack_a0 = plVar3;
    uVar4 = uStack_a0._5_3_;
    local_100[-2] = uVar18;
    *(byte *)((long)local_100 + -4) = param_6 & 1;
    *(uint *)(local_100 + -1) = param_5;
    uVar20 = 1;
    do {
      uStack_a0._5_3_ = uVar4;
      uVar4 = uStack_a0._5_3_;
      puVar16 = local_100;
      if (((uVar20 & 0xfff) == 0) &&
         (plVar3 = uStack_a0, (int)param_2 - (int)param_1 <= (int)(uVar20 >> 0xc))) {
LAB_00864bb8:
        uStack_a0._5_3_ = uVar4;
        uStack_a0 = plVar3;
        uVar4 = uStack_a0._5_3_;
        plVar3 = uStack_a0;
        uStack_a0._5_3_ = uVar4;
        FUN_00864d40();
        plVar3 = uStack_a0;
        uVar4 = uStack_a0._5_3_;
LAB_00864bbc:
        uStack_a0._5_3_ = uVar4;
        uStack_a0 = plVar3;
        uVar4 = uStack_a0._5_3_;
        plVar3 = uStack_a0;
        uStack_a0._5_3_ = uVar4;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar19 = local_100 + -2;
      plVar6 = (long *)*puVar19;
      puVar10 = local_100 + -0xc;
      plVar3 = uStack_a0;
      if (plVar6 != (long *)0x0) {
        uStack_a0._5_3_ = uVar4;
        (**(code **)(*plVar6 + 0x10))(plVar6,puVar10);
        plVar3 = uStack_a0;
        uVar4 = uStack_a0._5_3_;
      }
      uStack_a0._5_3_ = uVar4;
      uStack_a0 = plVar3;
      uVar4 = uStack_a0._5_3_;
      puVar2 = local_100;
      plVar3 = uStack_a0;
      uStack_a0._5_3_ = uVar4;
      switch((int)*puVar10) {
      case -1000:
        if (((param_5 >> 5 & 1) != 0) && (puVar16[-10] == param_1))
        goto switchD_00864870_caseD_fffffc1f;
        if ((param_5 >> 0xc & 1) == 0) {
          uVar18 = puVar16[-10];
        }
        else {
          uVar18 = puVar16[-10];
          if (uVar18 != param_2) goto switchD_00864870_caseD_fffffc1f;
        }
        puVar10 = (ulong *)*param_3;
        *puVar10 = param_1;
        puVar10[1] = uVar18;
        *(undefined1 *)(puVar10 + 2) = 1;
        uVar18 = puVar16[-8];
        lVar9 = puVar16[-7] - uVar18;
        if (lVar9 != 0) {
          uVar15 = (lVar9 >> 3) * -0x5555555555555555;
          uVar11 = 1;
          uVar13 = 0;
          do {
            uVar14 = uVar11;
            puVar16 = (ulong *)(uVar18 + uVar13 * 0x18);
            uVar11 = *puVar16;
            puVar19 = puVar10 + uVar14 * 3;
            puVar19[1] = puVar16[1];
            *puVar19 = uVar11;
            *(char *)(puVar19 + 2) = (char)puVar16[2];
            uVar11 = (ulong)((int)uVar14 + 1);
            uVar13 = uVar14;
          } while (uVar14 <= uVar15 && uVar15 - uVar14 != 0);
        }
        bVar17 = true;
        puVar16 = local_108;
        puVar19 = local_100;
        puVar10 = local_108;
        bVar5 = true;
        if (local_108 == (ulong *)0x0) goto LAB_00864b80;
        goto joined_r0x00864b38;
      default:
        FUN_00864d4c();
        plVar3 = uStack_a0;
        uVar4 = uStack_a0._5_3_;
        goto LAB_00864bb8;
      case -0x3e3:
      case -0x3e2:
      case -0x3df:
        break;
      case -0x3e1:
switchD_00864870_caseD_fffffc1f:
        pvVar7 = (void *)local_100[-5];
        if (pvVar7 != (void *)0x0) {
          local_100[-4] = (ulong)pvVar7;
          operator_delete(pvVar7);
          plVar3 = uStack_a0;
          uVar4 = uStack_a0._5_3_;
        }
        uStack_a0._5_3_ = uVar4;
        uStack_a0 = plVar3;
        uVar4 = uStack_a0._5_3_;
        pvVar7 = (void *)puVar2[-8];
        plVar3 = uStack_a0;
        if (pvVar7 != (void *)0x0) {
          puVar2[-7] = (ulong)pvVar7;
          uStack_a0._5_3_ = uVar4;
          operator_delete(pvVar7);
          plVar3 = uStack_a0;
          uVar4 = uStack_a0._5_3_;
        }
        uStack_a0._5_3_ = uVar4;
        uStack_a0 = plVar3;
        uVar4 = uStack_a0._5_3_;
        local_100 = puVar2 + -0xc;
        plVar3 = uStack_a0;
        break;
      case -0x3e0:
        uStack_e8 = puVar16[-0xb];
        local_f0 = *puVar10;
        local_d8 = puVar16[-9];
        uStack_e0 = puVar16[-10];
        pvStack_d0 = (void *)0x0;
        local_c8 = (void *)0x0;
        pvStack_c0 = (void *)0x0;
        uVar18 = puVar16[-7] - puVar16[-8];
        if (uVar18 != 0) {
          if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar18 >> 3) * -0x5555555555555555))
          goto LAB_00864bbc;
          pvVar7 = operator_new(uVar18);
          plVar3 = uStack_a0;
          pvStack_c0 = (void *)((long)pvVar7 + ((long)uVar18 >> 3) * 8);
          sVar8 = puVar16[-7] - (long)puVar16[-8];
          pvStack_d0 = pvVar7;
          local_c8 = pvVar7;
          uVar4 = uStack_a0._5_3_;
          if (0 < (long)sVar8) {
            uStack_a0 = plVar3;
            plVar3 = uStack_a0;
            uStack_a0._5_3_ = uVar4;
            memcpy(pvVar7,(void *)puVar16[-8],sVar8);
            plVar3 = uStack_a0;
            local_c8 = (void *)((long)pvVar7 + (sVar8 / 0x18) * 0x18);
            uVar4 = uStack_a0._5_3_;
          }
        }
        uStack_a0._5_3_ = uVar4;
        uStack_a0 = plVar3;
        uVar4 = uStack_a0._5_3_;
        local_b8 = (void *)0x0;
        pvStack_b0 = (void *)0x0;
        local_a8 = (void *)0x0;
        uVar18 = puVar16[-4] - puVar16[-5];
        plVar3 = uStack_a0;
        if (uVar18 != 0) {
          if ((ulong)((long)uVar18 >> 4) >> 0x3c != 0) goto LAB_00864bbc;
          uStack_a0._5_3_ = uVar4;
          pvVar7 = operator_new(uVar18);
          plVar3 = uStack_a0;
          local_a8 = (void *)((long)pvVar7 + ((long)uVar18 >> 4) * 0x10);
          sVar8 = puVar16[-4] - (long)puVar16[-5];
          local_b8 = pvVar7;
          pvStack_b0 = pvVar7;
          if (0 < (long)sVar8) {
            uVar4 = uStack_a0._5_3_;
            uStack_a0 = plVar3;
            plVar3 = uStack_a0;
            uStack_a0._5_3_ = uVar4;
            memcpy(pvVar7,(void *)puVar16[-5],sVar8);
            pvStack_b0 = (void *)((long)pvVar7 + sVar8);
            plVar3 = uStack_a0;
          }
        }
        uStack_a0 = plVar3;
        plVar3 = uStack_a0;
        uStack_94 = (undefined1)((ulong)*(undefined8 *)((long)puVar16 + -0xb) >> 0x38);
        uStack_a0._5_3_ = (undefined3)(*puVar19 >> 0x28);
        uVar4 = uStack_a0._5_3_;
        uStack_a0 = plVar3;
        plVar3 = uStack_a0;
        uStack_a0._5_3_ = uVar4;
        (**(code **)(*(long *)*puVar19 + 0x18))((long *)*puVar19,1,puVar10);
        plVar3 = uStack_a0;
        uVar4 = uStack_a0._5_3_;
        uStack_a0 = plVar3;
        uStack_a0._5_3_ = uVar4;
        (**(code **)(*plVar3 + 0x18))(plVar3,0,&local_f0);
        plVar3 = uStack_a0;
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
          local_100[6] = (ulong)pvStack_c0;
          local_100[7] = 0;
          local_c8 = (void *)0x0;
          pvStack_c0 = (void *)0x0;
          pvStack_d0 = (void *)0x0;
          local_100[8] = 0;
          local_100[9] = 0;
          local_100[8] = (ulong)pvStack_b0;
          local_100[7] = (ulong)local_b8;
          local_100[9] = (ulong)local_a8;
          pvStack_b0 = (void *)0x0;
          local_a8 = (void *)0x0;
          local_b8 = (void *)0x0;
          *(ulong *)((long)local_100 + 0x55) =
               CONCAT17(uStack_94,CONCAT43(uStack_98,uStack_a0._5_3_));
          local_100[10] = CONCAT38(uStack_a0._5_3_,plVar3);
          local_100 = local_100 + 0xc;
          uVar4 = uStack_a0._5_3_;
        }
        else {
          uVar4 = uStack_a0._5_3_;
          uStack_a0 = plVar3;
          plVar3 = uStack_a0;
          uStack_a0._5_3_ = uVar4;
          vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
          __push_back_slow_path<std::__ndk1::__state<char>>
                    ((vector<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                      *)&local_108,(__state *)&local_f0);
          plVar3 = uStack_a0;
          if (local_b8 != (void *)0x0) {
            pvStack_b0 = local_b8;
            uVar4 = uStack_a0._5_3_;
            uStack_a0 = plVar3;
            plVar3 = uStack_a0;
            uStack_a0._5_3_ = uVar4;
            operator_delete(local_b8);
            plVar3 = uStack_a0;
          }
          uStack_a0 = plVar3;
          uVar4 = uStack_a0._5_3_;
          plVar3 = uStack_a0;
          if (pvStack_d0 != (void *)0x0) {
            local_c8 = pvStack_d0;
            operator_delete(pvStack_d0);
            plVar3 = uStack_a0;
            uVar4 = uStack_a0._5_3_;
          }
        }
      }
      uStack_a0._5_3_ = uVar4;
      uStack_a0 = plVar3;
      uVar4 = uStack_a0._5_3_;
      uVar20 = uVar20 + 1;
    } while (local_108 != local_100);
    bVar17 = false;
    plVar3 = uStack_a0;
    puVar16 = local_108;
    puVar19 = local_100;
    puVar10 = local_108;
    bVar5 = false;
    if (local_108 != (ulong *)0x0) {
joined_r0x00864b38:
      while (bVar17 = bVar5, local_108 = puVar10, uStack_a0 = plVar3, puVar2 = puVar19,
            puVar10 = local_108, uStack_a0._5_3_ = uVar4, puVar2 != local_108) {
        pvVar7 = (void *)puVar2[-5];
        local_108 = puVar16;
        plVar3 = uStack_a0;
        if (pvVar7 != (void *)0x0) {
          puVar2[-4] = (ulong)pvVar7;
          operator_delete(pvVar7);
          plVar3 = uStack_a0;
          uVar4 = uStack_a0._5_3_;
        }
        uStack_a0._5_3_ = uVar4;
        uStack_a0 = plVar3;
        uVar4 = uStack_a0._5_3_;
        pvVar7 = (void *)puVar2[-8];
        puVar16 = local_108;
        puVar19 = puVar2 + -0xc;
        plVar3 = uStack_a0;
        bVar5 = bVar17;
        if (pvVar7 != (void *)0x0) {
          puVar2[-7] = (ulong)pvVar7;
          uStack_a0._5_3_ = uVar4;
          operator_delete(pvVar7);
          plVar3 = uStack_a0;
          puVar16 = local_108;
          uVar4 = uStack_a0._5_3_;
        }
      }
      local_100 = local_108;
      local_108 = puVar16;
      plVar3 = uStack_a0;
      operator_delete(puVar16);
      plVar3 = uStack_a0;
      uVar4 = uStack_a0._5_3_;
    }
  }
LAB_00864b80:
  uStack_a0._5_3_ = uVar4;
  uStack_a0 = plVar3;
  uVar4 = uStack_a0._5_3_;
  if (*(long *)(lVar1 + 0x28) != local_70) {
    plVar3 = uStack_a0;
    uStack_a0._5_3_ = uVar4;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar17;
}

