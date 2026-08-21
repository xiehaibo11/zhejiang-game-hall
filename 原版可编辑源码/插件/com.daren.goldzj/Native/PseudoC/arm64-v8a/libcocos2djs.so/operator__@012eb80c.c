
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::AllocateParameters) */

void __thiscall
v8::internal::compiler::operator<<(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  
  pbVar1 = (basic_ostream *)operator<<();
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  switch(param_3) {
  case 0:
    pcVar2 = "Young";
    uVar3 = 5;
    break;
  case 1:
    pcVar2 = "Old";
    goto LAB_012eb89c;
  case 2:
    pcVar2 = "Code";
    uVar3 = 4;
    break;
  case 3:
    pcVar2 = "Map";
LAB_012eb89c:
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
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,pcVar2,uVar3);
  return;
}

