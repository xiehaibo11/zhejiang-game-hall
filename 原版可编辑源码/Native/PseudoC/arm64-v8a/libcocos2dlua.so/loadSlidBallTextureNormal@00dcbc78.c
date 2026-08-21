
/* cocos2d::ui::Slider::loadSlidBallTextureNormal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::Slider::loadSlidBallTextureNormal
          (Slider *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long *plVar3;
  code *pcVar4;
  
                    /* try { // try from 00dcbc88 to 00ecbcab has its CatchHandler @ 00dcb1b0 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x628) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
                    /* try { // try from 00dcbcac to 00ecbcb7 has its CatchHandler @ 00dcc9ec */
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x628),(char *)pbVar2,uVar1);
  }
  *(int *)(this + 0x5e8) = param_3;
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    (**(code **)(**(long **)(this + 0x530) + 0x500))();
  }
  else {
    if (param_3 == 1) {
                    /* try { // try from 00dcbd08 to 00ecbd0b has its CatchHandler @ 00dcc9e8 */
      plVar3 = *(long **)(this + 0x530);
      pcVar4 = *(code **)(*plVar3 + 0x590);
    }
    else {
                    /* try { // try from 00dcbce0 to 00ecbceb has its CatchHandler @ 00dccb44 */
      if (param_3 != 0) goto LAB_00dcbd1c;
      plVar3 = *(long **)(this + 0x530);
                    /* try { // try from 00dcbcec to 00ecbcf7 has its CatchHandler @ 00dccb34 */
      pcVar4 = *(code **)(*plVar3 + 0x540);
    }
    (*pcVar4)(plVar3,param_1);
  }
LAB_00dcbd1c:
                    /* try { // try from 00dcbd2c to 00ecbd4f has its CatchHandler @ 00dccaf4 */
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  return;
}

