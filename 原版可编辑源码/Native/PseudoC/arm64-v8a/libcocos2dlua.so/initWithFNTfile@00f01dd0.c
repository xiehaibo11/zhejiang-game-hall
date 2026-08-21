
/* cocos2d::BMFontConfiguration::initWithFNTfile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

bool __thiscall
cocos2d::BMFontConfiguration::initWithFNTfile(BMFontConfiguration *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = parseConfigFile(this,param_1);
  *(long *)(this + 0xa8) = lVar1;
  return lVar1 != 0;
}

