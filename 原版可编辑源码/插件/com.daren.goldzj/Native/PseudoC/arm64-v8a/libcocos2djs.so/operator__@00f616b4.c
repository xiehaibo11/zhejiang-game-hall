
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::OptimizationReason) */

void v8::internal::operator<<(basic_ostream *param_1,ulong param_2)

{
  size_t sVar1;
  char *__s;
  
  __s = (&PTR_s_do_not_optimize_01ca6f10)[param_2 & 0xff];
  sVar1 = strlen(__s);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,__s,sVar1);
  return;
}

