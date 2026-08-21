
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::AsEscapedUC16ForJSON const&) */

void v8::internal::operator<<(basic_ostream *param_1,AsEscapedUC16ForJSON *param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  char acStack_34 [12];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar1 = *(ushort *)param_2;
  uVar2 = uVar1 - 9;
  switch(uVar2) {
  case 0:
    pcVar5 = "\\t";
    break;
  case 1:
    pcVar5 = "\\n";
    break;
  default:
    pcVar5 = "%c";
    if (4 < (uVar2 & 0xffff) && 0x5e < (uVar1 - 0x20 & 0xffff) || uVar1 == 0x5c) {
      pcVar5 = "\\u%04x";
    }
    FUN_011fce2c(acStack_34,10,10,pcVar5);
    sVar4 = strlen(acStack_34);
    pcVar5 = acStack_34;
    goto LAB_011fcbb0;
  case 4:
    pcVar5 = "\\r";
    break;
  case 0x19:
    pcVar5 = "\\\"";
  }
  sVar4 = 2;
LAB_011fcbb0:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar5,sVar4);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

