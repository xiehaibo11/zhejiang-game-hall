
/* std::__ndk1::enable_if<(!std::is_function<std::__ndk1::remove_pointer<signed
   char*>::type>::value)&&has_output_operator<signed char*>::value, void>::type
   v8::base::PrintCheckOperand<signed char*>(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, signed char*) */

void v8::base::PrintCheckOperand<signed_char*>(basic_ostream *param_1,signed *param_2)

{
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,param_2);
  return;
}

