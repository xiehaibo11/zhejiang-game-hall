
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   std::__ndk1::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

basic_ostream * std::__ndk1::operator<<(basic_ostream *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  basic_ostream *pbVar3;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)((byte)*param_2 >> 1);
  }
  pbVar3 = __put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,(char *)pbVar2,uVar1);
  return pbVar3;
}

