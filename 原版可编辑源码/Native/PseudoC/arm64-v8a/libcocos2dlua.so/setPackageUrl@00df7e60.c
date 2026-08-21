
/* cocos2d::extension::AssetsManager::setPackageUrl(char const*) */

void __thiscall cocos2d::extension::AssetsManager::setPackageUrl(AssetsManager *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x328),param_1,sVar1);
  return;
}

