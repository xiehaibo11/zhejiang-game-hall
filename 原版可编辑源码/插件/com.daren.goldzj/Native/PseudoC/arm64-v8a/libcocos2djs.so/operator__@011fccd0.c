
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::AsUC32 const&) */

void v8::internal::operator<<(basic_ostream *param_1,AsUC32 *param_2)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char acStack_38 [16];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar2 = *(uint *)param_2;
  if ((int)uVar2 < 0x10000) {
    pcVar1 = "\\x%02x";
    if (0xff < (uVar2 & 0xffff)) {
      pcVar1 = "\\u%04x";
    }
    pcVar7 = "%c";
    if (0x5e < (uVar2 - 0x20 & 0xffff)) {
      pcVar7 = pcVar1;
    }
    uVar5 = 10;
    uVar6 = 10;
  }
  else {
    pcVar7 = "\\u{%06x}";
    uVar5 = 0xd;
    uVar6 = 0xd;
  }
  FUN_011fce2c(acStack_38,uVar5,uVar6,pcVar7);
  sVar4 = strlen(acStack_38);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,acStack_38,sVar4);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

