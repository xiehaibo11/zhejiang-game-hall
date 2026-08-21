
/* v8::internal::SourcePosition::PrintJson(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall v8::internal::SourcePosition::PrintJson(SourcePosition *this,basic_ostream *param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  basic_ostream *pbVar1;
  uint uVar2;
  
  if (((byte)*this & 1) == 0) {
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"{ \"scriptOffset\" : ",0x13);
    uVar2 = (*(uint *)this >> 1 & 0x3fffffff) - 1;
  }
  else {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"{ \"line\" : ",0xb);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                        *(uint *)this >> 1 & 0xfffff);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,", ",2);
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar1,"  \"fileId\" : ",0xd);
    uVar2 = *(uint *)this >> 0x15 & 0x3ff;
  }
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     (this_00,uVar2);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,"  \"inliningId\" : ",0x11);
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                      ((uint)(*(ulong *)this >> 0x1f) & 0xffff) - 1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"}",1);
  return;
}

