
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::IrOpcode::Value) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,uint param_2)

{
  size_t sVar1;
  ulong uVar2;
  char *__s;
  
  uVar2 = (ulong)param_2;
  if (0x31d < param_2) {
    uVar2 = 0x31e;
  }
  __s = (&PTR_s_Start_0199fe3f_0x12_01cd9610)[uVar2];
  sVar1 = strlen(__s);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,__s,sVar1);
  return;
}

