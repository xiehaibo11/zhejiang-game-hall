
/* v8::internal::compiler::Operator1<v8::internal::compiler::CreateArrayIteratorParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateArrayIteratorParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CreateArrayIteratorParameters>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::CreateArrayIteratorParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateArrayIteratorParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateArrayIteratorParameters>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  int iVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  ulong uVar4;
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 2) {
    pcVar3 = "IterationKind::kEntries";
    uVar4 = 0x17;
  }
  else if (iVar1 == 1) {
    pcVar3 = "IterationKind::kValues";
    uVar4 = 0x16;
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar3 = "IterationKind::kKeys";
    uVar4 = 0x14;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar3,uVar4);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"]",1);
  return;
}

