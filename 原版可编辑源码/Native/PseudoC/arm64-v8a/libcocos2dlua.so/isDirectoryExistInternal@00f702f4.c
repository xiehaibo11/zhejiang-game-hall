
/* cocos2d::FileUtils::isDirectoryExistInternal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

bool __thiscall cocos2d::FileUtils::isDirectoryExistInternal(FileUtils *this,basic_string *param_1)

{
  int iVar1;
  basic_string *__file;
  uint local_80;
  
  __file = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __file = param_1 + 1;
  }
  iVar1 = stat((char *)__file,(stat *)&stack0xffffffffffffff70);
  return iVar1 == 0 && (local_80 & 0xf000) == 0x4000;
}

