
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::TextFieldReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*)
    */

void __thiscall
cocostudio::TextFieldReader::setPropsWithFlatBuffers
          (TextFieldReader *this,Node *param_1,Table *param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  Table *pTVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  Table TVar11;
  byte bVar12;
  char *pcVar13;
  Color3B aCStack_118 [8];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_110 [8];
  ulong local_108;
  char *local_100;
  ulong local_f8;
  ulong uStack_f0;
  char *local_e8;
  ulong local_e0;
  ulong uStack_d8;
  char *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  char *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0;
  undefined7 uStack_9f;
  ulong uStack_98;
  char *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  char *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xf) {
    pTVar7 = (Table *)0x0;
  }
  else {
    uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xe);
    pTVar7 = (Table *)0x0;
    if (uVar9 != 0) {
      pTVar7 = param_2 + uVar9 + *(uint *)(param_2 + uVar9);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,(char *)(pTVar7 + 4));
  pcVar1 = (char *)((ulong)local_88 | 1);
  if (((byte)local_88[0] & 1) != 0) {
    pcVar1 = local_78;
  }
  cocos2d::ui::EditBox::setPlaceHolder((EditBox *)param_1,pcVar1);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xd) {
    pTVar7 = (Table *)0x0;
  }
  else {
    uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0xc);
    pTVar7 = (Table *)0x0;
    if (uVar9 != 0) {
      pTVar7 = param_2 + uVar9 + *(uint *)(param_2 + uVar9);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_a0,(char *)(pTVar7 + 4));
  if (((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x1f) ||
      (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x1e), uVar9 == 0)) ||
     (param_2[uVar9] == (Table)0x0)) {
    pcVar1 = (char *)((ulong)&local_a0 | 1);
    if (((byte)local_a0 & 1) != 0) {
      pcVar1 = local_90;
    }
    cocos2d::ui::EditBox::setText((EditBox *)param_1,pcVar1);
    goto LAB_00c9cffc;
  }
  plVar4 = (long *)LocalizationHelper::getCurrentManager();
  pcVar1 = local_90;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = (char *)0x0;
  if (((byte)local_a0 & 1) == 0) {
    local_e0 = CONCAT71(uStack_9f,local_a0);
    uStack_d8 = uStack_98;
    local_d0 = local_90;
  }
  else {
    if (0xffffffffffffffef < uStack_98) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_98 < 0x17) {
      pcVar13 = (char *)((ulong)&local_e0 | 1);
      local_e0 = (ulong)(byte)((int)uStack_98 << 1);
      if (uStack_98 != 0) goto LAB_00c9d394;
    }
    else {
      uVar9 = uStack_98 + 0x10 & 0xfffffffffffffff0;
      pcVar13 = operator_new(uVar9);
      local_e0 = uVar9 | 1;
      uStack_d8 = uStack_98;
      local_d0 = pcVar13;
LAB_00c9d394:
      memcpy(pcVar13,pcVar1,uStack_98);
    }
    pcVar13[uStack_98] = '\0';
  }
  (**(code **)(*plVar4 + 0x18))(&local_c0,plVar4,&local_e0);
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  pcVar13 = local_b0;
  uVar3 = local_c0;
  pcVar1 = (char *)((ulong)&local_c0 | 1);
  uVar9 = (ulong)((byte)local_c0._0_1_ >> 1);
  if ((local_c0 & 1) != 0) {
    pcVar1 = local_b0;
    uVar9 = uStack_b8;
  }
  bVar12 = (byte)local_c0._0_1_ & 1;
  if (0 < (long)uVar9) {
    pcVar5 = pcVar1;
    uVar8 = uVar9;
    while (pcVar5 = memchr(pcVar5,10,uVar8), pcVar5 != (char *)0x0) {
      if (*pcVar5 == '\n') {
        if ((pcVar5 != pcVar1 + uVar9) &&
           (uVar8 = (long)pcVar5 - (long)pcVar1, uVar8 != 0xffffffffffffffff)) {
          if (uVar8 <= uVar9) {
            uVar9 = uVar8;
          }
          uStack_f0 = 0;
          local_e8 = (char *)0x0;
          local_f8 = 0;
          if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar9 < 0x17) {
            pcVar13 = (char *)((ulong)&local_f8 | 1);
            local_f8 = (ulong)(byte)((int)uVar9 << 1);
            if (uVar9 != 0) goto LAB_00c9d4a0;
          }
          else {
            uVar8 = uVar9 + 0x10 & 0xfffffffffffffff0;
            pcVar13 = operator_new(uVar8);
            local_f8 = uVar8 | 1;
            uStack_f0 = uVar9;
            local_e8 = pcVar13;
LAB_00c9d4a0:
            memcpy(pcVar13,pcVar1,uVar9);
          }
          pcVar13[uVar9] = '\0';
          if ((uVar3 & 1) != 0) {
            *local_b0 = '\0';
            uStack_b8 = 0;
            if ((local_c0 & 1) != 0) {
              operator_delete(local_b0);
            }
          }
          uStack_b8 = uStack_f0;
          local_c0 = local_f8;
          uVar9 = local_c0;
          local_c0._0_1_ = SUB81(local_f8,0);
          local_b0 = local_e8;
          bVar12 = (byte)local_c0._0_1_ & 1;
          pcVar13 = local_e8;
          local_c0 = uVar9;
        }
        break;
      }
      pcVar5 = pcVar5 + 1;
      uVar8 = (long)(pcVar1 + uVar9) - (long)pcVar5;
      if ((long)uVar8 < 1) break;
    }
  }
  pcVar1 = (char *)((ulong)&local_c0 | 1);
  if (bVar12 != 0) {
    pcVar1 = pcVar13;
  }
  cocos2d::ui::EditBox::setText((EditBox *)param_1,pcVar1);
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
LAB_00c9cffc:
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) ||
     (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10), uVar9 == 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + uVar9);
  }
  cocos2d::ui::EditBox::setFontSize((EditBox *)param_1,iVar6);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) {
    pTVar7 = (Table *)0x0;
  }
  else {
    uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8);
    pTVar7 = (Table *)0x0;
    if (uVar9 != 0) {
      pTVar7 = param_2 + uVar9 + *(uint *)(param_2 + uVar9);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_c0,(char *)(pTVar7 + 4));
  pcVar1 = (char *)((ulong)&local_c0 | 1);
  if ((local_c0 & 1) != 0) {
    pcVar1 = local_b0;
  }
  cocos2d::ui::EditBox::setFontName((EditBox *)param_1,pcVar1);
  lVar10 = -(long)*(int *)param_2;
  if (((0x14 < *(ushort *)(param_2 + -(long)*(int *)param_2)) &&
      (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x14), uVar9 != 0)) &&
     (param_2[uVar9] != (Table)0x0)) {
    cocos2d::ui::EditBox::setMaxLength((int)param_1);
    lVar10 = -(long)*(int *)param_2;
  }
  if ((*(ushort *)(param_2 + lVar10) < 0x11) ||
     (uVar9 = (ulong)*(ushort *)(param_2 + lVar10 + 0x10), uVar9 == 0)) {
    TVar11 = (Table)0x0;
  }
  else {
    TVar11 = param_2[uVar9];
  }
  cocos2d::ui::EditBox::setInputFlag(param_1,5);
  if (TVar11 != (Table)0x0) {
    cocos2d::ui::EditBox::setInputFlag(param_1,0);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_f8,"");
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) {
    pTVar7 = (Table *)0x0;
  }
  else {
    uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6);
    pTVar7 = (Table *)0x0;
    if (uVar9 != 0) {
      pTVar7 = param_2 + uVar9 + *(uint *)(param_2 + uVar9);
    }
  }
  if ((*(ushort *)(pTVar7 + -(long)*(int *)pTVar7) < 5) ||
     (uVar9 = (ulong)*(ushort *)(pTVar7 + -(long)*(int *)pTVar7 + 4), uVar9 == 0)) {
    pTVar7 = (Table *)0x0;
  }
  else {
    pTVar7 = pTVar7 + uVar9 + *(uint *)(pTVar7 + uVar9);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_110,(char *)(pTVar7 + 4));
  uVar9 = (ulong)((byte)local_110[0] >> 1);
  if (((byte)local_110[0] & 1) != 0) {
    uVar9 = local_108;
  }
  if (uVar9 != 0) {
    plVar4 = (long *)cocos2d::FileUtils::getInstance();
    uVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,local_110);
    if ((uVar9 & 1) == 0) {
      uVar9 = (ulong)((byte)local_110[0] >> 1);
      pcVar1 = (char *)((ulong)local_110 | 1);
      if (((byte)local_110[0] & 1) != 0) {
        uVar9 = local_108;
        pcVar1 = local_100;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_f8,pcVar1,uVar9);
    }
    else {
      pcVar1 = (char *)((ulong)local_110 | 1);
      if (((byte)local_110[0] & 1) != 0) {
        pcVar1 = local_100;
      }
      cocos2d::ui::EditBox::setFontName((EditBox *)param_1,pcVar1);
    }
  }
  plVar4 = (long *)WidgetReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar9 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar9 == 0)) {
    pTVar7 = (Table *)0x0;
  }
  else {
    pTVar7 = param_2 + uVar9 + *(uint *)(param_2 + uVar9);
  }
  (**(code **)(*plVar4 + 0x30))(plVar4,param_1,pTVar7);
  cocos2d::Color3B::Color3B(aCStack_118,'\0','\0','\0');
  cocos2d::ui::EditBox::setFontColor((EditBox *)param_1,aCStack_118);
  cocos2d::ui::Widget::setUnifySizeEnabled((Widget *)param_1,false);
  (**(code **)(*(long *)param_1 + 0x600))(param_1,0);
  cocos2d::ui::EditBox::setInputMode(param_1,6);
  if (((byte)local_110[0] & 1) != 0) {
    operator_delete(local_100);
  }
  if ((local_f8 & 1) != 0) {
    operator_delete(local_e8);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((byte)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

