
/* cocostudio::TextReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
cocostudio::TextReader::setPropsWithFlatBuffers(TextReader *this,Node *param_1,Table *param_2)

{
  long lVar1;
  void *__src;
  bool bVar2;
  long *plVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  Table TVar6;
  int iVar7;
  ulong uVar8;
  Table *pTVar9;
  long lVar10;
  void *__dest;
  float fVar11;
  float fVar12;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined1 local_c6;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  Color4B local_a8 [16];
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90;
  undefined7 uStack_8f;
  ulong uStack_88;
  void *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [8];
  ulong local_70;
  void *local_68;
  Size aSStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x17) {
    TVar6 = (Table)0x0;
  }
  else {
    uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x16);
    TVar6 = (Table)0x0;
    if (uVar8 != 0) {
      TVar6 = param_2[uVar8];
    }
  }
  cocos2d::ui::Text::setTouchScaleChangeEnabled((Text *)param_1,TVar6 != (Table)0x0);
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 0xb) {
    iVar7 = 0;
  }
  else {
    uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 10);
    iVar7 = 0;
    if (uVar8 != 0) {
      iVar7 = *(int *)(param_2 + uVar8);
    }
  }
  cocos2d::ui::Text::setFontSize((Text *)param_1,(float)iVar7);
  pTVar9 = param_2 + -(long)*(int *)param_2;
  if (*(ushort *)pTVar9 < 0xf) {
    iVar7 = 0;
    fVar11 = 0.0;
  }
  else {
    iVar7 = 0;
    if ((ulong)*(ushort *)(pTVar9 + 0xe) != 0) {
      iVar7 = *(int *)(param_2 + *(ushort *)(pTVar9 + 0xe));
    }
    fVar11 = (float)iVar7;
    if (*(ushort *)pTVar9 < 0x11) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      if ((ulong)*(ushort *)(pTVar9 + 0x10) != 0) {
        iVar7 = *(int *)(param_2 + *(ushort *)(pTVar9 + 0x10));
      }
    }
  }
  cocos2d::Size::Size(aSStack_60,fVar11,(float)iVar7);
  uVar8 = cocos2d::Size::equals(aSStack_60,(Size *)&cocos2d::Size::ZERO);
  if ((uVar8 & 1) == 0) {
    cocos2d::ui::Text::setTextAreaSize((Text *)param_1,aSStack_60);
  }
  if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 7) {
    pTVar9 = (Table *)0x0;
  }
  else {
    uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6);
    pTVar9 = (Table *)0x0;
    if (uVar8 != 0) {
      pTVar9 = param_2 + uVar8 + *(uint *)(param_2 + uVar8);
    }
  }
  if ((*(ushort *)(pTVar9 + -(long)*(int *)pTVar9) < 5) ||
     (uVar8 = (ulong)*(ushort *)(pTVar9 + -(long)*(int *)pTVar9 + 4), uVar8 == 0)) {
    pTVar9 = (Table *)0x0;
  }
  else {
    pTVar9 = pTVar9 + uVar8 + *(uint *)(pTVar9 + uVar8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,(char *)(pTVar9 + 4));
  uVar8 = (ulong)((byte)local_78[0] >> 1);
  if (((byte)local_78[0] & 1) != 0) {
    uVar8 = local_70;
  }
  if (uVar8 == 0) {
LAB_00ca0c4c:
    if (*(ushort *)(param_2 + -(long)*(int *)param_2) < 9) {
      pTVar9 = (Table *)0x0;
    }
    else {
      uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8);
      pTVar9 = (Table *)0x0;
      if (uVar8 != 0) {
        pTVar9 = param_2 + uVar8 + *(uint *)(param_2 + uVar8);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_90,(char *)(pTVar9 + 4));
    cocos2d::ui::Text::setFontName((Text *)param_1,(basic_string *)&local_90);
    if (((byte)local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  else {
    plVar3 = (long *)cocos2d::FileUtils::getInstance();
    uVar8 = (**(code **)(*plVar3 + 0x128))(plVar3,local_78);
    if ((uVar8 & 1) == 0) goto LAB_00ca0c4c;
    cocos2d::ui::Text::setFontName((Text *)param_1,(basic_string *)local_78);
  }
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x13) ||
     (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x12), uVar8 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + uVar8);
  }
  cocos2d::ui::Text::setTextHorizontalAlignment((Text *)param_1,uVar5);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x15) ||
     (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x14), uVar8 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + uVar8);
  }
  cocos2d::ui::Text::setTextVerticalAlignment((Text *)param_1,uVar5);
  pTVar9 = param_2 + -(long)*(int *)param_2;
  lVar10 = -(long)*(int *)param_2;
  if (((((0x1a < *(ushort *)pTVar9) && ((ulong)*(ushort *)(pTVar9 + 0x1a) != 0)) &&
       (0x1c < *(ushort *)pTVar9)) &&
      ((param_2[*(ushort *)(pTVar9 + 0x1a)] != (Table)0x0 &&
       ((ulong)*(ushort *)(pTVar9 + 0x1c) != 0)))) &&
     (pTVar9 = param_2 + *(ushort *)(pTVar9 + 0x1c), pTVar9 != (Table *)0x0)) {
    cocos2d::Color4B::Color4B
              ((Color4B *)&local_90,(uchar)pTVar9[1],(uchar)pTVar9[2],(uchar)pTVar9[3],
               (uchar)*pTVar9);
    cocos2d::ui::Text::enableOutline((Color4B *)param_1,(int)&local_90);
    lVar10 = -(long)*(int *)param_2;
  }
  pTVar9 = param_2 + lVar10;
  if (((0x20 < *(ushort *)pTVar9) && ((ulong)*(ushort *)(pTVar9 + 0x20) != 0)) &&
     ((0x22 < *(ushort *)pTVar9 &&
      (((param_2[*(ushort *)(pTVar9 + 0x20)] != (Table)0x0 &&
        ((ulong)*(ushort *)(pTVar9 + 0x22) != 0)) &&
       (pTVar9 = param_2 + *(ushort *)(pTVar9 + 0x22), pTVar9 != (Table *)0x0)))))) {
    cocos2d::Color4B::Color4B
              (local_a8,(uchar)pTVar9[1],(uchar)pTVar9[2],(uchar)pTVar9[3],(uchar)*pTVar9);
    fVar11 = -2.0;
    pTVar9 = param_2 + -(long)*(int *)param_2;
    if (*(ushort *)pTVar9 < 0x25) {
      fVar12 = 2.0;
    }
    else {
      if ((ulong)*(ushort *)(pTVar9 + 0x24) == 0) {
        fVar12 = 2.0;
      }
      else {
        fVar12 = *(float *)(param_2 + *(ushort *)(pTVar9 + 0x24));
      }
      if ((0x26 < *(ushort *)pTVar9) && ((ulong)*(ushort *)(pTVar9 + 0x26) != 0)) {
        fVar11 = *(float *)(param_2 + *(ushort *)(pTVar9 + 0x26));
      }
    }
    cocos2d::Size::Size((Size *)&local_90,fVar12,fVar11);
    cocos2d::ui::Text::enableShadow((Color4B *)param_1,(Size *)local_a8,(int)&local_90);
    lVar10 = -(long)*(int *)param_2;
  }
  if (*(ushort *)(param_2 + lVar10) < 0xd) {
    pTVar9 = (Table *)0x0;
  }
  else {
    uVar8 = (ulong)*(ushort *)(param_2 + lVar10 + 0xc);
    pTVar9 = (Table *)0x0;
    if (uVar8 != 0) {
      pTVar9 = param_2 + uVar8 + *(uint *)(param_2 + uVar8);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_90,(char *)(pTVar9 + 4));
  if (((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x2b) ||
      (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x2a), uVar8 == 0)) ||
     (param_2[uVar8] == (Table)0x0)) {
    cocos2d::ui::Text::setString((Text *)param_1,(basic_string *)&local_90);
    goto LAB_00ca0f14;
  }
  plVar3 = (long *)LocalizationHelper::getCurrentManager();
  __src = local_80;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  if (((byte)local_90 & 1) == 0) {
    local_c0 = CONCAT71(uStack_8f,local_90);
    uStack_b8 = uStack_88;
    local_b0 = local_80;
  }
  else {
    if (0xffffffffffffffef < uStack_88) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_88 < 0x17) {
      __dest = (void *)((ulong)&local_c0 | 1);
      local_c0 = (ulong)(byte)((int)uStack_88 << 1);
      if (uStack_88 != 0) goto LAB_00ca1144;
    }
    else {
      uVar8 = uStack_88 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar8);
      local_c0 = uVar8 | 1;
      uStack_b8 = uStack_88;
      local_b0 = __dest;
LAB_00ca1144:
      memcpy(__dest,__src,uStack_88);
    }
    *(undefined1 *)((long)__dest + uStack_88) = 0;
  }
  (**(code **)(*plVar3 + 0x18))(local_a8,plVar3,&local_c0);
  cocos2d::ui::Text::setString((Text *)param_1,(basic_string *)local_a8);
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
LAB_00ca0f14:
  puVar4 = (undefined2 *)(**(code **)(*(long *)param_1 + 0x4b0))(param_1);
  local_c6 = *(undefined1 *)(puVar4 + 1);
  local_c8 = *puVar4;
  plVar3 = (long *)WidgetReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar8 == 0)) {
    pTVar9 = (Table *)0x0;
  }
  else {
    pTVar9 = param_2 + uVar8 + *(uint *)(param_2 + uVar8);
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,param_1,pTVar9);
  (**(code **)(*(long *)param_1 + 0x4c0))(param_1,&local_c8);
  pTVar9 = param_2 + *(ushort *)(param_2 + (4 - (long)*(int *)param_2)) +
           *(uint *)(param_2 + *(ushort *)(param_2 + (4 - (long)*(int *)param_2)));
  if ((*(ushort *)(pTVar9 + -(long)*(int *)pTVar9) < 0x19) ||
     (uVar8 = (ulong)*(ushort *)(pTVar9 + -(long)*(int *)pTVar9 + 0x18), uVar8 == 0)) {
    pTVar9 = (Table *)0x0;
  }
  else {
    pTVar9 = pTVar9 + uVar8;
  }
  cocos2d::Color4B::Color4B
            ((Color4B *)&local_cc,(uchar)pTVar9[1],(uchar)pTVar9[2],(uchar)pTVar9[3],(uchar)*pTVar9)
  ;
  cocos2d::ui::Text::setTextColor((Text *)param_1,local_cc);
  cocos2d::ui::Widget::setUnifySizeEnabled((Widget *)param_1,false);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x19) ||
     (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x18), uVar8 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = param_2[uVar8] == (Table)0x0;
  }
  (**(code **)(*(long *)param_1 + 0x600))(param_1,bVar2);
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar8 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar8 == 0)) {
    pTVar9 = (Table *)0x0;
  }
  else {
    pTVar9 = param_2 + uVar8 + *(uint *)(param_2 + uVar8);
  }
  uVar8 = cocos2d::ui::Widget::isIgnoreContentAdaptWithSize((Widget *)param_1);
  if ((uVar8 & 1) == 0) {
    cocos2d::Size::Size((Size *)local_a8,
                        *(float *)(pTVar9 + *(ushort *)(pTVar9 + (0x1a - (long)*(int *)pTVar9))),
                        *(float *)(pTVar9 + *(ushort *)(pTVar9 + (0x1a - (long)*(int *)pTVar9)) + 4)
                       );
    (**(code **)(*(long *)param_1 + 0x160))(param_1,local_a8);
  }
  if (((byte)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

