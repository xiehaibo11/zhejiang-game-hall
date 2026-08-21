
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::AsHex const&) */

void v8::internal::operator<<(basic_ostream *param_1,AsHex *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  size_t sVar3;
  char acStack_3c [20];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = &DAT_0189703a;
  if (param_2[9] != (AsHex)0x0) {
    puVar1 = &DAT_019d55d6;
  }
  FUN_011fce2c(acStack_3c,0x13,0x13,"%s%.*lx",puVar1,param_2[8],*(undefined8 *)param_2);
  sVar3 = strlen(acStack_3c);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,acStack_3c,sVar3);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

