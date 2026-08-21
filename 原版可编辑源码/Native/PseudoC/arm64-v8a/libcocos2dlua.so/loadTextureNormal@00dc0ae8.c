
/* cocos2d::ui::Button::loadTextureNormal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::Button::loadTextureNormal
          (Button *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  Button BVar2;
  long lVar3;
  ulong uVar4;
  Size *pSVar5;
  Button BVar6;
  Button BVar7;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x568) != param_1) {
    uVar4 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar4 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x568),(char *)pbVar1,uVar4);
  }
  *(int *)(this + 0x5b0) = param_3;
  uVar4 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if (uVar4 == 0) {
    Scale9Sprite::resetRender();
    BVar7 = (Button)0x0;
    BVar6 = (Button)0x0;
    BVar2 = this[0x387];
  }
  else if (param_3 == 1) {
    (**(code **)(**(long **)(this + 0x4f0) + 0x618))(*(long **)(this + 0x4f0),param_1);
    BVar2 = this[0x387];
    BVar7 = (Button)0x1;
    BVar6 = (Button)0x1;
  }
  else {
    if (param_3 == 0) {
      (**(code **)(**(long **)(this + 0x4f0) + 0x620))(*(long **)(this + 0x4f0),param_1);
    }
    BVar7 = (Button)0x1;
    BVar6 = (Button)0x1;
    BVar2 = this[0x387];
  }
  if (BVar2 == (Button)0x0) {
    uVar4 = Size::equals((Size *)(this + 0x39c),(Size *)&Size::ZERO);
    BVar6 = BVar7;
    if ((uVar4 & 1) != 0) {
      pSVar5 = (Size *)(**(code **)(**(long **)(this + 0x4f0) + 0x168))();
      Size::operator=((Size *)(this + 0x39c),pSVar5);
    }
  }
  pSVar5 = (Size *)(**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Size::operator=((Size *)(this + 0x548),pSVar5);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  if (this[0x381] != (Button)0x0) {
    if (this[0x515] != (Button)0x0) goto LAB_00dc0c54;
                    /* try { // try from 00dc0c30 to 00ec0cb7 has its CatchHandler @ 00dc0c30
                       catch() { ... } // from try @ 00dc0c30 with catch @ 00dc0c30
                       catch() { ... } // from try @ 00dc0cc8 with catch @ 00dc0c30 */
    (**(code **)(*(long *)this + 0x6a8))(auStack_40,this);
  }
  Widget::updateContentSizeWithTextureSize((Size *)this);
LAB_00dc0c54:
  this[0x560] = BVar6;
  this[0x563] = (Button)0x1;
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

