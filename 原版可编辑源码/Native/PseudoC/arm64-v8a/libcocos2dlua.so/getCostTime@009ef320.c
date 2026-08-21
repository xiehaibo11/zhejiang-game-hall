
/* universe::DownloadTask::getCostTime(void*) const */

void __thiscall universe::DownloadTask::getCostTime(DownloadTask *this,void *param_1)

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
  
                    /* catch() { ... } // from try @ 009ef240 with catch @ 009ef320 */
                    /* catch() { ... } // from try @ 009ef184 with catch @ 009ef324
                       catch() { ... } // from try @ 009ef218 with catch @ 009ef324 */
                    /* catch() { ... } // from try @ 009ef14c with catch @ 009ef328 */
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_188 = 0.0;
  FUN_00a24d60(param_1,"v",&local_188);
                    /* try { // try from 009ef380 to 00aef3d3 has its CatchHandler @ 009ef380
                       catch() { ... } // from try @ 009ef380 with catch @ 009ef380
                       catch() { ... } // from try @ 009ef420 with catch @ 009ef380
                       catch() { ... } // from try @ 009ef49c with catch @ 009ef380 */
  local_190 = 0.0;
  FUN_00a24d60(param_1,"",&local_190);
  local_198 = 0.0;
  FUN_00a24d60(param_1,"oFitEii",&local_198);
  local_1a0 = 0.0;
  FUN_00a24d60(param_1,"_ZN8fairygui5GList11resizeToFitEii",&local_1a0);
  local_1a8 = 0.0;
  FUN_00a24d60(param_1,"i5GList11resizeToFitEii",&local_1a8);
                    /* try { // try from 009ef3d4 to 00aef41f has its CatchHandler @ 009ef4a4 */
  local_1b0 = 0.0;
  FUN_00a24d60(param_1,"Ev",&local_1b0);
  local_1b8 = 0.0;
  FUN_00a24d60(param_1,"GList11resizeToFitEii",&local_1b8);
  local_180 = 0x16a0c88;
  local_110[0] = 0x16a0cb0;
  std::__ndk1::ios_base::init((ios_base *)local_110,(void *)((ulong)&local_180 | 8));
                    /* try { // try from 009ef420 to 00aef487 has its CatchHandler @ 009ef380 */
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
                    /* try { // try from 009ef488 to 00aef49b has its CatchHandler @ 009ef4a4 */
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
                    /* try { // try from 009ef49c to 00aef4df has its CatchHandler @ 009ef380 */
                    /* catch() { ... } // from try @ 009ef3d4 with catch @ 009ef4a4
                       catch() { ... } // from try @ 009ef488 with catch @ 009ef4a4 */
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
                    /* try { // try from 009ef4e0 to 00aef52f has its CatchHandler @ 009ef4e0
                       catch() { ... } // from try @ 009ef4e0 with catch @ 009ef4e0
                       catch() { ... } // from try @ 009ef57c with catch @ 009ef4e0
                       catch() { ... } // from try @ 009ef5e8 with catch @ 009ef4e0 */
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (long)(local_198 * 1000.0));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
                    /* try { // try from 009ef530 to 00aef57b has its CatchHandler @ 009ef5f0 */
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (long)(local_1a0 * 1000.0));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (long)(local_1a8 * 1000.0));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
                    /* try { // try from 009ef57c to 00aef5d3 has its CatchHandler @ 009ef4e0 */
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (long)(local_1b0 * 1000.0));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,(long)(local_1b8 * 1000.0)
            );
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_180 = 0x16a0c38;
  local_110[0] = 0x16a0c60;
                    /* try { // try from 009ef5d4 to 00aef5e7 has its CatchHandler @ 009ef5f0 */
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  if ((local_138 & 1) != 0) {
                    /* try { // try from 009ef5e8 to 00aef60b has its CatchHandler @ 009ef4e0 */
    operator_delete(local_128);
  }
                    /* catch() { ... } // from try @ 009ef530 with catch @ 009ef5f0
                       catch() { ... } // from try @ 009ef5d4 with catch @ 009ef5f0 */
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

