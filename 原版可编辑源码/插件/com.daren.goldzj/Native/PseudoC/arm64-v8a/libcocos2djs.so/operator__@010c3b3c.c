
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::FeedbackSlotKind) */

void v8::internal::operator<<(basic_ostream *param_1,uint param_2)

{
  size_t sVar1;
  char *__s;
  
  if (param_2 < 0x17) {
    __s = (&PTR_s_Invalid_0199e77c_0x11_01cb4bc8)[(int)param_2];
    sVar1 = strlen(__s);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,__s,sVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

