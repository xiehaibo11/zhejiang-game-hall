
/* v8::internal::FixedDoubleArray::FixedDoubleArrayPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::FixedDoubleArray::FixedDoubleArrayPrint(FixedDoubleArray *this,basic_ostream *param_1)

{
  basic_ostream *this_00;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"FixedDoubleArray");
  this_00 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n - length: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,
             *(int *)(*(long *)this + 3) >> 1);
  FUN_00f3cf10(param_1,*(long *)this,*(int *)(*(long *)this + 3) >> 1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

