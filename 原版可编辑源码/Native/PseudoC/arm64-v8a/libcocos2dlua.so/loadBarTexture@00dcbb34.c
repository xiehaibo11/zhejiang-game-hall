
/* cocos2d::ui::Slider::loadBarTexture(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::Slider::loadBarTexture
          (Slider *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  Slider SVar2;
  long *plVar3;
  ulong uVar4;
  Size *pSVar5;
  code *pcVar6;
  
                    /* try { // try from 00dcbb34 to 00ecbb43 has its CatchHandler @ 00dccbf8 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x5f8) != param_1) {
    uVar4 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar4 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x5f8),(char *)pbVar1,uVar4);
  }
  *(int *)(this + 0x5e0) = param_3;
  uVar4 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if (uVar4 == 0) {
    Scale9Sprite::resetRender();
LAB_00dcbbb8:
    SVar2 = this[0x387];
  }
  else {
    if (param_3 == 1) {
      plVar3 = *(long **)(this + 0x4f0);
      pcVar6 = *(code **)(*plVar3 + 0x590);
    }
    else {
      if (param_3 != 0) goto LAB_00dcbbb8;
      plVar3 = *(long **)(this + 0x4f0);
      pcVar6 = *(code **)(*plVar3 + 0x540);
    }
    (*pcVar6)(plVar3,param_1);
    SVar2 = this[0x387];
  }
  if (SVar2 == (Slider)0x0) {
    uVar4 = Size::equals((Size *)(this + 0x39c),(Size *)&Size::ZERO);
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 00dcbbfc to 00ecbc87 has its CatchHandler @ 00dccb90 */
      pSVar5 = (Size *)(**(code **)(**(long **)(this + 0x4f0) + 0x168))();
      Size::operator=((Size *)(this + 0x39c),pSVar5);
    }
  }
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  *(undefined2 *)(this + 0x5f4) = 0x101;
  (**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
  pSVar5 = (Size *)(**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Size::operator=((Size *)(this + 0x500),pSVar5);
  Rect::operator=((Rect *)(this + 0x508),(Rect *)(*(long *)(this + 0x4f0) + 0x408));
  return;
}

