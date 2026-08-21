
/* cocos2d::FileUtils::removeFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

bool __thiscall cocos2d::FileUtils::removeFile(FileUtils *this,basic_string *param_1)

{
  int iVar1;
  basic_string *__filename;
  
  __filename = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __filename = param_1 + 1;
  }
  iVar1 = ::remove((char *)__filename);
  return iVar1 == 0;
}

