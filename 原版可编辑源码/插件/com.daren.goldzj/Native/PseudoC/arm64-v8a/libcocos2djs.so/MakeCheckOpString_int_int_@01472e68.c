
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*
   v8::base::MakeCheckOpString<int, int>(int, int, char const*) */

basic_string * v8::base::MakeCheckOpString<int,int>(int param_1,int param_2,char *param_3)

{
  long lVar1;
  size_t sVar2;
  basic_ostream *pbVar3;
  basic_string *pbVar4;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_178 = (undefined **)0x1c6c8a8;
  local_108[0] = (undefined **)0x1c6c8d0;
  std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
  local_78 = 0xffffffff;
  local_80 = 0;
  local_178 = &PTR__basic_ostringstream_01c6c858;
  local_170 = &PTR__basic_streambuf_01c671a8;
  local_108[0] = &PTR__basic_ostringstream_01c6c880;
  std::__ndk1::locale::locale(alStack_168);
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_170 = &PTR__basic_stringbuf_01c67100;
  sVar2 = strlen(param_3);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_178,param_3,sVar2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3," (",2);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,param_1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_178," vs. ",5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,param_2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_178,")",1);
  pbVar4 = operator_new(0x18);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_178 = &PTR__basic_ostringstream_01c6c858;
  local_108[0] = &PTR__basic_ostringstream_01c6c880;
  if ((local_130 & 1) != 0) {
    local_170 = &PTR__basic_stringbuf_01c67100;
    operator_delete(local_120);
  }
  local_170 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return pbVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

