
/* v8::internal::WasmModuleObject::WasmModuleObjectPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::WasmModuleObject::WasmModuleObjectPrint(WasmModuleObject *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"WasmModuleObject");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - module: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(void **)(**(long **)(*(long *)((*(ulong *)this & 0xffffffff00000000 |
                                              (ulong)*(uint *)(*(ulong *)this + 0xb)) + 3) + 0x18) +
                       200));
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - native module: ",0x13);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             (void *)**(undefined8 **)
                       (*(long *)((*(ulong *)this & 0xffffffff00000000 |
                                  (ulong)*(uint *)(*(ulong *)this + 0xb)) + 3) + 0x18));
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - export wrappers: ",0x15);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - script: ",0xc);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x13);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  if (*(int *)(*(ulong *)this + 0x17) != *(int *)((*(ulong *)this & 0xffffffff00000000) + 0xa0)) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - asm_js_offset_table: ",0x19);
    local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x17);
    internal::operator<<(pbVar1,(Brief *)&local_28);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

