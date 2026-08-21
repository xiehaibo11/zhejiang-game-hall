
/* XMLHttpRequest::getAllResponseHeaders() const */

void XMLHttpRequest::getAllResponseHeaders(void)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long in_x0;
  basic_ostream *pbVar4;
  undefined8 *in_x8;
  long *plVar5;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
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
  local_110[0] = (undefined **)0x1c670c8;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
  local_88 = 0;
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::locale::locale(alStack_170);
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  uStack_130 = 0;
  local_138 = 0;
  local_118 = 0x18;
  *in_x8 = 0;
  plVar5 = *(long **)(in_x0 + 0x170);
  if (plVar5 != (long *)0x0) {
    do {
      uVar1 = (ulong)(*(byte *)(plVar5 + 2) >> 1);
      pcVar3 = (char *)((long)plVar5 + 0x11);
      if ((*(byte *)(plVar5 + 2) & 1) != 0) {
        uVar1 = plVar5[3];
        pcVar3 = (char *)plVar5[4];
      }
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar3,uVar1);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,": ",2);
      uVar1 = (ulong)(*(byte *)(plVar5 + 5) >> 1);
      pcVar3 = (char *)((long)plVar5 + 0x29);
      if ((*(byte *)(plVar5 + 5) & 1) != 0) {
        uVar1 = plVar5[6];
        pcVar3 = (char *)plVar5[7];
      }
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,pcVar3,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\n",1);
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  in_x8[2] = local_198;
  in_x8[1] = uStack_1a0;
  *in_x8 = local_1a8;
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
  return;
}

