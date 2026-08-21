
/* WARNING: Type propagation algorithm not settling */

undefined8 cocos2dx_lua_loader(lua_State *param_1)

{
  char *pcVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  size_t sVar4;
  long lVar5;
  basic_string *pbVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  void *pvVar12;
  long *plVar13;
  void *pvVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  basic_string *pbVar18;
  byte bVar19;
  ulong uVar20;
  void *pvVar21;
  ulong uVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  long lVar27;
  undefined8 uVar28;
  LuaStack *this;
  basic_string *pbVar29;
  ulong uVar30;
  char *pcVar31;
  ulong local_108;
  basic_string *pbStack_100;
  char *local_f8;
  ulong local_f0;
  basic_string *pbStack_e8;
  char *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [8];
  ulong local_d0;
  void *local_c8;
  Data aDStack_c0 [16];
  ulong local_b0;
  basic_string *pbStack_a8;
  char *local_a0;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (((DAT_01781d80 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_01781d80), iVar9 != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01781d68,".luac");
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01781d68,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01781d80);
  }
  if (((DAT_01781da0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_01781da0), iVar9 != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01781d88,".lua");
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01781d88,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01781da0);
  }
  pcVar10 = (char *)luaL_checklstring(param_1,1,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,pcVar10);
  uVar20 = local_90;
  pcVar31 = (char *)((ulong)&local_90 | 1);
  uVar17 = local_90 >> 1 & 0x7f;
  pcVar10 = pcVar31;
  if ((local_90 & 1) != 0) {
    uVar17 = uStack_88;
    pcVar10 = local_80;
  }
  bVar8 = (DAT_01781d68 & 1) != 0;
  uVar30 = (ulong)(DAT_01781d68 >> 1);
  if (bVar8) {
    uVar30 = DAT_01781d70;
  }
  pcVar11 = pcVar10 + uVar17;
  lVar16 = DAT_01781d78;
  if (!bVar8) {
    lVar16 = 0x1781d69;
  }
  pcVar15 = pcVar11;
  if ((uVar30 != 0) && ((long)uVar30 <= (long)uVar17)) {
    pcVar24 = pcVar11;
    while (pcVar23 = pcVar24, pcVar10 + (uVar30 - 1) != pcVar23) {
      pcVar24 = pcVar23 + -1;
      if (*pcVar24 == *(char *)(lVar16 + uVar30 + -1)) {
        lVar27 = 0;
        do {
          if (1 - uVar30 == lVar27) {
            pcVar15 = pcVar23 + lVar27 + -1;
            goto LAB_007d468c;
          }
          lVar7 = lVar27 + -2;
          pcVar25 = (char *)(lVar16 + uVar30 + -2 + lVar27);
          lVar27 = lVar27 + -1;
        } while (pcVar23[lVar7] == *pcVar25);
      }
    }
  }
