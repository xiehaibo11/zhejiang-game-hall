
/* v8::internal::compiler::Operator::PrintToImpl(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::Operator::PrintToImpl(long param_1,basic_ostream *param_2)

{
  size_t sVar1;
  char *__s;
  
  __s = *(char **)(param_1 + 8);
  sVar1 = strlen(__s);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,__s,sVar1);
  return;
}

