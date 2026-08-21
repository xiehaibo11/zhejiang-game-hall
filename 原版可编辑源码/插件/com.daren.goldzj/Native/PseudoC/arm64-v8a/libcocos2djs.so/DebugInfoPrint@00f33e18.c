
/* v8::internal::DebugInfo::DebugInfoPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::DebugInfo::DebugInfoPrint(DebugInfo *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong uVar2;
  ulong local_18;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"DebugInfo");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - flags: ",0xb);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 0x1b) >> 1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - debugger_hints: ",0x14);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 7) >> 1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - shared: ",0xc);
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  internal::operator<<(pbVar1,(Brief *)&local_18);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - script: ",0xc);
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar1,(Brief *)&local_18);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - original bytecode array: ",0x1d);
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
  internal::operator<<(pbVar1,(Brief *)&local_18);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - debug bytecode array: ",0x1a);
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x13);
  internal::operator<<(pbVar1,(Brief *)&local_18);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - break_points: ",0x12);
  uVar2 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x17);
  local_18 = uVar2;
  HeapObject::PrintHeader((HeapObject *)&local_18,param_1,"FixedArray");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - length: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,*(int *)(uVar2 + 3) >> 1);
  FUN_00f3cc20(param_1,uVar2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - coverage_info: ",0x13);
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x1f);
  internal::operator<<(pbVar1,(Brief *)&local_18);
  return;
}

