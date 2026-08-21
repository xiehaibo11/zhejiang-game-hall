
/* v8::Isolate::SetAddCrashKeyCallback(void (*)(v8::CrashKeyId, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)) */

void v8::Isolate::SetAddCrashKeyCallback(_func_void_CrashKeyId_basic_string_ptr *param_1)

{
  _func_void_CrashKeyId_basic_string_ptr *in_x1;
  
  internal::Isolate::SetAddCrashKeyCallback((Isolate *)param_1,in_x1);
  return;
}

