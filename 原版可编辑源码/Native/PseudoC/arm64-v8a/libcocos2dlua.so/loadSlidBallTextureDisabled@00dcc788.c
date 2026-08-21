
/* cocos2d::ui::Slider::loadSlidBallTextureDisabled(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::Slider::loadSlidBallTextureDisabled
          (Slider *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x658) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x658),(char *)pbVar2,uVar1);
  }
  bVar3 = *param_1;
  uVar6 = *(ulong *)(param_1 + 8);
  *(int *)(this + 0x5f0) = param_3;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = uVar6;
  }
  this[0x56d] = (Slider)(uVar1 != 0);
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    (**(code **)(**(long **)(this + 0x540) + 0x500))();
  }
  else {
    if (param_3 == 1) {
      plVar4 = *(long **)(this + 0x540);
      pcVar5 = *(code **)(*plVar4 + 0x590);
    }
    else {
      if (param_3 != 0) goto LAB_00dcc84c;
      plVar4 = *(long **)(this + 0x540);
      pcVar5 = *(code **)(*plVar4 + 0x540);
    }
    (*pcVar5)(plVar4,param_1);
  }
LAB_00dcc84c:
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  return;
}

