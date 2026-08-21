
/* v8::internal::FunctionTemplateInfo::FunctionTemplateInfoPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::FunctionTemplateInfo::FunctionTemplateInfoPrint
          (FunctionTemplateInfo *this,basic_ostream *param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  basic_ostream *pbVar5;
  size_t sVar6;
  ulong uVar7;
  char *pcVar8;
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"FunctionTemplateInfo");
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - class name: ",0x10);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x1b);
  internal::operator<<(pbVar5,(Brief *)&local_28);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - tag: ",9);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  internal::operator<<(pbVar5,(Brief *)&local_28);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - serial_number: ",0x13);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  internal::operator<<(pbVar5,(Brief *)&local_28);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - property_list: ",0x13);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
  internal::operator<<(pbVar5,(Brief *)&local_28);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - call_code: ",0xf);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x17);
  internal::operator<<(pbVar5,(Brief *)&local_28);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - property_accessors: ",0x18);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x13);
  internal::operator<<(pbVar5,(Brief *)&local_28);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - signature: ",0xf);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x1f);
  internal::operator<<(pbVar5,(Brief *)&local_28);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - cached_property_name: ",0x1a);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x33);
  internal::operator<<(pbVar5,(Brief *)&local_28);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - undetectable: ",0x12);
  pcVar1 = "true";
  pcVar2 = "false";
  bVar4 = (*(uint *)(*(long *)this + 0x2b) & 2) != 0;
  pcVar8 = pcVar2;
  if (bVar4) {
    pcVar8 = pcVar1;
  }
  uVar7 = 4;
  if (!bVar4) {
    uVar7 = 5;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar8,uVar7);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - need_access_check: ",0x17);
  bVar4 = (*(uint *)(*(long *)this + 0x2b) & 4) != 0;
  pcVar8 = pcVar2;
  if (bVar4) {
    pcVar8 = pcVar1;
  }
  uVar7 = 4;
  if (!bVar4) {
    uVar7 = 5;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar8,uVar7);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - instantiated: ",0x12);
  uVar3 = *(uint *)(*(ulong *)this + 0x27);
  pcVar8 = pcVar2;
  if (((uVar3 & 1) != 0) &&
     (uVar7 = *(ulong *)this & 0xffffffff00000000, pcVar8 = pcVar1,
     *(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar3) - 1)) != 0xa6)) {
    pcVar8 = pcVar2;
  }
  sVar6 = strlen(pcVar8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar8,sVar6);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - rare_data: ",0xf);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x23);
  internal::operator<<(pbVar5,(Brief *)&local_28);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

