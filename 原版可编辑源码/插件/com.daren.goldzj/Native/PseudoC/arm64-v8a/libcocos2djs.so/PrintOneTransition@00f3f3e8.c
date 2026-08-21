
/* v8::internal::TransitionsAccessor::PrintOneTransition(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::Name, v8::internal::Map) */

void v8::internal::TransitionsAccessor::PrintOneTransition
               (basic_ostream *param_1,ulong param_2,ulong param_3)

{
  size_t sVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong local_38;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n     ",6);
  uVar5 = param_2 & 0xffffffff00000000;
  local_38 = param_2;
  if (*(ushort *)((uVar5 | 7) + (ulong)*(uint *)(param_2 - 1)) < 0x40) {
    String::StringPrint((String *)&local_38,param_1);
  }
  else {
    internal::operator<<(param_1,(Brief *)&local_38);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,": ",2);
  iVar4 = (int)param_2;
  pbVar2 = param_1;
  if (iVar4 == *(int *)(uVar5 + 0xb98)) {
    pcVar3 = "(transition to non-extensible)";
    uVar5 = 0x1e;
  }
  else if (iVar4 == *(int *)(uVar5 + 0xbe0)) {
    pcVar3 = "(transition to sealed)";
    uVar5 = 0x16;
  }
  else if (iVar4 == *(int *)(uVar5 + 0xb68)) {
    pcVar3 = "(transition to frozen)";
    uVar5 = 0x16;
  }
  else if (iVar4 == *(int *)(uVar5 + 0xb48)) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"(transition to ",0xf);
    pcVar3 = (char *)ElementsKindToString(*(byte *)(param_3 + 10) >> 3);
    sVar1 = strlen(pcVar3);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,pcVar3,sVar1);
    pcVar3 = ")";
    uVar5 = 1;
  }
  else if (iVar4 == *(int *)(uVar5 + 0xbf0)) {
    pcVar3 = " (transition to strict function)";
    uVar5 = 0x20;
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"(transition to ",0xf);
    local_38 = param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0x17);
    DescriptorArray::PrintDescriptorDetails
              ((DescriptorArray *)&local_38,param_1,
               (long)(int)((*(uint *)(param_3 + 0xb) >> 10 & 0x3ff) - 1),1);
    pcVar3 = ")";
    uVar5 = 1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,uVar5);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," -> ",4);
  local_38 = param_3;
  internal::operator<<(pbVar2,(Brief *)&local_38);
  return;
}

