
/* v8::internal::WasmExportedFunctionData::WasmExportedFunctionDataPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::WasmExportedFunctionData::WasmExportedFunctionDataPrint
          (WasmExportedFunctionData *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"WasmExportedFunctionData");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - wrapper_code: ",0x12);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - instance: ",0xe);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - jump_table_offset: ",0x17);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 0xb) >> 1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - function_index: ",0x14);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 0xf) >> 1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

