
/* v8::internal::BytecodeArray::BytecodeArrayPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::BytecodeArray::BytecodeArrayPrint(BytecodeArray *this,basic_ostream *param_1)

{
  HeapObject::PrintHeader((HeapObject *)this,param_1,"BytecodeArray");
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  Disassemble(this,param_1);
  return;
}

