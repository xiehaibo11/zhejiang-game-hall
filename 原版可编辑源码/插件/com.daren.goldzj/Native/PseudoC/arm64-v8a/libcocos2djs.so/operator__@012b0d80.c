
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::BasicBlock const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,BasicBlock *param_2)

{
  basic_ostream *this;
  
  this = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"B",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this,*(ulong *)(param_2 + 0xa0));
  return param_1;
}

