
/* cocos2d::ui::EditBox::loadTextureNormal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::EditBox::loadTextureNormal
          (EditBox *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  EditBox EVar2;
  ulong uVar3;
  Size *pSVar4;
  EditBox EVar5;
  EditBox EVar6;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x560) != param_1) {
    uVar3 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar3 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x560),(char *)pbVar1,uVar3);
  }
  *(int *)(this + 0x5a8) = param_3;
  uVar3 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  if (uVar3 == 0) {
    Scale9Sprite::resetRender();
    EVar6 = (EditBox)0x0;
    EVar5 = (EditBox)0x0;
    EVar2 = this[0x387];
  }
  else if (param_3 == 1) {
    (**(code **)(**(long **)(this + 0x4f8) + 0x618))(*(long **)(this + 0x4f8),param_1);
    EVar2 = this[0x387];
    EVar6 = (EditBox)0x1;
    EVar5 = (EditBox)0x1;
  }
  else {
    if (param_3 == 0) {
      (**(code **)(**(long **)(this + 0x4f8) + 0x620))(*(long **)(this + 0x4f8),param_1);
    }
    EVar6 = (EditBox)0x1;
    EVar5 = (EditBox)0x1;
    EVar2 = this[0x387];
  }
  if (EVar2 == (EditBox)0x0) {
    uVar3 = Size::equals((Size *)(this + 0x39c),(Size *)&Size::ZERO);
    EVar5 = EVar6;
    if ((uVar3 & 1) != 0) {
      pSVar4 = (Size *)(**(code **)(**(long **)(this + 0x4f8) + 0x168))();
      Size::operator=((Size *)(this + 0x39c),pSVar4);
    }
  }
  pSVar4 = (Size *)(**(code **)(**(long **)(this + 0x4f8) + 0x168))();
  Size::operator=((Size *)(this + 0x540),pSVar4);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x558] = EVar5;
  this[0x55b] = (EditBox)0x1;
  return;
}

