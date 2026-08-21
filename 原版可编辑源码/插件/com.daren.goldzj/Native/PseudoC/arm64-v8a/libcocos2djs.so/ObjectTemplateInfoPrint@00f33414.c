
/* v8::internal::ObjectTemplateInfo::ObjectTemplateInfoPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::ObjectTemplateInfo::ObjectTemplateInfoPrint
          (ObjectTemplateInfo *this,basic_ostream *param_1)

{
  ulong uVar1;
  char *pcVar2;
  bool bVar3;
  basic_ostream *pbVar4;
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"ObjectTemplateInfo");
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - tag: ",9);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  internal::operator<<(pbVar4,(Brief *)&local_28);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - serial_number: ",0x13);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  internal::operator<<(pbVar4,(Brief *)&local_28);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - property_list: ",0x13);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
  internal::operator<<(pbVar4,(Brief *)&local_28);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - property_accessors: ",0x18);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x13);
  internal::operator<<(pbVar4,(Brief *)&local_28);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - constructor: ",0x11);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x17);
  internal::operator<<(pbVar4,(Brief *)&local_28);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - embedder_field_count: ",0x1a);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
             *(uint *)(*(long *)this + 0x1b) >> 2 & 0x1fffffff);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - immutable_proto: ",0x15);
  bVar3 = (*(uint *)(*(long *)this + 0x1b) & 2) != 0;
  pcVar2 = "false";
  if (bVar3) {
    pcVar2 = "true";
  }
  uVar1 = 4;
  if (!bVar3) {
    uVar1 = 5;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,pcVar2,uVar1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

