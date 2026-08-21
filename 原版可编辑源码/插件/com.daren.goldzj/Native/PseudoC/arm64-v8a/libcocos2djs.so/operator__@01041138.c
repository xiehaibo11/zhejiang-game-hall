
/* v8::internal::interpreter::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::interpreter::Bytecode const&) */

void v8::internal::interpreter::operator<<(basic_ostream *param_1,Bytecode *param_2)

{
  char *__s;
  size_t sVar1;
  
  __s = (char *)Bytecodes::ToString(*param_2);
  sVar1 = strlen(__s);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,__s,sVar1);
  return;
}

