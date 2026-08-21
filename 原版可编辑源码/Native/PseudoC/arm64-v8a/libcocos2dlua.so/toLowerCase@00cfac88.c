
/* cocosbuilder::CCBReader::toLowerCase(char const*) */

void __thiscall cocosbuilder::CCBReader::toLowerCase(CCBReader *this,char *param_1)

{
  int iVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,(char *)this);
  if (((byte)*in_x8 & 1) == 0) {
    pbVar2 = in_x8 + 1;
    pbVar4 = pbVar2 + ((byte)*in_x8 >> 1);
    if (pbVar2 == pbVar4) {
      return;
    }
  }
  else {
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (in_x8 + 0x10);
    pbVar4 = pbVar2 + *(long *)(in_x8 + 8);
    if (pbVar2 == pbVar4) {
      return;
    }
  }
  do {
    iVar1 = tolower((int)(char)*pbVar2);
    pbVar3 = pbVar2 + 1;
    *pbVar2 = SUB41(iVar1,0);
    pbVar2 = pbVar3;
  } while (pbVar4 != pbVar3);
  return;
}

