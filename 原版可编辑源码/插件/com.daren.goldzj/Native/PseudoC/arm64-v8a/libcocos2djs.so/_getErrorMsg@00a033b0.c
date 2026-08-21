
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
  local_188 = 0;
  FUN_00a0f378(param_1,0x200002,&local_188);
  local_190 = "err";
  FUN_00a0f378(param_1,0x100020,&local_190);
  local_180 = (undefined **)0x1c6c8a8;
  local_110[0] = (undefined **)0x1c6c8d0;
  std::__ndk1::ios_base::init((ios_base *)local_110,(void *)((ulong)&local_180 | 8));
  local_88 = 0;
  local_180 = &PTR__basic_ostringstream_01c6c858;
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  local_110[0] = &PTR__basic_ostringstream_01c6c880;
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
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_180,"code=",5);
  pbVar4 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,local_188);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#ip=",4);
  pcVar6 = local_190;
  sVar5 = strlen(local_190);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,pcVar6,sVar5);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#lerr=",6);
  if ((ulong)(long)(char)param_2[0x90] < 6) {
    pcVar6 = (&PTR_s_SUCCESS_01c6c9a8)[(char)param_2[0x90]];
  }
  else {
    pcVar6 = "";
  }
  sVar5 = strlen(pcVar6);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,pcVar6,sVar5);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"#url=",5);
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
  pcVar6 = (char *)FUN_00a15564(*(undefined4 *)(param_2 + 0x8c));
  sVar5 = strlen(pcVar6);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,pcVar6,sVar5);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_180 = &PTR__basic_ostringstream_01c6c858;
  local_110[0] = &PTR__basic_ostringstream_01c6c880;
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
  return;
}

