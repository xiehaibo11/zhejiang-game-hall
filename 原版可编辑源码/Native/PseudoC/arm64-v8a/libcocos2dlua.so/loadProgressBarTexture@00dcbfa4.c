
/* cocos2d::ui::Slider::loadProgressBarTexture(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::Slider::loadProgressBarTexture
          (Slider *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  long *plVar4;
  Size *pSVar5;
  code *pcVar6;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 00dcbfa4 to 00ecbfbf has its CatchHandler @ 00dccc24 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00dcbfc4 to 00ecbfd3 has its CatchHandler @ 00dccc28 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x610) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x610),(char *)pbVar2,uVar1);
  }
  *(int *)(this + 0x5e4) = param_3;
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    Scale9Sprite::resetRender();
  }
  else {
    if (param_3 == 1) {
      plVar4 = *(long **)(this + 0x4f8);
      pcVar6 = *(code **)(*plVar4 + 0x590);
    }
    else {
      if (param_3 != 0) goto LAB_00dcc050;
      plVar4 = *(long **)(this + 0x4f8);
      pcVar6 = *(code **)(*plVar4 + 0x540);
    }
    (*pcVar6)(plVar4,param_1);
  }
LAB_00dcc050:
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  local_40 = 0x3f00000000000000;
  (**(code **)(**(long **)(this + 0x4f8) + 0x148))(*(long **)(this + 0x4f8),&local_40);
  pSVar5 = (Size *)(**(code **)(**(long **)(this + 0x4f8) + 0x168))();
                    /* try { // try from 00dcc08c to 00ecc117 has its CatchHandler @ 00dccbbc */
  Size::operator=((Size *)(this + 0x518),pSVar5);
  Rect::operator=((Rect *)(this + 0x520),(Rect *)(*(long *)(this + 0x4f8) + 0x408));
  this[0x5f5] = (Slider)0x1;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

