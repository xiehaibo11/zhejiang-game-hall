
/* cocos2d::StringUtils::StringUTF8::StringUTF8(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::StringUtils::StringUTF8::StringUTF8(StringUTF8 *this,basic_string *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  replace(this,param_1);
  return;
}

