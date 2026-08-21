
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::TypedObjectStateInfo const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,TypedObjectStateInfo *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  basic_ostream *pbVar4;
  
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"id:",3);
  pbVar4 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,*(uint *)param_2)
  ;
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,", ",2)
  ;
  puVar1 = (undefined2 *)**(long **)(param_2 + 8);
  puVar2 = (undefined2 *)(*(long **)(param_2 + 8))[1];
  if (puVar1 != puVar2) {
    internal::operator<<(pbVar4,*puVar1);
    while (puVar1 = puVar1 + 1, puVar1 != puVar2) {
      uVar3 = *puVar1;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,", ",2);
      internal::operator<<(pbVar4,uVar3);
    }
  }
  return pbVar4;
}

