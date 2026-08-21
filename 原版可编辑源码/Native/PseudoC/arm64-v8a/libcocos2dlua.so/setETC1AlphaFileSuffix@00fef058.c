
/* cocos2d::TextureCache::setETC1AlphaFileSuffix(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::TextureCache::setETC1AlphaFileSuffix(basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  bool bVar3;
  
  if (param_1 != (basic_string *)&s_etc1AlphaFileSuffix) {
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    bVar3 = ((byte)*param_1 & 1) == 0;
    if (bVar3) {
      pbVar2 = param_1 + 1;
    }
    uVar1 = (ulong)((byte)*param_1 >> 1);
    if (!bVar3) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &s_etc1AlphaFileSuffix,(char *)pbVar2,uVar1);
  }
  return;
}

