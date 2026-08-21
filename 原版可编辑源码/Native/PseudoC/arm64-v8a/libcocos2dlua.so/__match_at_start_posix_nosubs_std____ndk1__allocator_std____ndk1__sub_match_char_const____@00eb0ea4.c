
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* bool std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__match_at_start_posix_nosubs<std::__ndk1::allocator<std::__ndk1::sub_match<char const*> >
   >(char const*, char const*, std::__ndk1::match_results<char const*,
   std::__ndk1::allocator<std::__ndk1::sub_match<char const*> > >&,
   std::__ndk1::regex_constants::match_flag_type, bool) const */

bool __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__match_at_start_posix_nosubs<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,long param_1,long param_2,
          undefined8 *param_3,uint param_5,byte param_6)

{
  long lVar1;
  undefined3 uVar2;
  vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
  *this_00;
  void *pvVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long local_138;
  void *local_110;
  undefined8 *puStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  long local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined4 local_78;
  undefined1 uStack_74;
  long local_70;
  undefined8 *puVar16;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uStack_f8 = 0;
  local_100 = (undefined8 *)0x0;
  local_e8 = 0;
  local_f0 = 0;
  puStack_108 = (undefined8 *)0x0;
  local_110 = (void *)0x0;
  lVar13 = *(long *)(this + 0x28);
  if (lVar13 == 0) {
    bVar12 = false;
LAB_00eb15b8:
    __deque_base<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
    clear((__deque_base<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
           *)&local_110);
    puVar17 = local_100;
    puVar15 = puStack_108;
    if (puStack_108 != local_100) {
      do {
        puVar16 = puVar15 + 1;
        operator_delete((void *)*puVar15);
        puVar15 = puVar16;
      } while (puVar17 != puVar16);
      if ((long)local_100 - (long)puStack_108 != 0) {
        local_100 = local_100 +
                    (((long)local_100 - (long)puStack_108) - 8U >> 3 ^ 0xffffffffffffffff);
      }
    }
    if (local_110 != (void *)0x0) {
      operator_delete(local_110);
    }
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return bVar12;
    }
  }
  else {
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    local_80 = 0;
    uStack_7b = 0;
    local_78 = 0;
    deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
    __add_back_capacity((deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                         *)&local_110);
    plVar5 = uStack_90;
    if (local_100 == puStack_108) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)
               (puStack_108[(local_f0 + local_e8) / 0x2a] + ((local_f0 + local_e8) % 0x2a) * 0x60);
    }
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 0xe) = 0;
    *(undefined8 *)(puVar4 + 0xc) = 0;
    *(undefined8 *)(puVar4 + 0x12) = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(ulong *)(puVar4 + 6) = CONCAT44(uStack_c8,uStack_cc);
    *(ulong *)(puVar4 + 4) = CONCAT44(uStack_d0,uStack_d4);
    *(undefined8 *)(puVar4 + 10) = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    *(ulong *)(puVar4 + 3) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(puVar4 + 1) = CONCAT44(uStack_dc,local_e0);
    *(ulong *)((long)puVar4 + 0x55) = CONCAT17(uStack_74,CONCAT43(local_78,uStack_7b));
    *(ulong *)(puVar4 + 0x14) = CONCAT35(uStack_7b,local_80);
    lVar6 = local_e8 + 1;
    uVar7 = (local_f0 + local_e8) / 0x2a;
    lVar11 = puStack_108[uVar7];
    lVar8 = ((local_f0 + local_e8) % 0x2a) * 0x60;
    *(undefined4 *)(lVar11 + lVar8) = 0;
    *(long *)((undefined4 *)(lVar11 + lVar8) + 2) = param_1;
    *(long *)(puStack_108[uVar7] + lVar8 + 0x10) = param_1;
    *(long *)(puStack_108[uVar7] + lVar8 + 0x18) = param_2;
    this_00 = (vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
               *)(puStack_108[uVar7] + lVar8 + 0x38);
    lVar11 = *(long *)this_00;
    uVar9 = (ulong)*(uint *)(this + 0x20);
    plVar10 = (long *)(puStack_108[uVar7] + lVar8 + 0x40);
    uVar7 = *plVar10 - lVar11 >> 4;
    local_e8 = lVar6;
    if (uVar7 < uVar9) {
      vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
      ::__append(this_00,uVar9 - uVar7);
      uStack_90 = plVar5;
      plVar5 = uStack_90;
    }
    else if (uVar7 != uVar9) {
      *plVar10 = lVar11 + uVar9 * 0x10;
    }
    uStack_90 = plVar5;
    uVar2 = uStack_90._5_3_;
    uVar7 = (local_e8 + local_f0) - 1;
    uVar9 = uVar7 / 0x2a;
    local_138 = 0;
    lVar6 = (uVar7 % 0x2a) * 0x60;
    *(long *)(puStack_108[uVar9] + lVar6 + 0x50) = lVar13;
    lVar13 = param_2 - param_1;
    lVar6 = puStack_108[uVar9] + lVar6;
    uVar14 = 1;
    bVar12 = false;
    *(byte *)(lVar6 + 0x5c) = param_6 & 1;
    *(uint *)(lVar6 + 0x58) = param_5;
    do {
      uStack_90._5_3_ = uVar2;
      uVar2 = uStack_90._5_3_;
      uVar7 = (local_e8 + local_f0) - 1;
      lVar6 = puStack_108[uVar7 / 0x2a];
      uVar7 = uVar7 % 0x2a;
      puVar17 = (undefined8 *)(lVar6 + uVar7 * 0x60);
      plVar18 = puVar17 + 10;
      plVar10 = (long *)*plVar18;
      plVar5 = uStack_90;
      if (plVar10 != (long *)0x0) {
        uStack_90._5_3_ = uVar2;
        (**(code **)(*plVar10 + 0x10))(plVar10,puVar17);
        plVar5 = uStack_90;
        uVar2 = uStack_90._5_3_;
      }
      uStack_90._5_3_ = uVar2;
      uStack_90 = plVar5;
      uVar2 = uStack_90._5_3_;
      plVar5 = uStack_90;
      uStack_90._5_3_ = uVar2;
      switch(*(undefined4 *)puVar17) {
      case 0xfffffc18:
        if ((((param_5 >> 5 & 1) != 0) && (*(long *)(lVar6 + uVar7 * 0x60 + 0x10) == param_1)) ||
           (((param_5 >> 0xc & 1) != 0 && (*(long *)(lVar6 + uVar7 * 0x60 + 0x10) != param_2))))
        goto switchD_00eb1178_caseD_fffffc1f;
        lVar6 = lVar6 + uVar7 * 0x60;
        lVar6 = *(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8);
        if (lVar6 <= local_138 && !(bool)(bVar12 ^ 1)) {
          lVar6 = local_138;
        }
        if (lVar6 == lVar13) {
          __deque_base<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
          ::clear((__deque_base<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                   *)&local_110);
          plVar5 = uStack_90;
          bVar12 = true;
          local_138 = lVar13;
          uVar2 = uStack_90._5_3_;
        }
        else {
          uVar7 = (local_e8 + local_f0) - 1;
          lVar8 = puStack_108[uVar7 / 0x2a];
          uVar7 = uVar7 % 0x2a;
          pvVar3 = *(void **)(lVar8 + uVar7 * 0x60 + 0x38);
          if (pvVar3 != (void *)0x0) {
            *(void **)(lVar8 + uVar7 * 0x60 + 0x40) = pvVar3;
            operator_delete(pvVar3);
            plVar5 = uStack_90;
            uVar2 = uStack_90._5_3_;
          }
          uStack_90._5_3_ = uVar2;
          uStack_90 = plVar5;
          uVar2 = uStack_90._5_3_;
          pvVar3 = *(void **)(lVar8 + uVar7 * 0x60 + 0x20);
          plVar5 = uStack_90;
          if (pvVar3 != (void *)0x0) {
            *(void **)(lVar8 + uVar7 * 0x60 + 0x28) = pvVar3;
            uStack_90._5_3_ = uVar2;
            operator_delete(pvVar3);
            plVar5 = uStack_90;
            uVar2 = uStack_90._5_3_;
          }
          uStack_90._5_3_ = uVar2;
          uStack_90 = plVar5;
          uVar2 = uStack_90._5_3_;
          lVar8 = local_e8 + local_f0;
          lVar11 = 0;
          if ((long)local_100 - (long)puStack_108 != 0) {
            lVar11 = ((long)local_100 - (long)puStack_108 >> 3) * 0x2a + -1;
          }
          local_e8 = local_e8 + -1;
          plVar5 = uStack_90;
          if (0x53 < (lVar11 - lVar8) + 1U) {
            uStack_90._5_3_ = uVar2;
            operator_delete((void *)local_100[-1]);
            plVar5 = uStack_90;
            local_100 = local_100 + -1;
            uVar2 = uStack_90._5_3_;
          }
          uStack_90._5_3_ = uVar2;
          uStack_90 = plVar5;
          uVar2 = uStack_90._5_3_;
          bVar12 = true;
          local_138 = lVar6;
          plVar5 = uStack_90;
        }
        break;
      case 0xfffffc19:
      case 0xfffffc1e:
      case 0xfffffc21:
        goto switchD_00eb1178_caseD_fffffc19;
      default:
        FUN_00eaaac4();
        uVar2 = uStack_90._5_3_;
        goto LAB_00eb1640;
      case 0xfffffc1d:
        if (local_f0 == 0) {
          deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
          __add_front_capacity
                    ((deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                      *)&local_110);
          plVar5 = uStack_90;
          uVar2 = uStack_90._5_3_;
        }
        uStack_90._5_3_ = uVar2;
        uStack_90 = plVar5;
        uVar2 = uStack_90._5_3_;
        lVar8 = puStack_108[local_f0 / 0x2a];
        if (local_100 == puStack_108) {
          lVar11 = 0;
          if (lVar8 == 0) goto LAB_00eb1208;
        }
        else {
          lVar11 = lVar8 + (local_f0 % 0x2a) * 0x60;
          if (lVar11 == lVar8) {
LAB_00eb1208:
            lVar11 = (puStack_108 + local_f0 / 0x2a)[-1] + 0xfc0;
          }
        }
        uVar20 = puVar17[1];
        uVar19 = *puVar17;
        uVar22 = puVar17[3];
        uVar21 = puVar17[2];
        lVar6 = lVar6 + uVar7 * 0x60;
        *(undefined8 *)(lVar11 + -0x38) = 0;
        *(undefined8 *)(lVar11 + -0x30) = 0;
        *(undefined8 *)(lVar11 + -0x40) = 0;
        *(undefined8 *)(lVar11 + -0x58) = uVar20;
        *(undefined8 *)(lVar11 + -0x60) = uVar19;
        *(undefined8 *)(lVar11 + -0x48) = uVar22;
        *(undefined8 *)(lVar11 + -0x50) = uVar21;
        uVar19 = *(undefined8 *)(lVar6 + 0x20);
        *(undefined8 *)(lVar11 + -0x38) = *(undefined8 *)(lVar6 + 0x28);
        *(undefined8 *)(lVar11 + -0x40) = uVar19;
        *(undefined8 *)(lVar11 + -0x30) = *(undefined8 *)(lVar6 + 0x30);
        *(undefined8 *)(lVar6 + 0x20) = 0;
        *(undefined8 *)(lVar6 + 0x28) = 0;
        *(undefined8 *)(lVar6 + 0x30) = 0;
        *(undefined8 *)(lVar11 + -0x28) = 0;
        *(undefined8 *)(lVar11 + -0x20) = 0;
        *(undefined8 *)(lVar11 + -0x18) = 0;
        uVar19 = *(undefined8 *)(lVar6 + 0x38);
        *(undefined8 *)(lVar11 + -0x20) = *(undefined8 *)(lVar6 + 0x40);
        *(undefined8 *)(lVar11 + -0x28) = uVar19;
        *(undefined8 *)(lVar11 + -0x18) = *(undefined8 *)(lVar6 + 0x48);
        *(undefined8 *)(lVar6 + 0x38) = 0;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        *(undefined8 *)(lVar6 + 0x48) = 0;
        lVar6 = *plVar18;
        *(undefined8 *)(lVar11 + -0xb) = *(undefined8 *)((long)puVar17 + 0x55);
        *(long *)(lVar11 + -0x10) = lVar6;
        local_f0 = local_f0 - 1;
        uVar7 = local_e8 + local_f0;
        local_e8 = local_e8 + 1;
        goto LAB_00eb1284;
      case 0xfffffc1f:
switchD_00eb1178_caseD_fffffc1f:
        uVar7 = (local_e8 + local_f0) - 1;
LAB_00eb1284:
        uStack_90._5_3_ = uVar2;
        uVar2 = uStack_90._5_3_;
        lVar6 = puStack_108[uVar7 / 0x2a];
        uVar7 = uVar7 % 0x2a;
        pvVar3 = *(void **)(lVar6 + uVar7 * 0x60 + 0x38);
        plVar5 = uStack_90;
        if (pvVar3 != (void *)0x0) {
          *(void **)(lVar6 + uVar7 * 0x60 + 0x40) = pvVar3;
          uStack_90._5_3_ = uVar2;
          operator_delete(pvVar3);
          plVar5 = uStack_90;
          uVar2 = uStack_90._5_3_;
        }
        uStack_90._5_3_ = uVar2;
        uStack_90 = plVar5;
        uVar2 = uStack_90._5_3_;
        pvVar3 = *(void **)(lVar6 + uVar7 * 0x60 + 0x20);
        plVar5 = uStack_90;
        if (pvVar3 != (void *)0x0) {
          *(void **)(lVar6 + uVar7 * 0x60 + 0x28) = pvVar3;
          uStack_90._5_3_ = uVar2;
          operator_delete(pvVar3);
          plVar5 = uStack_90;
          uVar2 = uStack_90._5_3_;
        }
        uStack_90._5_3_ = uVar2;
        uStack_90 = plVar5;
        uVar2 = uStack_90._5_3_;
        lVar6 = local_e8 + local_f0;
        lVar8 = 0;
        if ((long)local_100 - (long)puStack_108 != 0) {
          lVar8 = ((long)local_100 - (long)puStack_108 >> 3) * 0x2a + -1;
        }
        local_e8 = local_e8 + -1;
        plVar5 = uStack_90;
        if (0x53 < (lVar8 - lVar6) + 1U) {
          uStack_90._5_3_ = uVar2;
          operator_delete((void *)local_100[-1]);
          plVar5 = uStack_90;
          local_100 = local_100 + -1;
          uVar2 = uStack_90._5_3_;
        }
switchD_00eb1178_caseD_fffffc19:
        uStack_90._5_3_ = uVar2;
        uStack_90 = plVar5;
        uVar2 = uStack_90._5_3_;
        plVar5 = uStack_90;
        break;
      case 0xfffffc20:
        uStack_d8 = (undefined4)puVar17[1];
        uStack_d4 = (undefined4)((ulong)puVar17[1] >> 0x20);
        local_e0 = (undefined4)*puVar17;
        uStack_dc = (undefined4)((ulong)*puVar17 >> 0x20);
        uStack_c8 = (undefined4)puVar17[3];
        uStack_c4 = (undefined4)((ulong)puVar17[3] >> 0x20);
        uStack_d0 = (undefined4)puVar17[2];
        uStack_cc = (undefined4)((ulong)puVar17[2] >> 0x20);
        vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
        ::vector((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                  *)&local_c0,(vector *)(lVar6 + uVar7 * 0x60 + 0x20));
        plVar5 = uStack_90;
        vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
        ::vector((vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
                  *)&local_a8,(vector *)(lVar6 + uVar7 * 0x60 + 0x38));
        uStack_90 = plVar5;
        plVar5 = uStack_90;
        uStack_88 = (undefined5)((ulong)*(undefined8 *)((long)puVar17 + 0x55) >> 0x18);
        uStack_90._5_3_ = (undefined3)((ulong)*plVar18 >> 0x28);
        (**(code **)(*(long *)*plVar18 + 0x18))((long *)*plVar18,1,puVar17);
        uStack_90 = plVar5;
        plVar5 = uStack_90;
        (**(code **)(*plVar5 + 0x18))(plVar5,0,&local_e0);
        uStack_90 = plVar5;
        plVar5 = uStack_90;
        uVar7 = 0;
        if ((long)local_100 - (long)puStack_108 != 0) {
          uVar7 = ((long)local_100 - (long)puStack_108 >> 3) * 0x2a - 1;
        }
        uVar9 = local_e8 + local_f0;
        if (uVar7 == uVar9) {
          deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
          __add_back_capacity((deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                               *)&local_110);
          uStack_90 = plVar5;
          plVar5 = uStack_90;
          uVar9 = local_f0 + local_e8;
        }
        uStack_90 = plVar5;
        uVar2 = uStack_90._5_3_;
        if (local_100 == puStack_108) {
          puVar17 = (undefined8 *)0x0;
        }
        else {
          puVar17 = (undefined8 *)(puStack_108[uVar9 / 0x2a] + (uVar9 % 0x2a) * 0x60);
        }
        puVar17[5] = 0;
        puVar17[6] = 0;
        puVar17[4] = 0;
        puVar17[1] = CONCAT44(uStack_d4,uStack_d8);
        *puVar17 = CONCAT44(uStack_dc,local_e0);
        puVar17[3] = CONCAT44(uStack_c4,uStack_c8);
        puVar17[2] = CONCAT44(uStack_cc,uStack_d0);
        puVar17[5] = uStack_b8;
        puVar17[4] = local_c0;
        puVar17[6] = local_b0;
        puVar17[7] = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        puVar17[8] = 0;
        puVar17[9] = 0;
        puVar17[8] = uStack_a0;
        puVar17[7] = local_a8;
        puVar17[9] = local_98;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        *(ulong *)((long)puVar17 + 0x55) = CONCAT53(uStack_88,uVar2);
        puVar17[10] = CONCAT38(uVar2,uStack_90);
        local_e8 = local_e8 + 1;
        plVar5 = uStack_90;
      }
      uStack_90 = plVar5;
      if (local_e8 == 0) {
        uStack_90._5_3_ = uVar2;
        if (bVar12) {
          plVar5 = (long *)*param_3;
          *plVar5 = param_1;
          plVar5[1] = param_1 + local_138;
          *(undefined1 *)(plVar5 + 2) = 1;
        }
        goto LAB_00eb15b8;
      }
      uVar14 = uVar14 + 1;
    } while (((uVar14 & 0xfff) != 0) || ((int)(uVar14 >> 0xc) < (int)lVar13));
LAB_00eb1640:
    uStack_90._5_3_ = uVar2;
    FUN_00eaaa78();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

