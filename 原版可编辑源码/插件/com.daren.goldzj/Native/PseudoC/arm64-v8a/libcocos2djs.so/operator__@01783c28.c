
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::S8x16ShuffleParameter const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,S8x16ShuffleParameter *param_2)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    pcVar1 = "";
    if (lVar3 != 0xf) {
      pcVar1 = ",";
    }
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                        (uint)(byte)param_2[lVar3]);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar2,pcVar1,(ulong)(lVar3 != 0xf));
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  return param_1;
}

