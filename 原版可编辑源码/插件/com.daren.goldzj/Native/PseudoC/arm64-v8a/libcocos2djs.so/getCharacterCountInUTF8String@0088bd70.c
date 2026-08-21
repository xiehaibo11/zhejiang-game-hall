
/* cocos2d::StringUtils::getCharacterCountInUTF8String(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

long cocos2d::StringUtils::getCharacterCountInUTF8String(basic_string *param_1)

{
  int iVar1;
  basic_string *pbVar2;
  
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
  }
  iVar1 = getUTF8StringLength(pbVar2);
  return (long)iVar1;
}

