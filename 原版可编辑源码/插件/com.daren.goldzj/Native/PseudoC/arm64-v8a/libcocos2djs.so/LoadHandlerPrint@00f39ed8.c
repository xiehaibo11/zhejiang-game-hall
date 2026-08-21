
/* v8::internal::LoadHandler::LoadHandlerPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::LoadHandler::LoadHandlerPrint(LoadHandler *this,basic_ostream *param_1)

{
  int iVar1;
  basic_ostream *pbVar2;
  ulong local_18;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"LoadHandler");
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - handler: ",0xd);
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  internal::operator<<(pbVar2,(Brief *)&local_18);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - validity_cell: ",0x13);
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  internal::operator<<(pbVar2,(Brief *)&local_18);
  iVar1 = (uint)*(byte *)((*(ulong *)this & 0xffffffff00000000 |
                          (ulong)*(uint *)(*(ulong *)this - 1)) + 3) * 4 + -0xc;
  if (3 < iVar1) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - data1: ",0xb);
    local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
    internal::operator<<(pbVar2,(Brief *)&local_18);
    if (7 < iVar1) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - data2: ",0xb);
      local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
      internal::operator<<(pbVar2,(Brief *)&local_18);
      if (0xb < iVar1) {
        pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"\n - data3: ",0xb);
        local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x13);
        internal::operator<<(pbVar2,(Brief *)&local_18);
      }
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

