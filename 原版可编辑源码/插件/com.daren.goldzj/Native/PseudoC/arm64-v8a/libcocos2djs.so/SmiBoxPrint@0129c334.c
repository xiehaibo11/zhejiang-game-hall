
/* v8::internal::TorqueGeneratedSmiBox<v8::internal::SmiBox,
   v8::internal::Struct>::SmiBoxPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::TorqueGeneratedSmiBox<v8::internal::SmiBox,v8::internal::Struct>::SmiBoxPrint
          (TorqueGeneratedSmiBox<v8::internal::SmiBox,v8::internal::Struct> *this,
          basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"TorqueGeneratedSmiBox");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - value: ",0xb);
  local_28 = (ulong)*(uint *)(*(long *)this + 3);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - unrelated: ",0xf);
  local_28 = (ulong)*(uint *)(*(long *)this + 7);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

