
/* cocos2d::TextFieldTTF::textFieldWithPlaceHolder(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Size const&,
   cocos2d::TextHAlignment, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float) */

TextFieldTTF *
cocos2d::TextFieldTTF::textFieldWithPlaceHolder
          (float param_1_00,byte *param_1,float *param_2,undefined4 param_4,basic_string *param_5)

{
  ulong uVar1;
  long lVar2;
  TextFieldTTF *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x740,(nothrow_t *)&std::nothrow);
  if (this != (TextFieldTTF *)0x0) {
    TextFieldTTF(this);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,"");
    Label::setDimensions((Label *)this,*param_2,param_2[1]);
    Label::setAlignment((Label *)this,param_4,1);
    initWithPlaceHolder(this,(basic_string *)local_70,param_5,param_1_00);
    if (((byte)local_70[0] & 1) != 0) {
                    /* try { // try from 00f55754 to 0105575f has its CatchHandler @ 00f55bf8 */
      operator_delete(local_60);
    }
    Ref::autorelease((Ref *)this);
    uVar1 = (ulong)(*param_1 >> 1);
    if ((*param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
                    /* try { // try from 00f55778 to 0105578f has its CatchHandler @ 00f55c0c */
    if (uVar1 != 0) {
      (**(code **)(*(long *)this + 0x640))(this,param_1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

