
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
  
                    /* try { // try from 00a068ac to 00b068fb has its CatchHandler @ 00a068ac
                       catch() { ... } // from try @ 00a068ac with catch @ 00a068ac
                       catch() { ... } // from try @ 00a0698c with catch @ 00a068ac */
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_188 = 0;
  FUN_00a0f378(param_1,0x200002,&local_188);
                    /* try { // try from 00a068fc to 00b06903 has its CatchHandler @ 00a069e8 */
                    /* try { // try from 00a06910 to 00b0691f has its CatchHandler @ 00a069e0 */
  local_190 = "err";
  FUN_00a0f378(param_1,0x100020,&local_190);
                    /* try { // try from 00a0692c to 00b0692f has its CatchHandler @ 00a069dc */
  local_180 = (undefined **)0x1c6c8a8;
  local_110[0] = (undefined **)0x1c6c8d0;
                    /* try { // try from 00a06938 to 00b0694b has its CatchHandler @ 00a069e4 */
  std::__ndk1::ios_base::init((ios_base *)local_110,(void *)((ulong)&local_180 | 8));
  local_88 = 0;
                    /* try { // try from 00a06964 to 00b0697b has its CatchHandler @ 00a069d8 */
  local_180 = &PTR__basic_ostringstream_01c6c858;
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  local_110[0] = &PTR__basic_ostringstream_01c6c880;
                    /* try { // try from 00a06984 to 00b0698b has its CatchHandler @ 00a069d4 */
                    /* try { // try from 00a0698c to 00b069fb has its CatchHandler @ 00a068ac */
  std::__ndk1::locale::locale(alStack_170);
  uStack_140 = 0;
  local_148 = 0;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  uStack_130 = 0;
  local_138 = 0;
  local_118 = 0x10;
                    /* catch() { ... } // from try @ 00a06984 with catch @ 00a069d4 */
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_180,"code=",5);
                    /* catch() { ... } // from try @ 00a06964 with catch @ 00a069d8 */
                    /* catch() { ... } // from try @ 00a0692c with catch @ 00a069dc */
  pbVar4 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,local_188);
                    /* catch() { ... } // from try @ 00a06910 with catch @ 00a069e0 */
                    /* catch() { ... } // from try @ 00a06938 with catch @ 00a069e4 */
                    /* catch() { ... } // from try @ 00a068fc with catch @ 00a069e8 */
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#ip=",4);
  pcVar6 = local_190;
                    /* try { // try from 00a069fc to 00b06a3b has its CatchHandler @ 00a069fc
                       catch() { ... } // from try @ 00a069fc with catch @ 00a069fc
                       catch() { ... } // from try @ 00a06a8c with catch @ 00a069fc */
  sVar5 = strlen(local_190);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,pcVar6,sVar5);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#lerr=",6);
  if ((ulong)(long)(char)this[0x70] < 10) {
    pcVar6 = (&PTR_s_success_01c6cb68)[(char)this[0x70]];
                    /* try { // try from 00a06a3c to 00b06a43 has its CatchHandler @ 00a06ae8 */
  }
  else {
    pcVar6 = "";
  }
  sVar5 = strlen(pcVar6);
                    /* try { // try from 00a06a50 to 00b06a5f has its CatchHandler @ 00a06ae0 */
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,pcVar6,sVar5);
                    /* try { // try from 00a06a6c to 00b06a6f has its CatchHandler @ 00a06adc */
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#url=",5);
                    /* try { // try from 00a06a78 to 00b06a8b has its CatchHandler @ 00a06ae4 */
  uVar1 = (ulong)((byte)this[0x20] >> 1);
  pDVar3 = this + 0x21;
  if (((byte)this[0x20] & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x28);
    pDVar3 = *(DownloadTask **)(this + 0x30);
  }
                    /* try { // try from 00a06a8c to 00b06afb has its CatchHandler @ 00a069fc */
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,(char *)pDVar3,uVar1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"#httpDNS=0",10)
  ;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_180 = &PTR__basic_ostringstream_01c6c858;
  local_110[0] = &PTR__basic_ostringstream_01c6c880;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
                    /* catch() { ... } // from try @ 00a06a6c with catch @ 00a06adc */
                    /* catch() { ... } // from try @ 00a06a50 with catch @ 00a06ae0 */
                    /* catch() { ... } // from try @ 00a06a78 with catch @ 00a06ae4 */
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
                    /* catch() { ... } // from try @ 00a06a3c with catch @ 00a06ae8 */
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

