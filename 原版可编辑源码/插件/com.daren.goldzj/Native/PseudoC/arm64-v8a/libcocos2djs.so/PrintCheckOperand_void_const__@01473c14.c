
/* std::__ndk1::enable_if<(!std::is_function<std::__ndk1::remove_pointer<void
   const*>::type>::value)&&has_output_operator<void const*>::value, void>::type
   v8::base::PrintCheckOperand<void const*>(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, void const*) */

void v8::base::PrintCheckOperand<void_const*>(basic_ostream *param_1,void *param_2)

{
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,param_2);
  return;
}

