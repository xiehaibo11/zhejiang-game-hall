
/* v8::internal::compiler::Operator1<v8::internal::AllocationType,
   v8::internal::compiler::OpEqualTo<v8::internal::AllocationType>,
   v8::internal::compiler::OpHash<v8::internal::AllocationType>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::AllocationType,v8::internal::compiler::OpEqualTo<v8::internal::AllocationType>,v8::internal::compiler::OpHash<v8::internal::AllocationType>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  switch(*(undefined1 *)(param_1 + 0x2c)) {
  case 0:
    pcVar2 = "Young";
    uVar3 = 5;
    break;
  case 1:
    pcVar2 = "Old";
    goto LAB_012f8520;
  case 2:
    pcVar2 = "Code";
    uVar3 = 4;
    break;
  case 3:
    pcVar2 = "Map";
LAB_012f8520:
    uVar3 = 3;
    break;
  case 4:
    pcVar2 = "ReadOnly";
    uVar3 = 8;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,pcVar2,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"]",1);
  return;
}

