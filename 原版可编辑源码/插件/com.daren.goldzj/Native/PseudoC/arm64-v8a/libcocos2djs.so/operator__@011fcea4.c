
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::AsHexBytes const&) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,AsHexBytes *param_2)

{
  uint uVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar7;
  char acStack_7c [20];
  long local_68;
  ulong uVar6;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar6 = (ulong)(byte)param_2[8];
  uVar5 = (uint)(byte)param_2[8];
  if (uVar6 < 8) {
    uVar4 = uVar6 << 3;
    do {
      uVar5 = (uint)uVar6;
      if (*(ulong *)param_2 >> (uVar4 & 0x3f) == 0) {
        if ((uVar6 & 0xff) != 0) goto LAB_011fcf18;
        goto LAB_011fd01c;
      }
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 8;
    } while (((uint)uVar6 & 0xff) != 8);
    uVar5 = 8;
  }
LAB_011fcf18:
  uVar6 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar6 = ((ulong)(uVar5 - 1) & 0xff) << 3;
  }
  FUN_011fce2c(acStack_7c,0x13,0x13,"%s%.*lx",&DAT_0189703a,2,
               *(ulong *)param_2 >> (uVar6 & 0x3f) & 0xff);
  sVar3 = strlen(acStack_7c);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,acStack_7c,sVar3);
  if (1 < (uVar5 & 0xff)) {
    uVar7 = 1;
    do {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1);
      uVar1 = uVar7;
      if (*(int *)(param_2 + 0xc) != 0) {
        uVar1 = uVar5 + ~uVar7;
      }
      FUN_011fce2c(acStack_7c,0x13,0x13,"%s%.*lx",&DAT_0189703a,2,
                   *(ulong *)param_2 >> (((ulong)uVar1 & 7) << 3) & 0xff);
      sVar3 = strlen(acStack_7c);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,acStack_7c,sVar3);
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xff) < (uVar5 & 0xff));
  }
LAB_011fd01c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

