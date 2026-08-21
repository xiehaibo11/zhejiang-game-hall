
/* universe::Translated::buildContent(char const*, char const*) */

void __thiscall universe::Translated::buildContent(Translated *this,char *param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  basic_ostream *pbVar4;
  size_t sVar5;
  pthread_t pVar6;
  byte local_1a8 [8];
  ulong local_1a0;
  char *local_198;
  undefined **local_190;
  undefined8 uStack_188;
  undefined **local_180;
  undefined **ppuStack_178;
  locale alStack_170 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined **local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_190 = (undefined **)0x1c670a0;
  local_110[0] = (undefined **)0x1c670c8;
  uStack_188 = 0;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
  local_88 = 0;
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  local_190 = &PTR__basic_stringstream_01c66f88;
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::locale::locale(alStack_170);
                    /* catch() { ... } // from try @ 009fe1e4 with catch @ 009fe450 */
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  uStack_130 = 0;
  local_138 = 0;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  local_118 = 0x18;
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_180,"[",1);
  sVar5 = strlen(param_1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,param_1,sVar5);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"] ",2)
  ;
  getTime((Translated *)pbVar4);
  uVar1 = (ulong)(local_1a8[0] >> 1);
  pcVar3 = (char *)((ulong)local_1a8 | 1);
  if ((local_1a8[0] & 1) != 0) {
    uVar1 = local_1a0;
    pcVar3 = local_198;
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
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_190 = &PTR__basic_stringstream_01c66f88;
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fe5dc with catch @ 009fe56c
                       catch(type#1 @ 00000000) { ... } // from try @ 009fe60c with catch @ 009fe56c
                       catch(type#1 @ 00000000) { ... } // from try @ 009fe63c with catch @ 009fe56c
                       catch(type#1 @ 00000000) { ... } // from try @ 009fe664 with catch @ 009fe56c
                       catch(type#1 @ 00000000) { ... } // from try @ 009fe690 with catch @ 009fe56c
                        */
  local_180 = &PTR__basic_stringstream_01c66fb0;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009fe5d4 to 00afe5db has its CatchHandler @ 009fe6d0 */
  return;
}

