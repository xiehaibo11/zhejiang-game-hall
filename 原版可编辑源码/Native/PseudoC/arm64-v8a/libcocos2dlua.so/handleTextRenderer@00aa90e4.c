
/* fairygui::FUIRichText::handleTextRenderer(fairygui::HtmlElement*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
fairygui::FUIRichText::handleTextRenderer
          (FUIRichText *this,HtmlElement *param_1,basic_string *param_2)

{
  basic_string bVar1;
  long lVar2;
  int iVar3;
  FUILabel *pFVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  undefined8 *puVar8;
  basic_string *pbVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  FUILabel *local_a0 [2];
  void *local_90;
  locale local_88 [8];
  ulong local_80;
  void *local_78;
  FUILabel *local_70 [2];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pFVar4 = operator_new(0x6d0,(nothrow_t *)&std::nothrow);
  if (pFVar4 != (FUILabel *)0x0) {
    FUILabel::FUILabel(pFVar4);
    uVar5 = (**(code **)(*(long *)pFVar4 + 0x500))(pFVar4);
    if ((uVar5 & 1) == 0) {
      (**(code **)(*(long *)pFVar4 + 8))(pFVar4);
      pFVar4 = (FUILabel *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)pFVar4);
    }
  }
  (**(code **)(*(long *)pFVar4 + 0x148))(pFVar4,&cocos2d::Vec2::ZERO);
  (**(code **)(*(long *)pFVar4 + 0x4a8))(pFVar4,1);
  TextFormat::setFormat(*(TextFormat **)(pFVar4 + 0x6a0),(TextFormat *)(param_1 + 0x28));
  FUILabel::applyTextFormat(pFVar4);
  if (*(long *)(param_1 + 0x80) != 0) {
    FUILabel::setUnderlineColor((Color3B *)pFVar4);
  }
  (**(code **)(*(long *)pFVar4 + 0x588))(pFVar4,param_2);
  (**(code **)(*(long *)pFVar4 + 0x2e8))(pFVar4,param_1);
  pfVar6 = (float *)(**(code **)(*(long *)pFVar4 + 0x168))(pFVar4);
  fVar12 = *pfVar6;
  fVar13 = *(float *)(this + 0x34c);
  *(float *)(this + 0x34c) = fVar13 - fVar12;
  if (0.0 <= fVar13 - fVar12) {
    lVar10 = *(long *)(this + 0x330);
    puVar8 = *(undefined8 **)(lVar10 + -0x10);
    local_70[0] = pFVar4;
    if (puVar8 < *(undefined8 **)(lVar10 + -8)) {
      *puVar8 = pFVar4;
      *(undefined8 **)(lVar10 + -0x10) = puVar8 + 1;
    }
    else {
      std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
      __push_back_slow_path<cocos2d::Node*>
                ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(lVar10 + -0x18),
                 (Node **)local_70);
    }
  }
  else {
    iVar3 = findSplitPositionForWord(this,(Label *)pFVar4,param_2);
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    lVar10 = (long)iVar3;
    FUN_00aa99fc(local_70,param_2,0,lVar10);
    pbVar9 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    bVar1 = pbVar9[lVar10];
    std::__ndk1::locale::locale(local_88);
    lVar7 = std::__ndk1::locale::use_facet(local_88,(id *)&std::__ndk1::ctype<char>::id);
    if ((char)bVar1 < '\0') {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint)*(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(char)bVar1 * 8) & 1;
    }
    std::__ndk1::locale::~locale(local_88);
    uVar5 = (ulong)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 8);
    }
    FUN_00aa99fc(local_88,param_2,(long)(int)(iVar3 + uVar11),uVar5 - lVar10);
    if (0 < iVar3) {
      pFVar4 = operator_new(0x6d0,(nothrow_t *)&std::nothrow);
      if (pFVar4 != (FUILabel *)0x0) {
        FUILabel::FUILabel(pFVar4);
        uVar5 = (**(code **)(*(long *)pFVar4 + 0x500))(pFVar4);
        if ((uVar5 & 1) == 0) {
          (**(code **)(*(long *)pFVar4 + 8))(pFVar4);
          pFVar4 = (FUILabel *)0x0;
        }
        else {
          cocos2d::Ref::autorelease((Ref *)pFVar4);
        }
      }
      (**(code **)(*(long *)pFVar4 + 0x148))(pFVar4,&cocos2d::Vec2::ZERO);
      (**(code **)(*(long *)pFVar4 + 0x4a8))(pFVar4,1);
      TextFormat::setFormat(*(TextFormat **)(pFVar4 + 0x6a0),(TextFormat *)(param_1 + 0x28));
      FUILabel::applyTextFormat(pFVar4);
      if (*(long *)(param_1 + 0x80) != 0) {
        FUILabel::setUnderlineColor((Color3B *)pFVar4);
      }
      FUN_00aa99fc(local_a0,local_70,0,lVar10);
      (**(code **)(*(long *)pFVar4 + 0x588))(pFVar4,local_a0);
      if (((byte)local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      (**(code **)(*(long *)pFVar4 + 0x2e8))(pFVar4,param_1);
      lVar10 = *(long *)(this + 0x330);
      puVar8 = *(undefined8 **)(lVar10 + -0x10);
      local_a0[0] = pFVar4;
      if (puVar8 < *(undefined8 **)(lVar10 + -8)) {
        *puVar8 = pFVar4;
        *(undefined8 **)(lVar10 + -0x10) = puVar8 + 1;
      }
      else {
        std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
        __push_back_slow_path<cocos2d::Node*>
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(lVar10 + -0x18)
                   ,(Node **)local_a0);
      }
    }
    uVar5 = (ulong)((byte)local_88[0] >> 1);
    if (((byte)local_88[0] & 1) != 0) {
      uVar5 = local_80;
    }
    if (uVar5 != 0) {
      puVar8 = *(undefined8 **)(this + 0x330);
      *(undefined4 *)(this + 0x34c) = *(undefined4 *)(this + 0x350);
      if (puVar8 < *(undefined8 **)(this + 0x338)) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *(undefined8 **)(this + 0x330) = puVar8 + 3;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>
        ::__emplace_back_slow_path<>
                  ((vector<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>
                    *)(this + 0x328));
      }
      *(int *)(this + 0x354) = *(int *)(this + 0x354) + 1;
      handleTextRenderer(this,param_1,(basic_string *)local_88);
    }
    if (((byte)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if (((ulong)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

