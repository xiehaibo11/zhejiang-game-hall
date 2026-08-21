
/* cocos2d::StringUtils::UTF8LooseFix(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void cocos2d::StringUtils::UTF8LooseFix(basic_string *param_1,basic_string *param_2)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  char cVar3;
  ulong uVar4;
  basic_string *pbVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  pbVar5 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
    uVar4 = (ulong)((byte)*param_1 >> 1);
  }
  if (0 < (long)uVar4) {
    pbVar2 = pbVar5 + uVar4;
    do {
      uVar4 = getNumBytesForUTF8(*pbVar5);
      pbVar1 = pbVar5 + (uVar4 & 0xffffffff);
      cVar3 = isLegalUTF8Sequence(pbVar5,pbVar1);
      if (cVar3 == '\0') {
        pbVar1 = pbVar5 + 1;
      }
      else if (pbVar1 < pbVar2) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__append_forward_unsafe<unsigned_char_const*>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )param_2,(uchar *)pbVar5,(uchar *)pbVar1);
      }
      pbVar5 = pbVar1;
    } while (pbVar5 < pbVar2);
  }
  return;
}

