
/* std::__ndk1::enable_if<(!std::is_function<std::__ndk1::remove_pointer<char
   const*>::type>::value)&&has_output_operator<char const*>::value, void>::type
   v8::base::PrintCheckOperand<char const*>(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, char const*) */

void v8::base::PrintCheckOperand<char_const*>(basic_ostream *param_1,char *param_2)

{
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,param_2);
  return;
}

