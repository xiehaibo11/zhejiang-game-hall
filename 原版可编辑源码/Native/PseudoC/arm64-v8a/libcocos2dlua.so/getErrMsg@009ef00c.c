
/* universe::DownloadTask::getErrMsg(void*) const */

void __thiscall universe::DownloadTask::getErrMsg(DownloadTask *this,void *param_1)

{
  ulong uVar1;
  long lVar2;
  DownloadTask *pDVar3;
  basic_ostream *pbVar4;
  size_t sVar5;
  char *pcVar6;
  char *local_190;
  long local_188;
  undefined8 local_180;
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
  undefined8 local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_70;
  
                    /* catch() { ... } // from try @ 009eef18 with catch @ 009ef01c */
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_188 = 0;
  FUN_00a24d60(param_1,0x200002,&local_188);
                    /* catch() { ... } // from try @ 009eeec0 with catch @ 009ef068 */
                    /* catch() { ... } // from try @ 009eefcc with catch @ 009ef06c */
                    /* catch() { ... } // from try @ 009eeedc with catch @ 009ef070
                       catch() { ... } // from try @ 009eef6c with catch @ 009ef070 */
  local_190 = "err";
  FUN_00a24d60(param_1,0x100020,&local_190);
  local_180 = 0x16a0c88;
  local_110[0] = 0x16a0cb0;
  std::__ndk1::ios_base::init((ios_base *)local_110,(void *)((ulong)&local_180 | 8));
  local_180 = 0x16a0c38;
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  local_110[0] = 0x16a0c60;
  local_88 = 0;
  std::__ndk1::locale::locale(alStack_170);
                    /* try { // try from 009ef0f4 to 00aef14b has its CatchHandler @ 009ef0f4
                       catch() { ... } // from try @ 009ef0f4 with catch @ 009ef0f4
                       catch() { ... } // from try @ 009ef1d4 with catch @ 009ef0f4
                       catch() { ... } // from try @ 009ef22c with catch @ 009ef0f4
                       catch() { ... } // from try @ 009ef27c with catch @ 009ef0f4 */
  uStack_140 = 0;
  local_148 = 0;
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  local_118 = 0x10;
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_180,"code=",5);
  pbVar4 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,local_188);
                    /* try { // try from 009ef14c to 00aef17f has its CatchHandler @ 009ef328 */
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#ip=",4);
  pcVar6 = local_190;
  sVar5 = strlen(local_190);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,pcVar6,sVar5);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#lerr=",6);
                    /* try { // try from 009ef184 to 00aef193 has its CatchHandler @ 009ef324 */
  if ((ulong)(long)(char)this[0x70] < 10) {
    pcVar6 = (&PTR_s_success_016a1068)[(char)this[0x70]];
  }
  else {
    pcVar6 = "";
  }
  sVar5 = strlen(pcVar6);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,pcVar6,sVar5);
                    /* try { // try from 009ef1c4 to 00aef1d3 has its CatchHandler @ 009ef2ec */
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#url=",5);
                    /* try { // try from 009ef1d4 to 00aef217 has its CatchHandler @ 009ef0f4 */
  uVar1 = (ulong)((byte)this[0x20] >> 1);
  pDVar3 = this + 0x21;
  if (((byte)this[0x20] & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x28);
    pDVar3 = *(DownloadTask **)(this + 0x30);
  }
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,(char *)pDVar3,uVar1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"#httpDNS=0",10)
  ;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_180 = 0x16a0c38;
                    /* try { // try from 009ef218 to 00aef22b has its CatchHandler @ 009ef324 */
  local_110[0] = 0x16a0c60;
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
                    /* try { // try from 009ef22c to 00aef23f has its CatchHandler @ 009ef0f4 */
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
                    /* try { // try from 009ef240 to 00aef27b has its CatchHandler @ 009ef320 */
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009ef27c to 00aef37f has its CatchHandler @ 009ef0f4 */
  return;
}

