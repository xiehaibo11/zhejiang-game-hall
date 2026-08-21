
/* v8::internal::BasicBlockProfiler::Data::SetCode(std::__ndk1::basic_ostringstream<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*) */

void v8::internal::BasicBlockProfiler::Data::SetCode(basic_ostringstream *param_1)

{
  ulong uVar1;
  char *pcVar2;
  byte local_38 [8];
  ulong local_30;
  char *local_28;
  
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  uVar1 = (ulong)(local_38[0] >> 1);
  pcVar2 = (char *)((ulong)local_38 | 1);
  if ((local_38[0] & 1) != 0) {
    uVar1 = local_30;
    pcVar2 = local_28;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (param_1 + 0x68),0,pcVar2,uVar1);
  if ((local_38[0] & 1) != 0) {
    operator_delete(local_28);
  }
  return;
}

