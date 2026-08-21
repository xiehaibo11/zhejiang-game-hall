
/* v8::tracing::TracedValue::SetBoolean(char const*, bool) */

void __thiscall v8::tracing::TracedValue::SetBoolean(TracedValue *this,char *param_1,bool param_2)

{
  char *pcVar1;
  
  WriteName(this,param_1);
  pcVar1 = "true";
  if (!param_2) {
    pcVar1 = "false";
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 8),pcVar1);
  return;
}

