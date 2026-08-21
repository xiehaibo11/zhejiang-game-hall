
/* cocos2d::LuaValue::stringValue(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::LuaValue::stringValue(LuaValue *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  undefined8 *in_x8;
  
  in_x8[2] = 0;
  *in_x8 = 0;
  *(undefined4 *)(in_x8 + 1) = 3;
  this_00 = operator_new(0x18);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(this_00,(basic_string *)this);
  *in_x8 = this_00;
  return;
}

