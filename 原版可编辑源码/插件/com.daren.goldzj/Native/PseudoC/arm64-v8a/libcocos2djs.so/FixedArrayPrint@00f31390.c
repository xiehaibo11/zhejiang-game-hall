
/* v8::internal::FixedArray::FixedArrayPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::FixedArray::FixedArrayPrint(FixedArray *this,basic_ostream *param_1)

{
  basic_ostream *this_00;
  long lVar1;
  long local_28;
  
  lVar1 = *(long *)this;
  local_28 = lVar1;
  HeapObject::PrintHeader((HeapObject *)&local_28,param_1,"FixedArray");
  this_00 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n - length: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,*(int *)(lVar1 + 3) >> 1)
  ;
  FUN_00f3cc20(param_1,lVar1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

