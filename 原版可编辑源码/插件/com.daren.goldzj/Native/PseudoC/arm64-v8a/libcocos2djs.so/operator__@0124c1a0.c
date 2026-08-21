
/* v8::internal::wasm::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::wasm::WasmFunctionName const&) */

basic_ostream * v8::internal::wasm::operator<<(basic_ostream *param_1,WasmFunctionName *param_2)

{
  basic_ostream *this;
  
  this = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"#",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this,
             *(uint *)(*(long *)param_2 + 8));
  if (*(long *)(param_2 + 0x10) == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"?",1);
  }
  else if (*(long *)(param_2 + 8) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,":",1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,*(char **)(param_2 + 8)
               ,(long)*(int *)(param_2 + 0x10));
  }
  return param_1;
}

