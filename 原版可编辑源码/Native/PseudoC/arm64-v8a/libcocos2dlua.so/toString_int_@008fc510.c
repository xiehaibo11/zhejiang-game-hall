
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::StringUtils::toString<int>(int) */

void cocos2d::StringUtils::toString<int>(int param_1)

{
  long lVar1;
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
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_110[0] = 0x1698928;
  local_180 = 0x1698810;
  std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
                    /* try { // try from 008fc59c to 009fc5b3 has its CatchHandler @ 008fc6c4 */
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  local_110[0] = 0x1698838;
                    /* try { // try from 008fc5b8 to 009fc5cf has its CatchHandler @ 008fc6bc */
  local_88 = 0;
  local_180 = 0x1698810;
  std::__ndk1::locale::locale(alStack_170);
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
                    /* try { // try from 008fc5e0 to 009fc63f has its CatchHandler @ 008fc6c0 */
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  local_118 = 0x18;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,param_1);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_180 = 0x1698810;
  local_110[0] = 0x1698838;
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  if ((local_138 & 1) != 0) {
                    /* try { // try from 008fc640 to 009fc6df has its CatchHandler @ 008fc4a8 */
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

