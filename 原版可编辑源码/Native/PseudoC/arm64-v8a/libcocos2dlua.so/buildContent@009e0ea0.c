
/* universe::Translated::buildContent(char const*, char const*) */

void __thiscall universe::Translated::buildContent(Translated *this,char *param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  basic_ostream *pbVar4;
  size_t sVar5;
  tm *__tp;
  pthread_t pVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1d8 [8];
  ulong local_1d0;
  char *local_1c8;
  time_t local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined **ppuStack_198;
  locale alStack_190 [8];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulong local_158;
  undefined8 uStack_150;
  void *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130 [17];
  undefined8 local_a8;
  undefined4 local_a0;
  char acStack_98 [32];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_1b0 = 0x1698900;
  local_130[0] = 0x1698928;
  uStack_1a8 = 0;
  local_1a0 = 0x1698810;
  std::__ndk1::ios_base::init((ios_base *)local_130,&ppuStack_198);
  local_a0 = 0xffffffff;
  ppuStack_198 = &PTR__basic_streambuf_01698a08;
  local_1b0 = 0x16987e8;
  local_130[0] = 0x1698838;
  local_a8 = 0;
  local_1a0 = 0x1698810;
  std::__ndk1::locale::locale(alStack_190);
  uStack_160 = 0;
  local_168 = 0;
  uStack_170 = 0;
  local_178 = 0;
  uStack_180 = 0;
  local_188 = 0;
  ppuStack_198 = &PTR__basic_stringbuf_01698960;
  uStack_150 = 0;
  local_158 = 0;
  uStack_140 = 0;
  local_148 = (void *)0x0;
  local_138 = 0x18;
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_1a0,"[",1);
  sVar5 = strlen(param_1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,param_1,sVar5);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"] ",2)
  ;
  local_1b8 = std::__ndk1::chrono::system_clock::now();
  local_1c0 = std::__ndk1::chrono::system_clock::to_time_t((time_point *)&local_1b8);
  __tp = localtime(&local_1c0);
  strftime(acStack_98,0x20,"%Y.%m.%d %H:%M:%S",__tp);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_1d8,acStack_98);
  uVar1 = (ulong)((byte)local_1d8[0] >> 1);
  pcVar3 = (char *)((ulong)local_1d8 | 1);
  if (((byte)local_1d8[0] & 1) != 0) {
    uVar1 = local_1d0;
    pcVar3 = local_1c8;
  }
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,pcVar3,uVar1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4," (",2)
  ;
  pVar6 = pthread_self();
  pbVar4 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,pVar6);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,") - ",4);
  sVar5 = strlen(param_2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,param_2,sVar5);
  if (((byte)local_1d8[0] & 1) != 0) {
    operator_delete(local_1c8);
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_1b0 = 0x16987e8;
  local_1a0 = 0x1698810;
  local_130[0] = 0x1698838;
  ppuStack_198 = &PTR__basic_stringbuf_01698960;
  if ((local_158 & 1) != 0) {
    operator_delete(local_148);
  }
  ppuStack_198 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_190);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_130);
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

