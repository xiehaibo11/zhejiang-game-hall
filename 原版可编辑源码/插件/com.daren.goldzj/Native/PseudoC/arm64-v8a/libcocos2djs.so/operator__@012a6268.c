
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::BlockStartsAsJSON const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,BlockStartsAsJSON *param_2)

{
  int iVar1;
  basic_ostream *pbVar2;
  long *plVar3;
  ulong uVar4;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,", \"blockIdToOffset\": {",0x16);
  plVar3 = *(long **)param_2;
  if (plVar3[1] != *plVar3) {
    iVar1 = *(int *)*plVar3;
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\"",1);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,0);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"\":",2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,iVar1);
    if (1 < (ulong)((*(long **)param_2)[1] - **(long **)param_2 >> 2)) {
      uVar4 = 1;
      do {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2);
        iVar1 = *(int *)(**(long **)param_2 + uVar4 * 4);
        pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"\"",1);
        pbVar2 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,uVar4);
        pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar2,"\":",2);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,iVar1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < (ulong)((*(long **)param_2)[1] - **(long **)param_2 >> 2));
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"},",2);
  return param_1;
}

