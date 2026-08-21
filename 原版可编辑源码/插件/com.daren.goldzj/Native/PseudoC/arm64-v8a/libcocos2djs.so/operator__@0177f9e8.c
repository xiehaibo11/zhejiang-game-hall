
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::LoadTransformParameters) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,ulong param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  int iVar4;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"(",1)
  ;
  iVar4 = (int)param_2;
  if (iVar4 == 2) {
    pcVar2 = "kProtected";
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pcVar2 = "kNormal";
      uVar3 = 7;
      goto LAB_0177fa44;
    }
    pcVar2 = "kUnaligned";
  }
  uVar3 = 10;
LAB_0177fa44:
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,pcVar2,uVar3);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1," ",1);
  pbVar1 = (basic_ostream *)operator<<(pbVar1,param_2 >> 0x20);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,")",1);
  return;
}

