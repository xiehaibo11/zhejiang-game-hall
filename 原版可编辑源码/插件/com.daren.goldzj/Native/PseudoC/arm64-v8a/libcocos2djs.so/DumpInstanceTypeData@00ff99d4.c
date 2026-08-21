
/* v8::internal::ObjectStats::DumpInstanceTypeData(std::__ndk1::basic_stringstream<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, char const*, int) */

void __thiscall
v8::internal::ObjectStats::DumpInstanceTypeData
          (ObjectStats *this,basic_stringstream *param_1,char *param_2,int param_3)

{
  basic_ostream *pbVar1;
  basic_ostream *pbVar2;
  size_t sVar3;
  
  pbVar1 = (basic_ostream *)(param_1 + 0x10);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\"",1)
  ;
  sVar3 = strlen(param_2);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,param_2,sVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\":{",3);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,"\"type\":",7);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,param_3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,"\"overall\":",10);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      *(ulong *)(this + (long)param_3 * 8 + 0x4898));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,"\"count\":",8);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      *(ulong *)(this + (long)param_3 * 8 + 8));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,"\"over_allocated\":",0x11);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      *(ulong *)(this + (long)param_3 * 8 + 0x9128));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar1,"\"histogram\":",0xc);
  FUN_00ff9b64(param_1,this + (long)param_3 * 0x80 + 0xb570);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar1,",\"over_allocated_histogram\":",0x1c);
  FUN_00ff9b64(param_1,this + (long)param_3 * 0x80 + 0x2f9f0);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"},",2);
  return;
}

