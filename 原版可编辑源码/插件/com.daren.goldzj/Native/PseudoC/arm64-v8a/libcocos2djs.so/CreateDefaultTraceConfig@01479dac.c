
/* v8::platform::tracing::TraceConfig::CreateDefaultTraceConfig() */

void * v8::platform::tracing::TraceConfig::CreateDefaultTraceConfig(void)

{
  void *pvVar1;
  char *local_38;
  undefined8 uStack_30;
  void *local_28;
  
  pvVar1 = operator_new(0x20);
  *(undefined1 *)((long)pvVar1 + 4) = 0;
  *(undefined8 *)((long)pvVar1 + 0x10) = 0;
  *(undefined8 *)((long)pvVar1 + 0x18) = 0;
  *(undefined8 *)((long)pvVar1 + 8) = 0;
  uStack_30 = 0;
  local_28 = (void *)0x0;
  local_38 = "nFileERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_f";
  std::__ndk1::
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::
  __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)((long)pvVar1 + 8),(basic_string *)&local_38);
  if (((ulong)local_38 & 1) != 0) {
    operator_delete(local_28);
  }
  return pvVar1;
}

