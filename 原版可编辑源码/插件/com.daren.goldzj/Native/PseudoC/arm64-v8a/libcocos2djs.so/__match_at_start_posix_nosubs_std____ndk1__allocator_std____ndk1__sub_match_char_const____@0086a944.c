
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
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  size_t sVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  bool bVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar19;
  undefined8 *puVar20;
  uint uVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
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
  void *local_c0;
  void *pvStack_b8;
  void *local_b0;
  void *local_a8;
  void *pvStack_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined4 local_78;
  undefined1 uStack_74;
  long local_70;
  undefined8 *puVar18;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uStack_f8 = 0;
  local_100 = (undefined8 *)0x0;
  local_e8 = 0;
  local_f0 = 0;
  puStack_108 = (undefined8 *)0x0;
  local_110 = (void *)0x0;
  lVar16 = *(long *)(this + 0x28);
  if (lVar16 == 0) {
    bVar15 = false;
  }
  else {
    lVar7 = param_2 - param_1;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    local_78 = 0;
    local_80 = 0;
    uStack_7b = 0;
    deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
    __add_back_capacity((deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                         *)&local_110);
    uVar2 = uStack_90._5_3_;
    if (local_100 == puStack_108) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)
               (puStack_108[(local_f0 + local_e8) / 0x2a] + ((local_f0 + local_e8) % 0x2a) * 0x60);
    }
    *puVar8 = 0;
    *(undefined8 *)(puVar8 + 0xe) = 0;
    *(undefined8 *)(puVar8 + 0xc) = 0;
    *(undefined8 *)(puVar8 + 0x12) = 0;
    *(undefined8 *)(puVar8 + 0x10) = 0;
    *(ulong *)(puVar8 + 6) = CONCAT44(uStack_c8,uStack_cc);
    *(ulong *)(puVar8 + 4) = CONCAT44(uStack_d0,uStack_d4);
    *(undefined8 *)(puVar8 + 10) = 0;
    *(undefined8 *)(puVar8 + 8) = 0;
    *(ulong *)(puVar8 + 3) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(puVar8 + 1) = CONCAT44(uStack_dc,local_e0);
    *(ulong *)((long)puVar8 + 0x55) = CONCAT17(uStack_74,CONCAT43(local_78,uStack_7b));
    *(ulong *)(puVar8 + 0x14) = CONCAT35(uStack_7b,local_80);
    lVar9 = local_e8 + 1;
    uVar12 = (local_f0 + local_e8) / 0x2a;
    lVar14 = puStack_108[uVar12];
    lVar10 = ((local_f0 + local_e8) % 0x2a) * 0x60;
    *(undefined4 *)(lVar14 + lVar10) = 0;
    *(long *)((undefined4 *)(lVar14 + lVar10) + 2) = param_1;
    *(long *)(puStack_108[uVar12] + lVar10 + 0x10) = param_1;
    *(long *)(puStack_108[uVar12] + lVar10 + 0x18) = param_2;
    this_00 = (vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
               *)(puStack_108[uVar12] + lVar10 + 0x38);
    lVar14 = *(long *)this_00;
    uVar11 = (ulong)*(uint *)(this + 0x20);
    plVar13 = (long *)(puStack_108[uVar12] + lVar10 + 0x40);
    uVar12 = *plVar13 - lVar14 >> 4;
    local_e8 = lVar9;
    if (uVar12 < uVar11) {
      plVar13 = uStack_90;
      uStack_90._5_3_ = uVar2;
      vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
      ::__append(this_00,uVar11 - uVar12);
      plVar3 = uStack_90;
      uVar2 = uStack_90._5_3_;
    }
    else {
      plVar3 = uStack_90;
      if (uVar12 != uVar11) {
        *plVar13 = lVar14 + uVar11 * 0x10;
      }
    }
    uStack_90._5_3_ = uVar2;
    uStack_90 = plVar3;
    uVar2 = uStack_90._5_3_;
    uVar11 = (local_e8 + local_f0) - 1;
    uVar12 = uVar11 / 0x2a;
    local_138 = 0;
    bVar15 = false;
    lVar9 = (uVar11 % 0x2a) * 0x60;
    *(long *)(puStack_108[uVar12] + lVar9 + 0x50) = lVar16;
    uVar21 = 1;
    lVar9 = puStack_108[uVar12] + lVar9;
    *(byte *)(lVar9 + 0x5c) = param_6 & 1;
    *(uint *)(lVar9 + 0x58) = param_5;
    do {
      uStack_90._5_3_ = uVar2;
      uVar2 = uStack_90._5_3_;
      if (((uVar21 & 0xfff) == 0) && ((int)lVar7 <= (int)(uVar21 >> 0xc))) {
LAB_0086b210:
        uStack_90._5_3_ = uVar2;
        FUN_00864d40();
        uVar2 = uStack_90._5_3_;
LAB_0086b214:
        uStack_90._5_3_ = uVar2;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar11 = (local_e8 + local_f0) - 1;
      lVar16 = puStack_108[uVar11 / 0x2a];
      uVar11 = uVar11 % 0x2a;
      puVar20 = (undefined8 *)(lVar16 + uVar11 * 0x60);
      plVar19 = puVar20 + 10;
      plVar3 = (long *)*plVar19;
      plVar13 = uStack_90;
      if (plVar3 != (long *)0x0) {
        uStack_90._5_3_ = uVar2;
        (**(code **)(*plVar3 + 0x10))(plVar3,puVar20);
        plVar13 = uStack_90;
        uVar2 = uStack_90._5_3_;
      }
      uStack_90._5_3_ = uVar2;
      uStack_90 = plVar13;
      uVar2 = uStack_90._5_3_;
      plVar13 = uStack_90;
      uStack_90._5_3_ = uVar2;
      switch(*(undefined4 *)puVar20) {
      case 0xfffffc18:
        if ((((param_5 >> 5 & 1) != 0) && (*(long *)(lVar16 + uVar11 * 0x60 + 0x10) == param_1)) ||
           (((param_5 >> 0xc & 1) != 0 && (*(long *)(lVar16 + uVar11 * 0x60 + 0x10) != param_2))))
        goto switchD_0086ac08_caseD_fffffc1f;
        lVar16 = lVar16 + uVar11 * 0x60;
        lVar16 = *(long *)(lVar16 + 0x10) - *(long *)(lVar16 + 8);
        if (lVar16 <= local_138 && !(bool)(bVar15 ^ 1)) {
          lVar16 = local_138;
        }
        if (lVar16 == lVar7) {
          __deque_base<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
          ::clear((__deque_base<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                   *)&local_110);
          plVar13 = uStack_90;
          bVar15 = true;
          local_138 = lVar7;
          uVar2 = uStack_90._5_3_;
        }
        else {
          uVar11 = (local_e8 + local_f0) - 1;
          lVar9 = puStack_108[uVar11 / 0x2a];
          uVar11 = uVar11 % 0x2a;
          pvVar4 = *(void **)(lVar9 + uVar11 * 0x60 + 0x38);
          if (pvVar4 != (void *)0x0) {
            *(void **)(lVar9 + uVar11 * 0x60 + 0x40) = pvVar4;
            operator_delete(pvVar4);
            plVar13 = uStack_90;
            uVar2 = uStack_90._5_3_;
          }
          uStack_90._5_3_ = uVar2;
          uStack_90 = plVar13;
          uVar2 = uStack_90._5_3_;
          pvVar4 = *(void **)(lVar9 + uVar11 * 0x60 + 0x20);
          plVar13 = uStack_90;
          if (pvVar4 != (void *)0x0) {
            *(void **)(lVar9 + uVar11 * 0x60 + 0x28) = pvVar4;
            uStack_90._5_3_ = uVar2;
            operator_delete(pvVar4);
            plVar13 = uStack_90;
            uVar2 = uStack_90._5_3_;
          }
          uStack_90._5_3_ = uVar2;
          uStack_90 = plVar13;
          uVar2 = uStack_90._5_3_;
          lVar10 = local_e8 + -1;
          lVar14 = 1 - local_e8;
          lVar9 = 0;
          if ((long)local_100 - (long)puStack_108 != 0) {
            lVar9 = ((long)local_100 - (long)puStack_108 >> 3) * 0x2a + -1;
          }
          local_e8 = lVar10;
          plVar13 = uStack_90;
          if (0x53 < (lVar14 - local_f0) + lVar9) {
            uStack_90._5_3_ = uVar2;
            operator_delete((void *)local_100[-1]);
            plVar13 = uStack_90;
            local_100 = local_100 + -1;
            uVar2 = uStack_90._5_3_;
          }
          uStack_90._5_3_ = uVar2;
          uStack_90 = plVar13;
          uVar2 = uStack_90._5_3_;
          bVar15 = true;
          local_138 = lVar16;
          plVar13 = uStack_90;
        }
        break;
      case 0xfffffc19:
      case 0xfffffc1e:
      case 0xfffffc21:
        goto switchD_0086ac08_caseD_fffffc19;
      default:
        FUN_00864d4c();
        uVar2 = uStack_90._5_3_;
        goto LAB_0086b210;
      case 0xfffffc1d:
        if (local_f0 == 0) {
          deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
          __add_front_capacity
                    ((deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                      *)&local_110);
          plVar13 = uStack_90;
          uVar2 = uStack_90._5_3_;
        }
        uStack_90._5_3_ = uVar2;
        uStack_90 = plVar13;
        uVar2 = uStack_90._5_3_;
        lVar9 = puStack_108[local_f0 / 0x2a];
        if (local_100 == puStack_108) {
          lVar10 = 0;
          if (lVar9 == 0) goto LAB_0086ac94;
        }
        else {
          lVar10 = lVar9 + (local_f0 % 0x2a) * 0x60;
          if (lVar10 == lVar9) {
LAB_0086ac94:
            lVar10 = (puStack_108 + local_f0 / 0x2a)[-1] + 0xfc0;
          }
        }
        uVar24 = puVar20[1];
        uVar23 = *puVar20;
        uVar26 = puVar20[3];
        uVar25 = puVar20[2];
        lVar16 = lVar16 + uVar11 * 0x60;
        *(undefined8 *)(lVar10 + -0x38) = 0;
        *(undefined8 *)(lVar10 + -0x30) = 0;
        *(undefined8 *)(lVar10 + -0x40) = 0;
        *(undefined8 *)(lVar10 + -0x58) = uVar24;
        *(undefined8 *)(lVar10 + -0x60) = uVar23;
        *(undefined8 *)(lVar10 + -0x48) = uVar26;
        *(undefined8 *)(lVar10 + -0x50) = uVar25;
        uVar23 = *(undefined8 *)(lVar16 + 0x20);
        *(undefined8 *)(lVar10 + -0x38) = *(undefined8 *)(lVar16 + 0x28);
        *(undefined8 *)(lVar10 + -0x40) = uVar23;
        *(undefined8 *)(lVar10 + -0x30) = *(undefined8 *)(lVar16 + 0x30);
        *(undefined8 *)(lVar16 + 0x28) = 0;
        *(undefined8 *)(lVar16 + 0x30) = 0;
        *(undefined8 *)(lVar16 + 0x20) = 0;
        *(undefined8 *)(lVar10 + -0x20) = 0;
        *(undefined8 *)(lVar10 + -0x18) = 0;
        *(undefined8 *)(lVar10 + -0x28) = 0;
        uVar23 = *(undefined8 *)(lVar16 + 0x38);
        *(undefined8 *)(lVar10 + -0x20) = *(undefined8 *)(lVar16 + 0x40);
        *(undefined8 *)(lVar10 + -0x28) = uVar23;
        *(undefined8 *)(lVar10 + -0x18) = *(undefined8 *)(lVar16 + 0x48);
        *(undefined8 *)(lVar16 + 0x40) = 0;
        *(undefined8 *)(lVar16 + 0x48) = 0;
        *(undefined8 *)(lVar16 + 0x38) = 0;
        lVar16 = *plVar19;
        *(undefined8 *)(lVar10 + -0xb) = *(undefined8 *)((long)puVar20 + 0x55);
        *(long *)(lVar10 + -0x10) = lVar16;
        local_f0 = local_f0 - 1;
        uVar11 = local_e8 + local_f0;
        local_e8 = local_e8 + 1;
        goto LAB_0086ad10;
      case 0xfffffc1f:
switchD_0086ac08_caseD_fffffc1f:
        uVar11 = (local_e8 + local_f0) - 1;
LAB_0086ad10:
        uStack_90._5_3_ = uVar2;
        uVar2 = uStack_90._5_3_;
        lVar16 = puStack_108[uVar11 / 0x2a];
        uVar11 = uVar11 % 0x2a;
        pvVar4 = *(void **)(lVar16 + uVar11 * 0x60 + 0x38);
        plVar13 = uStack_90;
        if (pvVar4 != (void *)0x0) {
          *(void **)(lVar16 + uVar11 * 0x60 + 0x40) = pvVar4;
          uStack_90._5_3_ = uVar2;
          operator_delete(pvVar4);
          plVar13 = uStack_90;
          uVar2 = uStack_90._5_3_;
        }
        uStack_90._5_3_ = uVar2;
        uStack_90 = plVar13;
        uVar2 = uStack_90._5_3_;
        pvVar4 = *(void **)(lVar16 + uVar11 * 0x60 + 0x20);
        plVar13 = uStack_90;
        if (pvVar4 != (void *)0x0) {
          *(void **)(lVar16 + uVar11 * 0x60 + 0x28) = pvVar4;
          uStack_90._5_3_ = uVar2;
          operator_delete(pvVar4);
          plVar13 = uStack_90;
          uVar2 = uStack_90._5_3_;
        }
        uStack_90._5_3_ = uVar2;
        uStack_90 = plVar13;
        uVar2 = uStack_90._5_3_;
        lVar9 = local_e8 + -1;
        lVar10 = 1 - local_e8;
        lVar16 = 0;
        if ((long)local_100 - (long)puStack_108 != 0) {
          lVar16 = ((long)local_100 - (long)puStack_108 >> 3) * 0x2a + -1;
        }
        local_e8 = lVar9;
        plVar13 = uStack_90;
        if (0x53 < (lVar10 - local_f0) + lVar16) {
          uStack_90._5_3_ = uVar2;
          operator_delete((void *)local_100[-1]);
          plVar13 = uStack_90;
          local_100 = local_100 + -1;
          uVar2 = uStack_90._5_3_;
        }
switchD_0086ac08_caseD_fffffc19:
        uStack_90._5_3_ = uVar2;
        uStack_90 = plVar13;
        uVar2 = uStack_90._5_3_;
        plVar13 = uStack_90;
        break;
      case 0xfffffc20:
        lVar9 = lVar16 + uVar11 * 0x60;
        uStack_d8 = (undefined4)puVar20[1];
        uStack_d4 = (undefined4)((ulong)puVar20[1] >> 0x20);
        local_e0 = (undefined4)*puVar20;
        uStack_dc = (undefined4)((ulong)*puVar20 >> 0x20);
        uStack_c8 = (undefined4)puVar20[3];
        uStack_c4 = (undefined4)((ulong)puVar20[3] >> 0x20);
        uStack_d0 = (undefined4)puVar20[2];
        uStack_cc = (undefined4)((ulong)puVar20[2] >> 0x20);
        pvStack_b8 = (void *)0x0;
        local_b0 = (void *)0x0;
        local_c0 = (void *)0x0;
        plVar3 = (long *)(lVar9 + 0x20);
        plVar22 = (long *)(lVar9 + 0x28);
        uVar12 = *plVar22 - *plVar3;
        if (uVar12 != 0) {
          if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar12 >> 3) * -0x5555555555555555))
          goto LAB_0086b214;
          pvVar4 = operator_new(uVar12);
          plVar13 = uStack_90;
          local_b0 = (void *)((long)pvVar4 + ((long)uVar12 >> 3) * 8);
          pvVar5 = (void *)*plVar3;
          sVar6 = *plVar22 - (long)pvVar5;
          local_c0 = pvVar4;
          pvStack_b8 = pvVar4;
          uVar2 = uStack_90._5_3_;
          if (0 < (long)sVar6) {
            memcpy(pvVar4,pvVar5,sVar6);
            uStack_90 = plVar13;
            plVar13 = uStack_90;
            pvStack_b8 = (void *)((long)pvVar4 + (sVar6 / 0x18) * 0x18);
            uVar2 = uStack_90._5_3_;
          }
        }
        uStack_90._5_3_ = uVar2;
        uStack_90 = plVar13;
        uVar2 = uStack_90._5_3_;
        lVar16 = lVar16 + uVar11 * 0x60;
        pvStack_a0 = (void *)0x0;
        local_98 = (void *)0x0;
        local_a8 = (void *)0x0;
        plVar3 = (long *)(lVar16 + 0x38);
        plVar22 = (long *)(lVar16 + 0x40);
        uVar11 = *plVar22 - *plVar3;
        plVar13 = uStack_90;
        if (uVar11 != 0) {
          if ((ulong)((long)uVar11 >> 4) >> 0x3c != 0) goto LAB_0086b214;
          uStack_90._5_3_ = uVar2;
          pvVar4 = operator_new(uVar11);
          plVar13 = uStack_90;
          local_98 = (void *)((long)pvVar4 + ((long)uVar11 >> 4) * 0x10);
          pvVar5 = (void *)*plVar3;
          sVar6 = *plVar22 - (long)pvVar5;
          local_a8 = pvVar4;
          pvStack_a0 = pvVar4;
          if (0 < (long)sVar6) {
            memcpy(pvVar4,pvVar5,sVar6);
            uStack_90 = plVar13;
            pvStack_a0 = (void *)((long)pvVar4 + sVar6);
            plVar13 = uStack_90;
          }
        }
        uStack_90 = plVar13;
        plVar13 = uStack_90;
        uStack_88 = (undefined5)((ulong)*(undefined8 *)((long)puVar20 + 0x55) >> 0x18);
        uStack_90._5_3_ = (undefined3)((ulong)*plVar19 >> 0x28);
        (**(code **)(*(long *)*plVar19 + 0x18))((long *)*plVar19,1,puVar20);
        uStack_90 = plVar13;
        plVar13 = uStack_90;
        (**(code **)(*plVar13 + 0x18))(plVar13,0,&local_e0);
        uStack_90 = plVar13;
        plVar13 = uStack_90;
        uVar11 = 0;
        if ((long)local_100 - (long)puStack_108 != 0) {
          uVar11 = ((long)local_100 - (long)puStack_108 >> 3) * 0x2a - 1;
        }
        uVar12 = local_e8 + local_f0;
        if (uVar11 == uVar12) {
          deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
          __add_back_capacity((deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                               *)&local_110);
          uStack_90 = plVar13;
          plVar13 = uStack_90;
          uVar12 = local_f0 + local_e8;
        }
        uStack_90 = plVar13;
        uVar2 = uStack_90._5_3_;
        if (local_100 == puStack_108) {
          puVar20 = (undefined8 *)0x0;
        }
        else {
          puVar20 = (undefined8 *)(puStack_108[uVar12 / 0x2a] + (uVar12 % 0x2a) * 0x60);
        }
        puVar20[5] = 0;
        puVar20[6] = 0;
        puVar20[4] = 0;
        puVar20[1] = CONCAT44(uStack_d4,uStack_d8);
        *puVar20 = CONCAT44(uStack_dc,local_e0);
        puVar20[3] = CONCAT44(uStack_c4,uStack_c8);
        puVar20[2] = CONCAT44(uStack_cc,uStack_d0);
        puVar20[5] = pvStack_b8;
        puVar20[4] = local_c0;
        puVar20[6] = local_b0;
        puVar20[7] = 0;
        pvStack_b8 = (void *)0x0;
        local_b0 = (void *)0x0;
        local_c0 = (void *)0x0;
        puVar20[8] = 0;
        puVar20[9] = 0;
        puVar20[8] = pvStack_a0;
        puVar20[7] = local_a8;
        puVar20[9] = local_98;
        pvStack_a0 = (void *)0x0;
        local_98 = (void *)0x0;
        local_a8 = (void *)0x0;
        *(ulong *)((long)puVar20 + 0x55) = CONCAT53(uStack_88,uVar2);
        puVar20[10] = CONCAT38(uVar2,uStack_90);
        local_e8 = local_e8 + 1;
        plVar13 = uStack_90;
      }
      uStack_90 = plVar13;
      uVar21 = uVar21 + 1;
    } while (local_e8 != 0);
    uStack_90._5_3_ = uVar2;
    if (bVar15) {
      plVar13 = (long *)*param_3;
      *plVar13 = param_1;
      plVar13[1] = param_1 + local_138;
      *(undefined1 *)(plVar13 + 2) = 1;
    }
  }
  local_e8 = 0;
  __deque_base<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::clear
            ((__deque_base<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
              *)&local_110);
  puVar20 = local_100;
  puVar17 = puStack_108;
  if (puStack_108 != local_100) {
    do {
      puVar18 = puVar17 + 1;
      operator_delete((void *)*puVar17);
      puVar17 = puVar18;
    } while (puVar20 != puVar18);
    if (local_100 != puStack_108) {
      local_100 = (undefined8 *)
                  ((long)local_100 +
                  (~((long)local_100 + (-8 - (long)puStack_108)) & 0xfffffffffffffff8U));
    }
  }
  if (local_110 != (void *)0x0) {
    operator_delete(local_110);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return bVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

