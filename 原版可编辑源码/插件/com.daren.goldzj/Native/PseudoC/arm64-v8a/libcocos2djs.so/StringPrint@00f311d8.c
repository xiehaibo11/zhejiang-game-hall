
/* v8::internal::String::StringPrint(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >&) */

void __thiscall v8::internal::String::StringPrint(String *this,basic_ostream *param_1)

{
  int iVar1;
  undefined2 uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  uint local_40;
  int local_3c;
  ulong local_38;
  
  uVar5 = *(ulong *)this;
  uVar4 = uVar5 & 0xffffffff00000000;
  if ((*(byte *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) >> 3 & 1) == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"u",1);
    uVar5 = *(ulong *)this;
    uVar4 = uVar5 & 0xffffffff00000000;
  }
  puVar6 = (uint *)(uVar5 - 1);
  if (*(ushort *)((uVar4 | *puVar6) + 7) < 0x20) {
    pcVar3 = "#";
  }
  else {
    if ((*(ushort *)((uVar4 | *puVar6) + 7) & 7) == 1) {
      pcVar3 = "c\"";
      uVar4 = 2;
      goto LAB_00f312a4;
    }
    if ((*(ushort *)((uVar4 | *puVar6) + 7) & 7) == 5) {
      pcVar3 = ">\"";
      uVar4 = 2;
      goto LAB_00f312a4;
    }
    pcVar3 = "\"";
  }
  uVar4 = 1;
LAB_00f312a4:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar3,uVar4);
  uVar4 = *(ulong *)this;
  iVar1 = 0x55;
  if (FLAG_use_verbose_printer != '\0' || *(int *)(uVar4 + 7) < 0x65) {
    iVar1 = *(int *)(uVar4 + 7);
  }
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      local_40 = (uint)*(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 7);
      local_3c = iVar7;
      local_38 = uVar4;
      uVar2 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                        (&local_40,&local_38,&local_3c);
      local_38 = CONCAT62(local_38._2_6_,uVar2);
      internal::operator<<(param_1,(AsUC16 *)&local_38);
      uVar4 = *(ulong *)this;
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  if (iVar1 != *(int *)(uVar4 + 7)) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"...<truncated>",0xe);
    uVar4 = *(ulong *)this;
  }
  if (0x1f < *(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 7)) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\"",1);
  }
  return;
}