LAB_007d468c:
  uVar22 = (long)pcVar15 - (long)pcVar10;
  if (((uVar22 == uVar17 - uVar30) && (uVar30 == 0 || pcVar15 != pcVar11)) &&
     (uVar22 != 0xffffffffffffffff)) {
    if (uVar22 <= uVar17) {
      uVar17 = uVar22;
    }
    pbStack_a8 = (basic_string *)0x0;
    local_a0 = (char *)0x0;
    local_b0 = 0;
    if (0xffffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (0x16 < uVar17) {
      uVar30 = uVar17 + 0x10 & 0xfffffffffffffff0;
      pcVar11 = operator_new(uVar30);
      goto LAB_007d4818;
    }
LAB_007d47e0:
    local_a0 = (char *)0x0;
    pbStack_a8 = (basic_string *)0x0;
    pcVar11 = (char *)((ulong)&local_b0 | 1);
    local_b0 = (ulong)(byte)((int)uVar17 << 1);
    if (uVar17 != 0) goto LAB_007d4828;
    *pcVar11 = '\0';
  }
  else {
    lVar16 = DAT_01781d98;
    uVar30 = DAT_01781d90;
    if ((DAT_01781d88 & 1) == 0) {
      lVar16 = 0x1781d89;
      uVar30 = (ulong)(DAT_01781d88 >> 1);
    }
    pcVar15 = pcVar11;
    if ((uVar30 != 0) && ((long)uVar30 <= (long)uVar17)) {
      pcVar24 = pcVar11;
      while (pcVar23 = pcVar24, pcVar10 + (uVar30 - 1) != pcVar23) {
        pcVar24 = pcVar23 + -1;
        if (*pcVar24 == *(char *)(lVar16 + uVar30 + -1)) {
          lVar27 = 0;
          do {
            if (1 - uVar30 == lVar27) {
              pcVar15 = pcVar23 + lVar27 + -1;
              goto LAB_007d4790;
            }
            lVar7 = lVar27 + -2;
            pcVar25 = (char *)(lVar16 + uVar30 + -2 + lVar27);
            lVar27 = lVar27 + -1;
          } while (pcVar23[lVar7] == *pcVar25);
        }
      }
    }
LAB_007d4790:
    uVar22 = (long)pcVar15 - (long)pcVar10;
    if (((uVar22 != uVar17 - uVar30) || (uVar30 != 0 && pcVar15 == pcVar11)) ||
       (uVar22 == 0xffffffffffffffff)) goto LAB_007d487c;
    if (uVar22 <= uVar17) {
      uVar17 = uVar22;
    }
    pbStack_a8 = (basic_string *)0x0;
    local_a0 = (char *)0x0;
    local_b0 = 0;
    if (0xffffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar17 < 0x17) goto LAB_007d47e0;
    uVar30 = uVar17 + 0x10 & 0xfffffffffffffff0;
    pcVar11 = operator_new(uVar30);
LAB_007d4818:
    local_b0 = uVar30 | 1;
    pbStack_a8 = (basic_string *)uVar17;
    local_a0 = pcVar11;
LAB_007d4828:
    memcpy(pcVar11,pcVar10,uVar17);
    pcVar11[uVar17] = '\0';
  }
  if ((uVar20 & 1) != 0) {
    *local_80 = '\0';
    uStack_88 = 0;
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  local_80 = local_a0;
  uStack_88 = (ulong)pbStack_a8;
  local_90 = local_b0;
LAB_007d487c:
  pcVar10 = pcVar31;
  sVar4 = local_90 >> 1 & 0x7f;
  if ((local_90 & 1) != 0) {
    pcVar10 = local_80;
    sVar4 = uStack_88;
  }
  if ((sVar4 != 0) && (pvVar12 = memchr(pcVar10,0x2e,sVar4), pvVar12 != (void *)0x0)) {
    uVar17 = (long)pvVar12 - (long)pcVar10;
    while (uVar17 != 0xffffffffffffffff) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      replace((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_90,uVar17,1,"/",1);
      pcVar10 = pcVar31;
      sVar4 = local_90 >> 1 & 0x7f;
      if ((local_90 & 1) != 0) {
        pcVar10 = local_80;
        sVar4 = uStack_88;
      }
      if ((sVar4 == 0) || (pvVar12 = memchr(pcVar10,0x2e,sVar4), pvVar12 == (void *)0x0)) break;
      uVar17 = (long)pvVar12 - (long)pcVar10;
    }
  }
  cocos2d::Data::Data(aDStack_c0);
  pbStack_a8 = (basic_string *)0x0;
  local_a0 = (char *)0x0;
  local_b0 = 0;
  plVar13 = (long *)cocos2d::FileUtils::getInstance();
  lua_getfield(param_1,0xffffd8ee,"package");
  lua_getfield(param_1,0xffffffff,&DAT_0145a62a);
  pcVar10 = (char *)lua_tolstring(param_1,0xffffffff,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d8,pcVar10);
  lua_settop(param_1,0xfffffffe);
  uVar17 = local_d0;
  bVar3 = local_d8[0];
  pvVar21 = (void *)((ulong)local_d8 | 1);
  pvVar12 = pvVar21;
  sVar4 = (ulong)((byte)local_d8[0] >> 1);
  if (((byte)local_d8[0] & 1) != 0) {
    pvVar12 = local_c8;
    sVar4 = local_d0;
  }
  if (sVar4 == 0) {
    uVar20 = 0xffffffffffffffff;
  }
  else {
    pvVar14 = memchr(pvVar12,0x3b,sVar4);
    uVar20 = (long)pvVar14 - (long)pvVar12;
    if (pvVar14 == (void *)0x0) {
      uVar20 = 0xffffffffffffffff;
    }
  }
  pcVar11 = (char *)((ulong)&local_f0 | 1);
  pcVar10 = (char *)((ulong)&local_108 | 1);
  uVar30 = 0;
  do {
    bVar19 = (byte)bVar3 & 1;
    if ((uVar20 == 0xffffffffffffffff) &&
       (uVar20 = (ulong)((byte)bVar3 >> 1), ((byte)bVar3 & 1) != 0)) {
      bVar19 = 1;
      uVar20 = uVar17;
    }
    uVar22 = (ulong)((byte)bVar3 >> 1);
    if (bVar19 != 0) {
      uVar22 = uVar17;
    }
    pbStack_e8 = (basic_string *)0x0;
    local_e0 = (char *)0x0;
    local_f0 = 0;
    if (uVar22 < uVar30) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    pvVar12 = pvVar21;
    if (bVar19 != 0) {
      pvVar12 = local_c8;
    }
    pbVar18 = (basic_string *)(uVar22 - uVar30);
    if ((basic_string *)(uVar20 - uVar30) <= (basic_string *)(uVar22 - uVar30)) {
      pbVar18 = (basic_string *)(uVar20 - uVar30);
    }
    if ((basic_string *)0xffffffffffffffef < pbVar18) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pbVar18 < (basic_string *)0x17) {
      local_f0 = (ulong)(byte)((int)pbVar18 << 1);
      pcVar15 = pcVar11;
      if (pbVar18 != (basic_string *)0x0) goto LAB_007d4a7c;
    }
    else {
      pcVar15 = operator_new((ulong)(pbVar18 + 0x10) & 0xfffffffffffffff0);
      local_f0 = (ulong)(pbVar18 + 0x10) & 0xfffffffffffffff0 | 1;
      pbStack_e8 = pbVar18;
      local_e0 = pcVar15;
LAB_007d4a7c:
      memcpy(pcVar15,(void *)((long)pvVar12 + uVar30),(size_t)pbVar18);
    }
    uVar17 = local_f0;
    pcVar15[(long)pbVar18] = '\0';
    uVar22 = local_f0 & 0xff;
    pcVar15 = pcVar11;
    if ((local_f0 & 1) != 0) {
      pcVar15 = local_e0;
    }
    bVar19 = (byte)local_f0._0_1_ & 1;
    if ((*pcVar15 == '.') && (pcVar15[1] == '/')) {
      pbStack_100 = (basic_string *)0x0;
      local_f8 = (char *)0x0;
      pbVar18 = (basic_string *)(ulong)((byte)local_f0._0_1_ >> 1);
      if ((local_f0 & 1) != 0) {
        pbVar18 = pbStack_e8;
      }
      local_108 = 0;
      if (pbVar18 < (basic_string *)0x2) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar29 = pbVar18 + -2;
      if ((basic_string *)0xffffffffffffffef < pbVar29) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (pbVar29 < (basic_string *)0x17) {
        local_108 = (ulong)(byte)((int)pbVar29 << 1);
        pcVar24 = pcVar10;
        if (pbVar29 != (basic_string *)0x0) goto LAB_007d4b30;
        *pcVar10 = '\0';
      }
      else {
        pcVar24 = operator_new((ulong)(pbVar18 + 0xe) & 0xfffffffffffffff0);
        local_108 = (ulong)(pbVar18 + 0xe) & 0xfffffffffffffff0 | 1;
        pbStack_100 = pbVar29;
        local_f8 = pcVar24;
LAB_007d4b30:
        memcpy(pcVar24,pcVar15 + 2,(size_t)pbVar29);
        pcVar24[(long)pbVar29] = '\0';
      }
      if ((uVar17 & 1) != 0) {
        *local_e0 = '\0';
        pbStack_e8 = (basic_string *)0x0;
        if ((local_f0 & 1) != 0) {
          operator_delete(local_e0);
        }
      }
      pbStack_e8 = pbStack_100;
      local_f0 = local_108;
      uVar17 = local_f0;
      local_f0._0_1_ = SUB81(local_108,0);
      uVar22 = local_108 & 0xff;
      local_e0 = local_f8;
      bVar19 = (byte)local_f0._0_1_ & 1;
    }
    local_f0 = uVar17;
    pbVar18 = (basic_string *)(uVar22 >> 1);
    pcVar15 = pcVar11;
    if (bVar19 != 0) {
      pbVar18 = pbStack_e8;
      pcVar15 = local_e0;
    }
    pcVar24 = pcVar15 + (long)pbVar18;
    lVar16 = DAT_01781d78;
    uVar17 = DAT_01781d70;
    if ((DAT_01781d68 & 1) == 0) {
      lVar16 = 0x1781d69;
      uVar17 = (ulong)(DAT_01781d68 >> 1);
    }
    pcVar23 = pcVar24;
    if ((uVar17 != 0) && ((long)uVar17 <= (long)pbVar18)) {
      pcVar25 = pcVar24;
      while (pcVar26 = pcVar25, pcVar15 + (uVar17 - 1) != pcVar26) {
        pcVar25 = pcVar26 + -1;
        if (*pcVar25 == *(char *)(lVar16 + -1 + uVar17)) {
          lVar27 = 0;
          do {
            if (1 - uVar17 == lVar27) {
              pcVar23 = pcVar26 + lVar27 + -1;
              goto LAB_007d4c3c;
            }
            lVar7 = lVar27 + -2;
            pcVar1 = (char *)(lVar16 + uVar17 + -2 + lVar27);
            lVar27 = lVar27 + -1;
          } while (pcVar26[lVar7] == *pcVar1);
        }
      }
    }
LAB_007d4c3c:
    pbVar29 = (basic_string *)(pcVar23 + -(long)pcVar15);
    if (((pbVar29 == pbVar18 + -uVar17) && (uVar17 == 0 || pcVar23 != pcVar24)) &&
       (pbVar29 != (basic_string *)0xffffffffffffffff)) {
      if (pbVar29 <= pbVar18) {
        pbVar18 = pbVar29;
      }
      pbStack_100 = (basic_string *)0x0;
      local_f8 = (char *)0x0;
      local_108 = 0;
      if ((basic_string *)0xffffffffffffffef < pbVar18) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (pbVar18 < (basic_string *)0x17) {
LAB_007d4d94:
        local_f8 = (char *)0x0;
        pbStack_100 = (basic_string *)0x0;
        local_108 = (ulong)(byte)((int)pbVar18 << 1);
        pcVar24 = pcVar10;
        if (pbVar18 != (basic_string *)0x0) goto LAB_007d4dd8;
        *pcVar10 = '\0';
      }
      else {
        uVar17 = (ulong)(pbVar18 + 0x10) & 0xfffffffffffffff0;
        local_f8 = operator_new(uVar17);
LAB_007d4dc8:
        local_108 = uVar17 | 1;
        pcVar24 = local_f8;
        pbStack_100 = pbVar18;
LAB_007d4dd8:
        memcpy(pcVar24,pcVar15,(size_t)pbVar18);
        pcVar24[(long)pbVar18] = '\0';
      }
      if ((uVar22 & 1) != 0) {
        *local_e0 = '\0';
        pbStack_e8 = (basic_string *)0x0;
        if ((local_f0 & 1) != 0) {
          operator_delete(local_e0);
        }
      }
      local_e0 = local_f8;
      pbStack_e8 = pbStack_100;
      local_f0 = local_108;
    }
    else {
      lVar16 = DAT_01781d98;
      uVar17 = DAT_01781d90;
      if ((DAT_01781d88 & 1) == 0) {
        lVar16 = 0x1781d89;
        uVar17 = (ulong)(DAT_01781d88 >> 1);
      }
      pcVar23 = pcVar24;
      if ((uVar17 != 0) && ((long)uVar17 <= (long)pbVar18)) {
        pcVar25 = pcVar24;
        while (pcVar26 = pcVar25, pcVar15 + (uVar17 - 1) != pcVar26) {
          pcVar25 = pcVar26 + -1;
          if (*pcVar25 == *(char *)(lVar16 + -1 + uVar17)) {
            lVar27 = 0;
            do {
              if (1 - uVar17 == lVar27) {
                pcVar23 = pcVar26 + lVar27 + -1;
                goto LAB_007d4d44;
              }
              lVar7 = lVar27 + -2;
              pcVar1 = (char *)(lVar16 + uVar17 + -2 + lVar27);
              lVar27 = lVar27 + -1;
            } while (pcVar26[lVar7] == *pcVar1);
          }
        }
      }
LAB_007d4d44:
      pbVar29 = (basic_string *)(pcVar23 + -(long)pcVar15);
      if (((pbVar29 == pbVar18 + -uVar17) && (uVar17 == 0 || pcVar23 != pcVar24)) &&
         (pbVar29 != (basic_string *)0xffffffffffffffff)) {
        if (pbVar29 <= pbVar18) {
          pbVar18 = pbVar29;
        }
        pbStack_100 = (basic_string *)0x0;
        local_f8 = (char *)0x0;
        local_108 = 0;
        if ((basic_string *)0xffffffffffffffef < pbVar18) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (pbVar18 < (basic_string *)0x17) goto LAB_007d4d94;
        uVar17 = (ulong)(pbVar18 + 0x10) & 0xfffffffffffffff0;
        local_f8 = operator_new(uVar17);
        goto LAB_007d4dc8;
      }
    }
    pcVar15 = pcVar11;
    pbVar18 = (basic_string *)(local_f0 >> 1 & 0x7f);
    if ((local_f0 & 1) != 0) {
      pcVar15 = local_e0;
      pbVar18 = pbStack_e8;
    }
    if (((pbVar18 != (basic_string *)0x0) &&
        (pvVar12 = memchr(pcVar15,0x3f,(size_t)pbVar18), pvVar12 != (void *)0x0)) &&
       (uVar17 = (long)pvVar12 - (long)pcVar15, uVar17 != 0xffffffffffffffff)) {
      uVar22 = uStack_88;
      bVar3 = local_90._0_1_;
      do {
        pcVar15 = pcVar31;
        uVar2 = (ulong)((byte)bVar3 >> 1);
        if (((byte)bVar3 & 1) != 0) {
          pcVar15 = local_80;
          uVar2 = uVar22;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::replace((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  &local_f0,uVar17,1,pcVar15,uVar2);
        uVar22 = uStack_88;
        bVar3 = local_90._0_1_;
        uVar2 = (ulong)((byte)local_90._0_1_ >> 1);
        if ((local_90 & 1) != 0) {
          uVar2 = uStack_88;
        }
        pbVar29 = (basic_string *)(local_f0 >> 1 & 0x7f);
        pcVar15 = pcVar11;
        if ((local_f0 & 1) != 0) {
          pbVar29 = pbStack_e8;
          pcVar15 = local_e0;
        }
        pbVar6 = (basic_string *)(uVar17 + uVar2 + 1);
        pbVar18 = pbVar29 + -(long)pbVar6;
      } while (((pbVar6 <= pbVar29 && pbVar18 != (basic_string *)0x0) &&
               (pbVar18 != (basic_string *)0x0)) &&
              ((pvVar12 = memchr(pcVar15 + (long)pbVar6,0x3f,(size_t)pbVar18),
               pvVar12 != (void *)0x0 &&
               (uVar17 = (long)pvVar12 - (long)pcVar15, uVar17 != 0xffffffffffffffff))));
    }
    std::__ndk1::operator+((__ndk1 *)&local_f0,(basic_string *)&DAT_01781d68,pbVar18);
    if ((local_b0 & 1) != 0) {
      *local_a0 = '\0';
      pbStack_a8 = (basic_string *)0x0;
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
    }
    pbStack_a8 = pbStack_100;
    local_b0 = local_108;
    local_a0 = local_f8;
    uVar17 = (**(code **)(*plVar13 + 0x128))(plVar13,&local_b0);
    if ((uVar17 & 1) == 0) {
      std::__ndk1::operator+((__ndk1 *)&local_f0,(basic_string *)&DAT_01781d88,pbVar18);
      if ((local_b0 & 1) != 0) {
        *local_a0 = '\0';
        pbStack_a8 = (basic_string *)0x0;
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
      pbStack_a8 = pbStack_100;
      local_b0 = local_108;
      local_a0 = local_f8;
      uVar17 = (**(code **)(*plVar13 + 0x128))(plVar13,&local_b0);
      if ((uVar17 & 1) != 0) {
        (**(code **)(*plVar13 + 0x28))(&local_108,plVar13,&local_b0);
        cocos2d::Data::operator=(aDStack_c0,(Data *)&local_108);
        goto LAB_007d5070;
      }
      pbVar18 = (basic_string *)(local_f0 >> 1 & 0x7f);
      pcVar15 = pcVar11;
      if ((local_f0 & 1) != 0) {
        pbVar18 = pbStack_e8;
        pcVar15 = local_e0;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_b0,pcVar15,(ulong)pbVar18);
      uVar17 = (**(code **)(*plVar13 + 0x128))(plVar13,&local_b0);
      if ((uVar17 & 1) != 0) {
        (**(code **)(*plVar13 + 0x28))(&local_108,plVar13,&local_b0);
        cocos2d::Data::operator=(aDStack_c0,(Data *)&local_108);
        goto LAB_007d5070;
      }
      uVar30 = uVar20 + 1;
      uVar17 = (ulong)((byte)local_d8[0] >> 1);
      pvVar12 = pvVar21;
      if (((byte)local_d8[0] & 1) != 0) {
        uVar17 = local_d0;
        pvVar12 = local_c8;
      }
      sVar4 = uVar17 - uVar30;
      if (uVar17 < uVar30 || sVar4 == 0) {
        bVar8 = true;
        uVar20 = 0xffffffffffffffff;
      }
      else {
        if (sVar4 == 0) {
          pvVar14 = (void *)0x0;
        }
        else {
          pvVar14 = memchr((void *)((long)pvVar12 + uVar30),0x3b,sVar4);
        }
        uVar20 = (long)pvVar14 - (long)pvVar12;
        if (pvVar14 == (void *)0x0) {
          uVar20 = 0xffffffffffffffff;
        }
        bVar8 = true;
      }
    }
    else {
      (**(code **)(*plVar13 + 0x28))(&local_108,plVar13,&local_b0);
      cocos2d::Data::operator=(aDStack_c0,(Data *)&local_108);
LAB_007d5070:
      cocos2d::Data::~Data((Data *)&local_108);
      bVar8 = false;
    }
    if ((local_f0 & 1) != 0) {
      operator_delete(local_e0);
    }
    if (!bVar8) break;
    uVar22 = (ulong)((byte)local_d8[0] >> 1);
    if (((byte)local_d8[0] & 1) != 0) {
      uVar22 = local_d0;
    }
    uVar17 = local_d0;
    bVar3 = local_d8[0];
  } while (uVar30 < uVar22);
  lVar16 = cocos2d::Data::getSize(aDStack_c0);
  if (lVar16 < 1) {
    uVar28 = 0;
  }
  else {
    lVar16 = cocos2d::LuaEngine::getInstance();
    this = *(LuaStack **)(lVar16 + 8);
    pcVar31 = (char *)cocos2d::Data::getBytes(aDStack_c0);
    iVar9 = cocos2d::Data::getSize(aDStack_c0);
    pcVar10 = (char *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      pcVar10 = local_a0;
    }
    cocos2d::LuaStack::luaLoadBuffer(this,param_1,pcVar31,iVar9,pcVar10);
    uVar28 = 1;
  }
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  cocos2d::Data::~Data(aDStack_c0);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar28;
}

