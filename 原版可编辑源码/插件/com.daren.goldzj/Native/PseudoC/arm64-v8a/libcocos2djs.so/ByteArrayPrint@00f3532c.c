
/* v8::internal::ByteArray::ByteArrayPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::ByteArray::ByteArrayPrint(ByteArray *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"ByteArray");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - length: ",0xc);
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                      *(int *)(*(long *)this + 3) >> 1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,"\n - data-start: ",0x10);
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                      (void *)(*(long *)this + 7));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\n",1);
  return;
}

