
/* cocos2d::LuaStack::executeScriptFile(char const*) */

undefined4 cocos2d::LuaStack::executeScriptFile(char *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  long *plVar10;
  ulong uVar11;
  char *in_x1;
  basic_string *in_x2;
  basic_string *pbVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  lua_State *plVar17;
  basic_string *pbVar18;
  ulong uVar19;
  Data aDStack_b8 [16];
  byte local_a8;
  undefined7 uStack_a7;
  basic_string *pbStack_a0;
  char *local_98;
  ulong local_90;
  basic_string *pbStack_88;
  char *local_80;
  ulong local_70;
  basic_string *pbStack_68;
  char *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,in_x1);
  uVar11 = local_70;
  bVar6 = (local_70 & 1) != 0;
  pcVar1 = (char *)((ulong)&local_70 | 1);
  if (bVar6) {
    pcVar1 = local_60;
  }
  pbVar18 = (basic_string *)(local_70 >> 1 & 0x7f);
  if (bVar6) {
    pbVar18 = pbStack_68;
  }
  bVar6 = (DAT_01781d38 & 1) != 0;
  uVar19 = (ulong)(DAT_01781d38 >> 1);
  if (bVar6) {
    uVar19 = DAT_01781d40;
  }
  pcVar9 = pcVar1 + (long)pbVar18;
  puVar2 = DAT_01781d48;
  if (!bVar6) {
    puVar2 = &DAT_01781d39;
  }
  pcVar13 = pcVar9;
  if ((uVar19 != 0) && ((long)uVar19 <= (long)pbVar18)) {
    pcVar14 = pcVar9;
    while (pcVar15 = pcVar14, pcVar1 + (uVar19 - 1) != pcVar15) {
      pcVar14 = pcVar15 + -1;
      if (*pcVar14 == puVar2[uVar19 - 1]) {
        lVar16 = 0;
        do {
          if (1 - uVar19 == lVar16) {
            pcVar13 = pcVar15 + lVar16 + -1;
            goto LAB_007d23ec;
          }
          lVar4 = lVar16 + -2;
          lVar5 = lVar16 + (uVar19 - 2);
          lVar16 = lVar16 + -1;
        } while (pcVar15[lVar4] == puVar2[lVar5]);
      }
    }
  }
