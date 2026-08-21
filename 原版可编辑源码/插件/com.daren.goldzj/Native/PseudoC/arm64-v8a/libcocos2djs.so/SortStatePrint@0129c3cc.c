
/* v8::internal::TorqueGeneratedSortState<v8::internal::SortState,
   v8::internal::Struct>::SortStatePrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::TorqueGeneratedSortState<v8::internal::SortState,v8::internal::Struct>::SortStatePrint
          (TorqueGeneratedSortState<v8::internal::SortState,v8::internal::Struct> *this,
          basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"TorqueGeneratedSortState");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - receiver: ",0xe);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - initialReceiverMap: ",0x18);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - initialReceiverLength: ",0x1b);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - userCmpFn: ",0xf);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - sortComparePtr: ",0x14);
  local_28 = (ulong)*(uint *)(*(long *)this + 0x13);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - loadFn: ",0xc);
  local_28 = (ulong)*(uint *)(*(long *)this + 0x17);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - storeFn: ",0xd);
  local_28 = (ulong)*(uint *)(*(long *)this + 0x1b);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - deleteFn: ",0xe);
  local_28 = (ulong)*(uint *)(*(long *)this + 0x1f);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - canUseSameAccessorFn: ",0x1a);
  local_28 = (ulong)*(uint *)(*(long *)this + 0x23);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - minGallop: ",0xf);
  local_28 = (ulong)*(uint *)(*(long *)this + 0x27);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - pendingRunsSize: ",0x15);
  local_28 = (ulong)*(uint *)(*(long *)this + 0x2b);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - pendingRuns: ",0x11);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x2f);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - workArray: ",0xf);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x33);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - tempArray: ",0xf);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x37);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - sortLength: ",0x10);
  local_28 = (ulong)*(uint *)(*(long *)this + 0x3b);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - numberOfUndefined: ",0x17);
  local_28 = (ulong)*(uint *)(*(long *)this + 0x3f);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

