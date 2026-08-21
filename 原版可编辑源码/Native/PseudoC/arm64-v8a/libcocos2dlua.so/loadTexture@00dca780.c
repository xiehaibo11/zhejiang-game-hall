
/* cocos2d::ui::LoadingBar::loadTexture(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::LoadingBar::loadTexture
          (LoadingBar *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  long *plVar2;
  ulong uVar3;
  Size *pSVar4;
  code *pcVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  bVar1 = *param_1;
  uVar3 = (ulong)((byte)bVar1 >> 1);
  if (((byte)bVar1 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  if (uVar3 == 0) {
    return;
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x540) != param_1) {
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x540),(char *)pbVar6,uVar3);
  }
  *(int *)(this + 0x508) = param_3;
  if (param_3 == 1) {
    plVar2 = *(long **)(this + 0x500);
    pcVar5 = *(code **)(*plVar2 + 0x590);
  }
  else {
    if (param_3 != 0) goto LAB_00dca814;
    plVar2 = *(long **)(this + 0x500);
    pcVar5 = *(code **)(*plVar2 + 0x540);
  }
  (*pcVar5)(plVar2,param_1);
LAB_00dca814:
  if (this[0x387] == (LoadingBar)0x0) {
    uVar3 = Size::equals((Size *)(this + 0x39c),(Size *)&Size::ZERO);
    if ((uVar3 & 1) != 0) {
      pSVar4 = (Size *)(**(code **)(**(long **)(this + 0x500) + 0x168))();
      Size::operator=((Size *)(this + 0x39c),pSVar4);
    }
  }
  setupTexture(this);
  return;
}