LAB_007d23ec:
  if ((uVar19 == 0 || pcVar13 != pcVar9) &&
     (pbVar12 = (basic_string *)(pcVar13 + -(long)pcVar1),
     pbVar12 != (basic_string *)0xffffffffffffffff)) {
    if (pbVar12 <= pbVar18) {
      pbVar18 = pbVar12;
    }
    pbStack_88 = (basic_string *)0x0;
    local_80 = (char *)0x0;
    local_90 = 0;
    if ((basic_string *)0xffffffffffffffef < pbVar18) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pbVar18 < (basic_string *)0x17) {
LAB_007d251c:
      local_80 = (char *)0x0;
      pbStack_88 = (basic_string *)0x0;
      pcVar9 = (char *)((ulong)&local_90 | 1);
      local_90 = (ulong)(byte)((int)pbVar18 << 1);
      if (pbVar18 != (basic_string *)0x0) goto LAB_007d2564;
      *pcVar9 = '\0';
    }
    else {
      uVar19 = (ulong)(pbVar18 + 0x10) & 0xfffffffffffffff0;
      pcVar9 = operator_new(uVar19);
LAB_007d2554:
      local_90 = uVar19 | 1;
      pbStack_88 = pbVar18;
      local_80 = pcVar9;
LAB_007d2564:
      in_x2 = pbVar18;
      memcpy(pcVar9,pcVar1,(size_t)pbVar18);
      pcVar9[(long)pbVar18] = '\0';
    }
    if ((uVar11 & 1) != 0) {
      *local_60 = '\0';
      pbStack_68 = (basic_string *)0x0;
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
    }
    local_60 = local_80;
    pbStack_68 = pbStack_88;
    local_70 = local_90;
  }
  else {
    puVar2 = DAT_01781d60;
    uVar19 = DAT_01781d58;
    if ((DAT_01781d50 & 1) == 0) {
      puVar2 = &DAT_01781d51;
      uVar19 = (ulong)(DAT_01781d50 >> 1);
    }
    pcVar13 = pcVar9;
    if ((uVar19 != 0) && ((long)uVar19 <= (long)pbVar18)) {
      pcVar14 = pcVar9;
      while (pcVar15 = pcVar14, pcVar1 + (uVar19 - 1) != pcVar15) {
        pcVar14 = pcVar15 + -1;
        if (*pcVar14 == puVar2[uVar19 - 1]) {
          lVar16 = 0;
          do {
            if (1 - uVar19 == lVar16) {
              pcVar13 = pcVar15 + lVar16 + -1;
              goto LAB_007d24e0;
            }
            lVar4 = lVar16 + -2;
            lVar5 = lVar16 + (uVar19 - 2);
            lVar16 = lVar16 + -1;
          } while (pcVar15[lVar4] == puVar2[lVar5]);
        }
      }
    }
LAB_007d24e0:
    pbVar12 = (basic_string *)(pcVar13 + -(long)pcVar1);
    if (pcVar13 == pcVar9 && uVar19 != 0) {
      pbVar12 = (basic_string *)0xffffffffffffffff;
    }
    if (pbVar12 == pbVar18 + -uVar19) {
      if (pbVar12 <= pbVar18) {
        pbVar18 = pbVar12;
      }
      pbStack_88 = (basic_string *)0x0;
      local_80 = (char *)0x0;
      local_90 = 0;
      if ((basic_string *)0xffffffffffffffef < pbVar18) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (pbVar18 < (basic_string *)0x17) goto LAB_007d251c;
      uVar19 = (ulong)(pbVar18 + 0x10) & 0xfffffffffffffff0;
      pcVar9 = operator_new(uVar19);
      goto LAB_007d2554;
    }
  }
  plVar10 = (long *)FileUtils::getInstance();
  std::__ndk1::operator+((__ndk1 *)&local_70,(basic_string *)&DAT_01781d38,in_x2);
  uVar11 = (**(code **)(*plVar10 + 0x128))(plVar10,&local_90);
  if ((uVar11 & 1) == 0) {
    std::__ndk1::operator+((__ndk1 *)&local_70,(basic_string *)&DAT_01781d50,in_x2);
    if ((local_90 & 1) != 0) {
      *local_80 = '\0';
      pbStack_88 = (basic_string *)0x0;
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    local_90 = CONCAT71(uStack_a7,local_a8);
    pbStack_88 = pbStack_a0;
    local_80 = local_98;
    uVar11 = (**(code **)(*plVar10 + 0x128))(plVar10,&local_90);
    if ((uVar11 & 1) != 0) {
      pbVar18 = (basic_string *)(local_90 >> 1 & 0x7f);
      pcVar1 = (char *)((ulong)&local_90 | 1);
      if ((local_90 & 1) != 0) {
        pbVar18 = pbStack_88;
        pcVar1 = local_80;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,pcVar1,(ulong)pbVar18);
    }
  }
  else {
    pbVar18 = (basic_string *)(local_90 >> 1 & 0x7f);
    pcVar1 = (char *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      pbVar18 = pbStack_88;
      pcVar1 = local_80;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_70,pcVar1,(ulong)pbVar18);
  }
  (**(code **)(*plVar10 + 0x50))(&local_a8,plVar10,&local_70);
  (**(code **)(*plVar10 + 0x28))(aDStack_b8,plVar10,&local_a8);
  uVar11 = Data::isNull(aDStack_b8);
  if ((uVar11 & 1) == 0) {
    plVar17 = *(lua_State **)(param_1 + 0x28);
    pcVar9 = (char *)Data::getBytes(aDStack_b8);
    iVar7 = Data::getSize(aDStack_b8);
    pcVar1 = (char *)((ulong)&local_a8 | 1);
    if ((local_a8 & 1) != 0) {
      pcVar1 = local_98;
    }
    iVar7 = luaLoadBuffer((LuaStack *)param_1,plVar17,pcVar9,iVar7,pcVar1);
    if (iVar7 == 0) {
      uVar8 = (**(code **)(*(long *)param_1 + 0xc0))(param_1,0);
      goto LAB_007d2734;
    }
  }
  uVar8 = 0;
LAB_007d2734:
  Data::~Data(aDStack_b8);
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

