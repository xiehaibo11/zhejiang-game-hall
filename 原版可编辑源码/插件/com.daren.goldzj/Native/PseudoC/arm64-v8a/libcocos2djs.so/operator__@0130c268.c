
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::Type) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,undefined8 param_2)

{
  undefined8 local_8;
  
  local_8 = param_2;
  Type::PrintTo((Type *)&local_8,param_1);
  return param_1;
}

