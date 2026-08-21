
/* v8::internal::TorqueGeneratedStruct<v8::internal::Struct,
   v8::internal::HeapObject>::StructPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructPrint
          (TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject> *this,
          basic_ostream *param_1)

{
  HeapObject::PrintHeader((HeapObject *)this,param_1,"TorqueGeneratedStruct");
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

