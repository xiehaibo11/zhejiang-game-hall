
/* universe::Downloader2::_getCostTime(void*) const */

void __thiscall universe::Downloader2::_getCostTime(Downloader2 *this,void *param_1)

{
  long lVar1;
  basic_ostream *pbVar2;
  long lVar3;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined **local_190;
  undefined **ppuStack_188;
  locale alStack_180 [8];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulong local_148;
  undefined8 uStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined **local_120 [17];
  undefined8 local_98;
  undefined4 local_90;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  local_198 = 0.0;
  FUN_00a0f378(param_1,"Technique9ParameterC2ERKS2_",&local_198);
  local_1a0 = 0.0;
  FUN_00a0f378(param_1,"echnique9ParameterC2ERKS2_",&local_1a0);
  local_1a8 = 0.0;
  FUN_00a0f378(param_1,"ZN7cocos2d8renderer9Technique9ParameterC2Ev",&local_1a8);
  local_1b0 = 0.0;
  FUN_00a0f378(param_1,"chnique9ParameterC2ERKS2_",&local_1b0);
  local_1b8 = 0.0;
  FUN_00a0f378(param_1,"ameterC2ERKS2_",&local_1b8);
  local_1c0 = 0.0;
  FUN_00a0f378(param_1,"9Technique9ParameterC2ERKS2_",&local_1c0);
  local_1c8 = 0.0;
  FUN_00a0f378(param_1,"eterC2ERKS2_",&local_1c8);
  local_190 = (undefined **)0x1c6c8a8;
  local_120[0] = (undefined **)0x1c6c8d0;
  std::__ndk1::ios_base::init((ios_base *)local_120,(void *)((ulong)&local_190 | 8));
  local_98 = 0;
  local_190 = &PTR__basic_ostringstream_01c6c858;
  local_90 = 0xffffffff;
  ppuStack_188 = &PTR__basic_streambuf_01c671a8;
  local_120[0] = &PTR__basic_ostringstream_01c6c880;
  std::__ndk1::locale::locale(alStack_180);
  ppuStack_188 = &PTR__basic_stringbuf_01c67100;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_170 = 0;
  local_178 = 0;
  uStack_130 = 0;
  local_138 = (void *)0x0;
  uStack_140 = 0;
  local_148 = 0;
  local_128 = 0x10;
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190,
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
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (long)(local_1b0 * 1000.0));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (long)(local_1b8 * 1000.0));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (long)(local_1c0 * 1000.0));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,(long)(local_1c8 * 1000.0)
            );
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_190 = &PTR__basic_ostringstream_01c6c858;
  ppuStack_188 = &PTR__basic_stringbuf_01c67100;
  local_120[0] = &PTR__basic_ostringstream_01c6c880;
  if ((local_148 & 1) != 0) {
    operator_delete(local_138);
  }
  ppuStack_188 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_180);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_120);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

