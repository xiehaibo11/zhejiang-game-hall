
/* universe::CustomFileManager::isAbsolutePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

bool __thiscall
universe::CustomFileManager::isAbsolutePath(CustomFileManager *this,basic_string *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
  return *pbVar1 == (basic_string)0x2f;
}

