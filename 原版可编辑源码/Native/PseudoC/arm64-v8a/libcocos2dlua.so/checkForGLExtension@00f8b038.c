
/* cocos2d::Configuration::checkForGLExtension(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

bool __thiscall
cocos2d::Configuration::checkForGLExtension(Configuration *this,basic_string *param_1)

{
  bool bVar1;
  char *pcVar2;
  basic_string *__needle;
  
  bVar1 = false;
  if (*(char **)(this + 0x40) != (char *)0x0) {
    __needle = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __needle = param_1 + 1;
    }
    pcVar2 = strstr(*(char **)(this + 0x40),(char *)__needle);
    bVar1 = pcVar2 != (char *)0x0;
  }
  return bVar1;
}

