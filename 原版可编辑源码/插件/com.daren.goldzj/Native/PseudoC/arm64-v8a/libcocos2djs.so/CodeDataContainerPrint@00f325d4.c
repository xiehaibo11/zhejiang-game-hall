
/* v8::internal::CodeDataContainer::CodeDataContainerPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::CodeDataContainer::CodeDataContainerPrint
          (CodeDataContainer *this,basic_ostream *param_1)

{
  basic_ostream *this_00;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"CodeDataContainer");
  this_00 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n - kind_specific_flags: ",0x19);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,
             *(int *)(*(long *)this + 7));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

