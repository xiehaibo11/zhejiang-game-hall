
/* v8::internal::SourcePosition::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::SharedFunctionInfo) const */

void __thiscall
v8::internal::SourcePosition::Print(SourcePosition *this,basic_ostream *param_1,ulong param_3)

{
  uint uVar1;
  size_t sVar2;
  basic_ostream *pbVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  char *local_18;
  
  local_40 = 0xffffffffffffffff;
  uStack_38 = 0xffffffffffffffff;
  uVar4 = param_3 & 0xffffffff00000000;
  pcVar6 = (char *)(uVar4 | *(uint *)(param_3 + 0xf));
  pcVar5 = pcVar6;
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(pcVar6 + -1)) == 0x5b) {
    pcVar5 = (char *)(uVar4 | *(uint *)(pcVar6 + 0xb));
  }
  if (*(short *)(((ulong)pcVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(pcVar5 + -1)) == 0x65)
  {
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(pcVar6 + -1)) == 0x5b) {
      pcVar6 = (char *)(uVar4 | *(uint *)(pcVar6 + 0xb));
    }
    uVar1 = *(uint *)(pcVar6 + 7);
    local_18 = pcVar6;
    Script::GetPositionInfo((Script *)&local_18,(*(uint *)this >> 1 & 0x3fffffff) - 1,&local_40,1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"<",1);
    if (((uVar1 & 1) != 0) &&
       (uVar4 = (ulong)pcVar6 & 0xffffffff00000000 | (ulong)uVar1,
       *(ushort *)(((ulong)pcVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40))
    {
      local_48 = uVar4;
      String::ToCString(&local_18,&local_48,1,0,0);
      pcVar5 = local_18;
      sVar2 = strlen(local_18);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,pcVar5,sVar2);
      pcVar5 = local_18;
      local_18 = (char *)0x0;
      if (pcVar5 != (char *)0x0) {
        operator_delete__(pcVar5);
      }
      goto LAB_014e6dec;
    }
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"<",1);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"unknown",7);
LAB_014e6dec:
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,":",1)
  ;
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,(int)local_40 + 1
                     );
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                      local_40._4_4_ + 1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,">",1);
  return;
}

