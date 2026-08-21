
/* v8::internal::Tuple2::BriefPrintDetails(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::Tuple2::BriefPrintDetails(Tuple2 *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_28;
  ulong local_8;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1)
  ;
  local_8 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  pbVar1 = (basic_ostream *)internal::operator<<(pbVar1,(Brief *)&local_8);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  return;
}

