
/* v8::internal::Script::ScriptPrint(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >&) */

void __thiscall v8::internal::Script::ScriptPrint(Script *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong uVar2;
  uint *puVar3;
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"Script");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - source: ",0xc);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - name: ",10);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - line_offset: ",0x11);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 0xb) >> 1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - column_offset: ",0x13);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 0xf) >> 1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - type: ",10);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 0x17) >> 1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - id: ",8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 0x1f) >> 1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - context data: ",0x12);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x13);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - compilation type: ",0x16);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(uint *)(*(long *)this + 0x2f) >> 1 & 1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - line ends: ",0xf);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x1b);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  puVar3 = (uint *)(*(ulong *)this + 0x23);
  if (((*puVar3 & 1) != 0) &&
     (*(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | *puVar3) - 1)) == 0xa6)) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - eval from shared: ",0x16);
    local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x23);
    internal::operator<<(pbVar1,(Brief *)&local_28);
    uVar2 = *(ulong *)this & 0xffffffff00000000;
    puVar3 = (uint *)(*(ulong *)this + 0x23);
  }
  if (((*puVar3 & 1) != 0) &&
     (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | *puVar3) - 1)) - 0x76 < 0xf)) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - wrapped arguments: ",0x17);
    local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x23);
    internal::operator<<(pbVar1,(Brief *)&local_28);
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - eval from position: ",0x18);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 0x27) >> 1);
  uVar2 = *(ulong *)this;
  if (((*(uint *)(uVar2 + 0x17) & 0xfffffffe) == 6) &&
     (1 < *(int *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x23)) + 3))) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - wasm_breakpoint_infos: ",0x1b);
    local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x23);
    internal::operator<<(pbVar1,(Brief *)&local_28);
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - shared function infos: ",0x1b);
  uVar2 = *(ulong *)this;
  if ((*(uint *)(uVar2 + 0x17) & 0xfffffffe) == 6) {
    local_28 = *(ulong *)((uVar2 & 0xffffffff00000000) + 0x420);
  }
  else {
    local_28 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x2b);
  }
  internal::operator<<(pbVar1,(Brief *)&local_28);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

