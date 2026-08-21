
/* cocos2d::FileUtils::setWritablePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::FileUtils::setWritablePath(FileUtils *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(this + 8));
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x108) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x108),(char *)pbVar2,uVar1);
  }
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(this + 8));
  return;
}

