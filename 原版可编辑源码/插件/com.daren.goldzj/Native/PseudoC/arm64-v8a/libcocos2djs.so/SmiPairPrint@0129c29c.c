
/* v8::internal::TorqueGeneratedSmiPair<v8::internal::SmiPair,
   v8::internal::Struct>::SmiPairPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::TorqueGeneratedSmiPair<v8::internal::SmiPair,v8::internal::Struct>::SmiPairPrint
          (TorqueGeneratedSmiPair<v8::internal::SmiPair,v8::internal::Struct> *this,
          basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"TorqueGeneratedSmiPair");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - a: ",7);
  local_28 = (ulong)*(uint *)(*(long *)this + 3);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - b: ",7);
  local_28 = (ulong)*(uint *)(*(long *)this + 7);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

