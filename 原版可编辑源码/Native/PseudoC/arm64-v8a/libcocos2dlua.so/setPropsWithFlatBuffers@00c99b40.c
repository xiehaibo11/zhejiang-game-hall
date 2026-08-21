
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::TextBMFontReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*)
    */

void __thiscall
cocostudio::TextBMFontReader::setPropsWithFlatBuffers
          (TextBMFontReader *this,Node *param_1,Table *param_2)

{
  long lVar1;
  void *__src;
  long *plVar2;
  long lVar3;
  Table *pTVar4;
  ulong uVar5;
  Table *pTVar6;
  void *__dest;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  basic_string local_d0 [16];
  void *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8;
  undefined7 uStack_b7;
  ulong uStack_b0;
  void *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) ||
     (uVar5 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar5 == 0)) {
    pTVar4 = (Table *)0x0;
  }
  else {
    pTVar4 = param_2 + uVar5 + *(uint *)(param_2 + uVar5);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"");
  if (*(ushort *)(pTVar4 + -(long)*(int *)pTVar4) < 5) {
    pTVar6 = (Table *)0x0;
  }
  else {
    uVar5 = (ulong)*(ushort *)(pTVar4 + -(long)*(int *)pTVar4 + 4);
    pTVar6 = (Table *)0x0;
    if (uVar5 != 0) {
      pTVar6 = pTVar4 + uVar5 + *(uint *)(pTVar4 + uVar5);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,(char *)(pTVar6 + 4));
  if (((*(ushort *)(pTVar4 + -(long)*(int *)pTVar4) < 9) ||
      (uVar5 = (ulong)*(ushort *)(pTVar4 + -(long)*(int *)pTVar4 + 8), uVar5 == 0)) ||
     (*(int *)(pTVar4 + uVar5) == 0)) {
    plVar2 = (long *)cocos2d::FileUtils::getInstance();
    uVar5 = (**(code **)(*plVar2 + 0x128))(plVar2,local_a0);
    if ((uVar5 & 1) != 0) {
      lVar3 = cocos2d::FontAtlasCache::getFontAtlasFNT
                        ((basic_string *)local_a0,(Vec2 *)&cocos2d::Vec2::ZERO);
      if (lVar3 == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_88,"has problem",0xb);
      }
      else {
        cocos2d::ui::TextBMFont::setFntFile((TextBMFont *)param_1,(basic_string *)local_a0);
      }
    }
  }
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) {
    pTVar4 = (Table *)0x0;
  }
  else {
    uVar5 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8);
    pTVar4 = (Table *)0x0;
    if (uVar5 != 0) {
      pTVar4 = param_2 + uVar5 + *(uint *)(param_2 + uVar5);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_b8,(char *)(pTVar4 + 4));
  if (((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) ||
      (uVar5 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10), uVar5 == 0)) ||
     (param_2[uVar5] == (Table)0x0)) {
    cocos2d::ui::TextBMFont::setString((TextBMFont *)param_1,(basic_string *)&local_b8);
    goto LAB_00c99d08;
  }
  plVar2 = (long *)LocalizationHelper::getCurrentManager();
  __src = local_a8;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  if (((byte)local_b8 & 1) == 0) {
    local_f0 = CONCAT71(uStack_b7,local_b8);
    uStack_e8 = uStack_b0;
    local_e0 = local_a8;
  }
  else {
    if (0xffffffffffffffef < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_b0 < 0x17) {
      __dest = (void *)((ulong)&local_f0 | 1);
      local_f0 = (ulong)(byte)((int)uStack_b0 << 1);
      if (uStack_b0 != 0) goto LAB_00c99e38;
    }
    else {
      uVar5 = uStack_b0 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar5);
      local_f0 = uVar5 | 1;
      uStack_e8 = uStack_b0;
      local_e0 = __dest;
LAB_00c99e38:
      memcpy(__dest,__src,uStack_b0);
    }
    *(undefined1 *)((long)__dest + uStack_b0) = 0;
  }
  (**(code **)(*plVar2 + 0x18))(local_d0,plVar2,&local_f0);
  cocos2d::ui::TextBMFont::setString((TextBMFont *)param_1,local_d0);
  if (((byte)local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
LAB_00c99d08:
  plVar2 = (long *)WidgetReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar5 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar5 == 0)) {
    pTVar4 = (Table *)0x0;
  }
  else {
    pTVar4 = param_2 + uVar5 + *(uint *)(param_2 + uVar5);
  }
  (**(code **)(*plVar2 + 0x30))(plVar2,param_1,pTVar4);
  (**(code **)(*(long *)param_1 + 0x600))(param_1,1);
  if (((byte)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

