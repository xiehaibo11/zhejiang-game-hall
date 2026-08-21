
/* std::__ndk1::enable_if<(!std::is_function<std::__ndk1::remove_pointer<unsigned
   int>::type>::value)&&has_output_operator<unsigned int>::value, void>::type
   v8::base::PrintCheckOperand<unsigned int>(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, unsigned int) */

void v8::base::PrintCheckOperand<unsigned_int>(basic_ostream *param_1,uint param_2)

{
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,param_2);
  return;
}

