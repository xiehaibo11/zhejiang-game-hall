
/* cocos2d::FileUtils::renameFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

bool __thiscall
cocos2d::FileUtils::renameFile(FileUtils *this,basic_string *param_1,basic_string *param_2)

{
  int iVar1;
  basic_string *__old;
  basic_string *__new;
  
  __old = *(basic_string **)(param_1 + 0x10);
  __new = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __old = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    __new = param_2 + 1;
  }
  iVar1 = rename((char *)__old,(char *)__new);
  return iVar1 == 0;
}

