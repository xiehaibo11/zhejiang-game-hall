
/* v8::internal::Tuple3::BriefPrintDetails(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::Tuple3::BriefPrintDetails(Tuple3 *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1)
  ;
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  pbVar1 = (basic_ostream *)internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  local_30 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  pbVar1 = (basic_ostream *)internal::operator<<(pbVar1,(Brief *)&local_30);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar1,(Brief *)&local_38);
  return;
}

