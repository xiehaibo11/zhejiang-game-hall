
/* v8::internal::compiler::Operator1<v8::internal::compiler::StackCheckKind,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::StackCheckKind>,
   v8::internal::compiler::OpHash<v8::internal::compiler::StackCheckKind>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::StackCheckKind,v8::internal::compiler::OpEqualTo<v8::internal::compiler::StackCheckKind>,v8::internal::compiler::OpHash<v8::internal::compiler::StackCheckKind>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    pcVar2 = "JSFunctionEntry";
    break;
  case 1:
    pcVar2 = "JSIterationBody";
    break;
  case 2:
    pcVar2 = "CodeStubAssembler";
    uVar3 = 0x11;
    goto LAB_0175bcd8;
  case 3:
    pcVar2 = "Wasm";
    uVar3 = 4;
    goto LAB_0175bcd8;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar3 = 0xf;
LAB_0175bcd8:
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,pcVar2,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"]",1);
  return;
}

