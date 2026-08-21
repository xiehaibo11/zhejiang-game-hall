
/* v8::internal::StackFrameInfo::StackFrameInfoPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::StackFrameInfo::StackFrameInfoPrint(StackFrameInfo *this,basic_ostream *param_1)

{
  ulong uVar1;
  char *pcVar2;
  bool bVar3;
  basic_ostream *pbVar4;
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"StackFrame");
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - line_number: ",0x11);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
             *(int *)(*(long *)this + 3) >> 1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - column_number: ",0x13);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
             *(int *)(*(long *)this + 7) >> 1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - script_id: ",0xf);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
             *(int *)(*(long *)this + 0xf) >> 1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - script_name: ",0x11);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x17);
  internal::operator<<(pbVar4,(Brief *)&local_28);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - script_name_or_source_url: ",0x1f);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x1b);
  internal::operator<<(pbVar4,(Brief *)&local_28);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - function_name: ",0x13);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x1f);
  internal::operator<<(pbVar4,(Brief *)&local_28);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - is_eval: ",0xd);
  bVar3 = (*(uint *)(*(long *)this + 0x37) & 2) != 0;
  pcVar2 = "false";
  if (bVar3) {
    pcVar2 = "true";
  }
  uVar1 = 4;
  if (!bVar3) {
    uVar1 = 5;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,pcVar2,uVar1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - is_constructor: ",0x14);
  bVar3 = (*(uint *)(*(long *)this + 0x37) & 4) != 0;
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

