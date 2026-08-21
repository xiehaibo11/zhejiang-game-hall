
/* v8::internal::TransitionArray::TransitionArrayPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::TransitionArray::TransitionArrayPrint(TransitionArray *this,basic_ostream *param_1)

{
  HeapObject::PrintHeader((HeapObject *)this,param_1,"TransitionArray");
  PrintInternal(this,param_1);
  return;
}

