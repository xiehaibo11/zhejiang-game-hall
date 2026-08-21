
/* cocos2d::__String::TEMPNAMEPLACEHOLDERVALUE(cocos2d::__String const&) */

__String * __thiscall cocos2d::__String::operator=(__String *this,__String *param_1)

{
  ulong uVar1;
  __String *p_Var2;
  
  if (this != param_1) {
    uVar1 = (ulong)((byte)param_1[0x30] >> 1);
    p_Var2 = param_1 + 0x31;
    if (((byte)param_1[0x30] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x38);
      p_Var2 = *(__String **)(param_1 + 0x40);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),(char *)p_Var2,uVar1);
  }
  return this;
}

