
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::StringAddFlags const&) */

void v8::internal::operator<<(basic_ostream *param_1,StringAddFlags *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)param_2;
  if (iVar1 == 2) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"ConvertRight",0xc);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,"CheckNone",9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"ConvertLeft",0xb);
  return;
}

