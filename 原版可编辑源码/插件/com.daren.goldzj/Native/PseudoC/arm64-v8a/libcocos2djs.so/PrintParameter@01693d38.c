
/* v8::internal::compiler::Operator1<v8::internal::compiler::SparseInputMask,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::SparseInputMask>,
   v8::internal::compiler::OpHash<v8::internal::compiler::SparseInputMask>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::SparseInputMask,v8::internal::compiler::OpEqualTo<v8::internal::compiler::SparseInputMask>,v8::internal::compiler::OpHash<v8::internal::compiler::SparseInputMask>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  uint uVar3;
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (uVar3 == 0) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"dense",5);
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"sparse:",7);
    if (uVar3 != 1) {
      do {
        pcVar1 = ".";
        if ((uVar3 & 1) != 0) {
          pcVar1 = "^";
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar1,1);
        uVar3 = uVar3 >> 1;
      } while (uVar3 != 1);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"]",1);
  return;
}

