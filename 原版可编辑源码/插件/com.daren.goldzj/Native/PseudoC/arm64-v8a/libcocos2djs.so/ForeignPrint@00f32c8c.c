
/* v8::internal::Foreign::ForeignPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::Foreign::ForeignPrint(Foreign *this,basic_ostream *param_1)

{
  basic_ostream *this_00;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"Foreign");
  this_00 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n - foreign address : ",0x16);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,
             *(void **)(*(long *)this + 3));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

