
/* std::__ndk1::enable_if<(!std::is_function<std::__ndk1::remove_pointer<long>::type>::value)&&has_output_operator<long>::value,
   void>::type v8::base::PrintCheckOperand<long>(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, long) */

void v8::base::PrintCheckOperand<long>(basic_ostream *param_1,long param_2)

{
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,param_2);
  return;
}

