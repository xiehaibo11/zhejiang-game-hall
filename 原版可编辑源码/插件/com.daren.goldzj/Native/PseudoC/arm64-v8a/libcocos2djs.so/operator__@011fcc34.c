
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::AsUC16 const&) */

void v8::internal::operator<<(basic_ostream *param_1,AsUC16 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  size_t sVar4;
  char acStack_34 [12];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  pcVar1 = "\\x%02x";
  if (0xff < *(ushort *)param_2) {
    pcVar1 = "\\u%04x";
  }
  pcVar2 = "%c";
  if (0x5e < *(ushort *)param_2 - 0x20) {
    pcVar2 = pcVar1;
  }
  FUN_011fce2c(acStack_34,10,10,pcVar2);
  sVar4 = strlen(acStack_34);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,acStack_34,sVar4);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

