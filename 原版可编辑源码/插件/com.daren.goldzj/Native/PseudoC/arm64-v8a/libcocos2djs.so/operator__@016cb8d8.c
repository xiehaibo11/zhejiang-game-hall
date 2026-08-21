
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::NodeOriginAsJSON const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,NodeOriginAsJSON *param_2)

{
  NodeOrigin::PrintJson(*(NodeOrigin **)param_2,param_1);
  return param_1;
}

