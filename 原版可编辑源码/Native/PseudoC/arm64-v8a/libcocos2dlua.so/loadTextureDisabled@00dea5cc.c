
/* cocos2d::ui::EditBox::loadTextureDisabled(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::EditBox::loadTextureDisabled
          (EditBox *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long *plVar3;
  Size *pSVar4;
  code *pcVar5;
  EditBox EVar6;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x590) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x590),(char *)pbVar2,uVar1);
  }
  *(int *)(this + 0x5b0) = param_3;
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    Scale9Sprite::resetRender();
    EVar6 = (EditBox)0x0;
    goto LAB_00dea670;
  }
  if (param_3 == 1) {
    plVar3 = *(long **)(this + 0x508);
    pcVar5 = *(code **)(*plVar3 + 0x618);
LAB_00dea664:
    (*pcVar5)(plVar3,param_1);
  }
  else if (param_3 == 0) {
    plVar3 = *(long **)(this + 0x508);
    pcVar5 = *(code **)(*plVar3 + 0x620);
    goto LAB_00dea664;
  }
  EVar6 = (EditBox)0x1;
LAB_00dea670:
  pSVar4 = (Size *)(**(code **)(**(long **)(this + 0x508) + 0x168))();
  Size::operator=((Size *)(this + 0x550),pSVar4);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x55a] = EVar6;
  this[0x55d] = (EditBox)0x1;
  return;
}

