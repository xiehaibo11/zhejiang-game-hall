
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::SparseInputMask const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,SparseInputMask *param_2)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  uint uVar3;
  
  uVar3 = *(uint *)param_2;
  if (uVar3 != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"sparse:",7);
    if (uVar3 != 1) {
      do {
        pcVar1 = ".";
        if ((uVar3 & 1) != 0) {
          pcVar1 = "^";
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,1)
        ;
        uVar3 = uVar3 >> 1;
      } while (uVar3 != 1);
    }
    return param_1;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"dense",5);
  return pbVar2;
}

