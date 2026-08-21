
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::StringLiteral const&) */

void v8::internal::operator<<(basic_ostream *param_1,StringLiteral *param_2)

{
  undefined8 local_18;
  
  local_18 = **(undefined8 **)(param_2 + 0x10);
  operator<<(param_1,(Brief *)&local_18);
  return;
}

