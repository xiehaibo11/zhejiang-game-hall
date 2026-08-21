
/* v8::base::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::base::Time const&) */

void v8::base::operator<<(basic_ostream *param_1,Time *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)param_2;
  if (lVar1 == 0) {
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,0.0);
    return;
  }
  if (lVar1 == 0x7fffffffffffffff) {
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,1.7976931348623157e+308
              );
    return;
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,(double)lVar1 / 1000.0);
  return;
}

