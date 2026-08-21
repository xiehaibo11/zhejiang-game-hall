
/* cocos2d::ui::Button::loadTexturePressed(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::Button::loadTexturePressed
          (Button *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long *plVar3;
  Size *pSVar4;
  code *pcVar5;
  Button BVar6;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x580) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
                    /* try { // try from 00dc0cb8 to 00ec0cc7 has its CatchHandler @ 00dc0e90 */
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
                    /* try { // try from 00dc0cc8 to 00ec0eab has its CatchHandler @ 00dc0c30 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x580),(char *)pbVar2,uVar1);
  }
  *(int *)(this + 0x5b4) = param_3;
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    Scale9Sprite::resetRender();
    BVar6 = (Button)0x0;
    goto LAB_00dc0d2c;
  }
  if (param_3 == 1) {
    plVar3 = *(long **)(this + 0x4f8);
    pcVar5 = *(code **)(*plVar3 + 0x618);
LAB_00dc0d20:
    (*pcVar5)(plVar3,param_1);
  }
  else if (param_3 == 0) {
    plVar3 = *(long **)(this + 0x4f8);
    pcVar5 = *(code **)(*plVar3 + 0x620);
    goto LAB_00dc0d20;
  }
  BVar6 = (Button)0x1;
LAB_00dc0d2c:
  pSVar4 = (Size *)(**(code **)(**(long **)(this + 0x4f8) + 0x168))();
  Size::operator=((Size *)(this + 0x550),pSVar4);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x561] = BVar6;
  this[0x564] = (Button)0x1;
  return;
}

