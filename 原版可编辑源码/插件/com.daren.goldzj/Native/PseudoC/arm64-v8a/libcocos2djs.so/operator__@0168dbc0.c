
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::SelectParameters const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,SelectParameters *param_2)

{
  SelectParameters SVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  ulong uVar4;
  
  pbVar2 = (basic_ostream *)internal::operator<<(param_1,*param_2);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  SVar1 = param_2[1];
  if (SVar1 == (SelectParameters)0x2) {
    pcVar3 = "False";
    uVar4 = 5;
  }
  else {
    if (SVar1 == (SelectParameters)0x1) {
      pcVar3 = "True";
    }
    else {
      if (SVar1 != (SelectParameters)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pcVar3 = "None";
    }
    uVar4 = 4;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,uVar4);
  return;
}

