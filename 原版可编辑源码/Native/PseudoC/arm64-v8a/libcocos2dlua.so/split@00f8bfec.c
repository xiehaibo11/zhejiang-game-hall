
/* cocos2d::Console::Utility::split(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, char) */

void __thiscall cocos2d::Console::Utility::split(Utility *this,basic_string *param_1,char param_2)

{
  vector *in_x8;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  split((basic_string *)this,(char)param_1,in_x8);
  return;
}

