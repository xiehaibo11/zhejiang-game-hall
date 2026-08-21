
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::ElementsTransition) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined8 local_8;
  
  if (*param_2 == '\x01') {
    pcVar2 = "slow-transition from ";
  }
  else {
    if (*param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar2 = "fast-transition from ";
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar2,0x15);
  local_8 = **(undefined8 **)(param_2 + 8);
  pbVar1 = (basic_ostream *)internal::operator<<(pbVar1,(Brief *)&local_8);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1," to ",4);
  local_28 = **(undefined8 **)(param_2 + 0x10);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  return;
}

