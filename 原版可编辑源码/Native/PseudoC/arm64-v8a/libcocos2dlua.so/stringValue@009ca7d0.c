
/* cocos2d::LuaValue::stringValue(char const*) */

void __thiscall cocos2d::LuaValue::stringValue(LuaValue *this,char *param_1)

{
  LuaValue *pLVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  undefined8 *in_x8;
  
  in_x8[2] = 0;
  *in_x8 = 0;
  *(undefined4 *)(in_x8 + 1) = 3;
  this_00 = operator_new(0x18);
  pLVar1 = (LuaValue *)&DAT_013c996e;
  if (this != (LuaValue *)0x0) {
    pLVar1 = this;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(this_00,(char *)pLVar1);
  *in_x8 = this_00;
  return;
}

