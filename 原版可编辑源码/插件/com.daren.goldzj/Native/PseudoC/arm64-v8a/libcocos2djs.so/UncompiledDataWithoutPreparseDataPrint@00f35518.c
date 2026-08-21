
/* v8::internal::UncompiledDataWithoutPreparseData::UncompiledDataWithoutPreparseDataPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::UncompiledDataWithoutPreparseData::UncompiledDataWithoutPreparseDataPrint
          (UncompiledDataWithoutPreparseData *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"UncompiledDataWithoutPreparseData");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - start position: ",0x14);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 7));
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - end position: ",0x12);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 0xb));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

