
/* v8::internal::WasmExceptionTag::WasmExceptionTagPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::WasmExceptionTag::WasmExceptionTagPrint(WasmExceptionTag *this,basic_ostream *param_1)

{
  basic_ostream *this_00;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"WasmExceptionTag");
  this_00 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n - index: ",0xb);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,
             *(int *)(*(long *)this + 3) >> 1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

