
/* std::__ndk1::enable_if<(!std::is_function<std::__ndk1::remove_pointer<unsigned
   long>::type>::value)&&has_output_operator<unsigned long>::value, void>::type
   v8::base::PrintCheckOperand<unsigned long>(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, unsigned long) */

void v8::base::PrintCheckOperand<unsigned_long>(basic_ostream *param_1,ulong param_2)

{
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,param_2);
  return;
}

