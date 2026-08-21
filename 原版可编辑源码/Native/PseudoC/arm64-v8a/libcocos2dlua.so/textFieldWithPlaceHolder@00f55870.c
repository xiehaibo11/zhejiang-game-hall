
/* cocos2d::TextFieldTTF::textFieldWithPlaceHolder(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

TextFieldTTF *
cocos2d::TextFieldTTF::textFieldWithPlaceHolder
          (basic_string *param_1,basic_string *param_2,float param_3)

{
  ulong uVar1;
  long lVar2;
  TextFieldTTF *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* try { // try from 00f5587c to 0105589b has its CatchHandler @ 00f55c04 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x740,(nothrow_t *)&std::nothrow);
  if (this != (TextFieldTTF *)0x0) {
    TextFieldTTF(this);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,"");
    initWithPlaceHolder(this,(basic_string *)local_60,param_2,param_3);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    Ref::autorelease((Ref *)this);
    uVar1 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
                    /* try { // try from 00f55910 to 01055927 has its CatchHandler @ 00f55c14 */
    if (uVar1 != 0) {
      (**(code **)(*(long *)this + 0x640))(this,param_1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

