
/* v8::internal::NativeContext::NativeContextPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::NativeContext::NativeContextPrint(NativeContext *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  
  FUN_00f3df44(param_1,*(undefined8 *)this,"NativeContext");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," - microtask_queue: ",0x14);
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                      *(void **)(*(long *)this + 0x423));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\n",1);
  return;
}

