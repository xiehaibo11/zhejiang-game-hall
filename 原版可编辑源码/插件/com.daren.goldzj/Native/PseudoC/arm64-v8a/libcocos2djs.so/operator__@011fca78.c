
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::AsReversiblyEscapedUC16 const&) */

void v8::internal::operator<<(basic_ostream *param_1,AsReversiblyEscapedUC16 *param_2)

{
  ushort uVar1;
  long lVar2;
  size_t sVar3;
  char *pcVar4;
  char acStack_34 [12];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)param_2;
  if (uVar1 - 0x20 < 0x5f) {
    if (uVar1 == 0x5c) {
      pcVar4 = "\\x%02x";
      goto LAB_011fcaec;
    }
  }
  else if (4 < uVar1 - 9) {
    pcVar4 = "\\x%02x";
    if (0xff < uVar1) {
      pcVar4 = "\\u%04x";
    }
    goto LAB_011fcaec;
  }
  pcVar4 = "%c";
LAB_011fcaec:
  FUN_011fce2c(acStack_34,10,10,pcVar4);
  sVar3 = strlen(acStack_34);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,acStack_34,sVar3);
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

