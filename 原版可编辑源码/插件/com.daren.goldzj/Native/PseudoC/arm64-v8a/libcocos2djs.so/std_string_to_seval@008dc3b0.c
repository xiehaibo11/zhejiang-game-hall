
/* std_string_to_seval(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, se::Value*) */

undefined8 std_string_to_seval(basic_string *param_1,Value *param_2)

{
  se::Value::setString(param_2,param_1);
  return 1;
}

