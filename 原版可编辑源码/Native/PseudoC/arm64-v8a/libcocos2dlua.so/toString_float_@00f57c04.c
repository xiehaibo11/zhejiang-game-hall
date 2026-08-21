
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::StringUtils::toString<float>(float) */

void cocos2d::StringUtils::toString<float>(float param_1)

{
  long lVar1;
  undefined8 local_190;
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
  undefined8 local_120 [17];
  undefined8 local_98;
  undefined4 local_90;
  long local_80;
  
                    /* try { // try from 00f57c14 to 01057c1f has its CatchHandler @ 00f57ff4 */
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  local_120[0] = 0x1698928;
  local_190 = 0x1698810;
  std::__ndk1::ios_base::init((ios_base *)local_120,&ppuStack_188);
                    /* try { // try from 00f57c98 to 01057cc3 has its CatchHandler @ 00f57fd4 */
  local_90 = 0xffffffff;
  ppuStack_188 = &PTR__basic_streambuf_01698a08;
  local_120[0] = 0x1698838;
  local_98 = 0;
  local_190 = 0x1698810;
  std::__ndk1::locale::locale(alStack_180);
                    /* try { // try from 00f57ccc to 01057ccf has its CatchHandler @ 00f57fd8 */
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_170 = 0;
  local_178 = 0;
                    /* try { // try from 00f57cd8 to 01057d47 has its CatchHandler @ 00f57fc4 */
  uStack_140 = 0;
  local_148 = 0;
  uStack_130 = 0;
  local_138 = (void *)0x0;
  ppuStack_188 = &PTR__basic_stringbuf_01698960;
  local_128 = 0x18;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190,param_1);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_190 = 0x1698810;
  local_120[0] = 0x1698838;
  ppuStack_188 = &PTR__basic_stringbuf_01698960;
  if ((local_148 & 1) != 0) {
    operator_delete(local_138);
  }
  ppuStack_188 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_180);
                    /* try { // try from 00f57d5c to 01057dcb has its CatchHandler @ 00f57fd8 */
  std::__ndk1::ios_base::~ios_base((ios_base *)local_120);
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

