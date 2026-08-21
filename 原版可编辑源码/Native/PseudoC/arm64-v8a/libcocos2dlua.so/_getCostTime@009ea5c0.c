
/* universe::Downloader2::_getCostTime(void*) const */

void __thiscall universe::Downloader2::_getCostTime(Downloader2 *this,void *param_1)

{
  long lVar1;
  basic_ostream *pbVar2;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
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
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_188 = 0.0;
  FUN_00a24d60(param_1,"v",&local_188);
  local_190 = 0.0;
  FUN_00a24d60(param_1,"",&local_190);
  local_198 = 0.0;
  FUN_00a24d60(param_1,"oFitEii",&local_198);
  local_1a0 = 0.0;
  FUN_00a24d60(param_1,"_ZN8fairygui5GList11resizeToFitEii",&local_1a0);
  local_1a8 = 0.0;
  FUN_00a24d60(param_1,"i5GList11resizeToFitEii",&local_1a8);
  local_1b0 = 0.0;
  FUN_00a24d60(param_1,"Ev",&local_1b0);
  local_1b8 = 0.0;
  FUN_00a24d60(param_1,"GList11resizeToFitEii",&local_1b8);
  local_180 = 0x16a0c88;
  local_110[0] = 0x16a0cb0;
  std::__ndk1::ios_base::init((ios_base *)local_110,(void *)((ulong)&local_180 | 8));
  local_180 = 0x16a0c38;
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  local_110[0] = 0x16a0c60;
  local_88 = 0;
  std::__ndk1::locale::locale(alStack_170);
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  local_118 = 0x10;
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,
                      (long)(local_188 * 1000.0));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (long)(local_190 * 1000.0));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (long)(local_198 * 1000.0));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (long)(local_1a0 * 1000.0));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (long)(local_1a8 * 1000.0));
                    /* try { // try from 009ea80c to 00aea85b has its CatchHandler @ 009ea80c
                       catch() { ... } // from try @ 009ea80c with catch @ 009ea80c
                       catch() { ... } // from try @ 009ea8a4 with catch @ 009ea80c
                       catch() { ... } // from try @ 009ea924 with catch @ 009ea80c */
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (long)(local_1b0 * 1000.0));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,(long)(local_1b8 * 1000.0)
            );
                    /* try { // try from 009ea85c to 00aea873 has its CatchHandler @ 009ea93c */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_180 = 0x16a0c38;
  local_110[0] = 0x16a0c60;
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
                    /* try { // try from 009ea878 to 00aea8a3 has its CatchHandler @ 009ea938 */
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_170);
                    /* try { // try from 009ea8a4 to 00aea8cb has its CatchHandler @ 009ea80c */
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 009ea8cc to 00aea8df has its CatchHandler @ 009ea93c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

