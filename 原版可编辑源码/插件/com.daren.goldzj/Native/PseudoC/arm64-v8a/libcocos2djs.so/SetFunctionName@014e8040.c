
/* v8::internal::BasicBlockProfiler::Data::SetFunctionName(std::__ndk1::unique_ptr<char [],
   std::__ndk1::default_delete<char []> >) */

void __thiscall
v8::internal::BasicBlockProfiler::Data::SetFunctionName(Data *this,undefined8 *param_2)

{
  size_t sVar1;
  char *__s;
  
  __s = (char *)*param_2;
  sVar1 = strlen(__s);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x38),0,__s,sVar1);
  return;
}

