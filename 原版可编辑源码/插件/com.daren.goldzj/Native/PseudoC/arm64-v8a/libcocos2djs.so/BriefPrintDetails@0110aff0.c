
/* v8::internal::ArrayBoilerplateDescription::BriefPrintDetails(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::ArrayBoilerplateDescription::BriefPrintDetails
          (ArrayBoilerplateDescription *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_28;
  char local_4 [4];
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1)
  ;
  local_4[0] = (char)(*(uint *)(*(long *)this + 3) >> 1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,local_4,1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  return;
}

