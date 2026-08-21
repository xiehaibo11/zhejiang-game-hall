
/* v8::internal::Isolate::SetAddCrashKeyCallback(void (*)(v8::CrashKeyId,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)) */

void __thiscall
v8::internal::Isolate::SetAddCrashKeyCallback
          (Isolate *this,_func_void_CrashKeyId_basic_string_ptr *param_1)

{
  *(_func_void_CrashKeyId_basic_string_ptr **)(this + 0xc7f0) = param_1;
  AddCrashKeysForIsolateAndHeapPointers(this);
  return;
}

