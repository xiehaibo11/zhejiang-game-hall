
/* universe::Downloader2::_getErrorMsg(void*, universe::Downloader2::DownloadJob*) const */

void __thiscall
universe::Downloader2::_getErrorMsg(Downloader2 *this,void *param_1,DownloadJob *param_2)

{
  ulong uVar1;
  long lVar2;
  DownloadJob *pDVar3;
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
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009eab94 to 00aeab9b has its CatchHandler @ 009eabb0 */
                    /* try { // try from 009eab9c to 00aeabcf has its CatchHandler @ 009eaaa4 */
  local_188 = 0;
  FUN_00a24d60(param_1,0x200002,&local_188);
                    /* catch() { ... } // from try @ 009eaaf8 with catch @ 009eabb0
                       catch() { ... } // from try @ 009eab94 with catch @ 009eabb0 */
                    /* catch() { ... } // from try @ 009eaadc with catch @ 009eabb4
                       catch() { ... } // from try @ 009eab48 with catch @ 009eabb4 */
  local_190 = "err";
  FUN_00a24d60(param_1,0x100020,&local_190);
                    /* try { // try from 009eabd0 to 00aeac07 has its CatchHandler @ 009eabd0
                       catch() { ... } // from try @ 009eabd0 with catch @ 009eabd0
                       catch() { ... } // from try @ 009eac2c with catch @ 009eabd0
                       catch() { ... } // from try @ 009eac94 with catch @ 009eabd0 */
  local_180 = 0x16a0c88;
  local_110[0] = 0x16a0cb0;
  std::__ndk1::ios_base::init((ios_base *)local_110,(void *)((ulong)&local_180 | 8));
                    /* try { // try from 009eac08 to 00aeac2b has its CatchHandler @ 009eac9c */
  local_180 = 0x16a0c38;
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  local_110[0] = 0x16a0c60;
                    /* try { // try from 009eac2c to 00aeac7f has its CatchHandler @ 009eabd0 */
  local_88 = 0;
  std::__ndk1::locale::locale(alStack_170);
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
                    /* try { // try from 009eac80 to 00aeac93 has its CatchHandler @ 009eac9c */
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_180,"code=",5);
  pbVar4 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,local_188);
                    /* try { // try from 009eac94 to 00aeacb7 has its CatchHandler @ 009eabd0 */
                    /* catch() { ... } // from try @ 009eac08 with catch @ 009eac9c
                       catch() { ... } // from try @ 009eac80 with catch @ 009eac9c */
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#ip=",4);
  pcVar6 = local_190;
  sVar5 = strlen(local_190);
                    /* try { // try from 009eacb8 to 00aeacf7 has its CatchHandler @ 009eacb8
                       catch() { ... } // from try @ 009eacb8 with catch @ 009eacb8
                       catch() { ... } // from try @ 009ead6c with catch @ 009eacb8
                       catch() { ... } // from try @ 009eadc4 with catch @ 009eacb8 */
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,pcVar6,sVar5);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#lerr=",6);
  if ((ulong)(long)(char)param_2[0x90] < 6) {
    pcVar6 = (&PTR_s_SUCCESS_01275ecf_0x3c_016a0d88)[(char)param_2[0x90]];
  }
  else {
                    /* try { // try from 009eacf8 to 00aead2b has its CatchHandler @ 009eae50 */
    pcVar6 = "";
  }
  sVar5 = strlen(pcVar6);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,pcVar6,sVar5);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#url=",5);
                    /* try { // try from 009ead34 to 00aead47 has its CatchHandler @ 009eae4c */
  uVar1 = (ulong)((byte)param_2[0x20] >> 1);
  pDVar3 = param_2 + 0x21;
  if (((byte)param_2[0x20] & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x28);
    pDVar3 = *(DownloadJob **)(param_2 + 0x30);
  }
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,(char *)pDVar3,uVar1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#httpDNS=0",10);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#cerr=",6);
                    /* try { // try from 009ead64 to 00aead6b has its CatchHandler @ 009eae14 */
                    /* try { // try from 009ead6c to 00aeadaf has its CatchHandler @ 009eacb8 */
  pcVar6 = (char *)FUN_00a2af4c(*(undefined4 *)(param_2 + 0x8c));
  sVar5 = strlen(pcVar6);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,pcVar6,sVar5);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_180 = 0x16a0c38;
  local_110[0] = 0x16a0c60;
                    /* try { // try from 009eadb0 to 00aeadc3 has its CatchHandler @ 009eae50 */
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
                    /* try { // try from 009eadc4 to 00aeae7b has its CatchHandler @ 009eacb8 */
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009ead64 with catch @ 009eae14 */
    __stack_chk_fail();
  }
  return;
}

