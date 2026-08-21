
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::Runtime::FunctionId) */

void v8::internal::operator<<(basic_ostream *param_1,int param_2)

{
  size_t sVar1;
  char *__s;
  
  __s = (&PTR_s_DebugBreakOnBytecode_01a430f8_9_01cb7928)[(long)param_2 * 4];
  sVar1 = strlen(__s);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,__s,sVar1);
  return;
}

