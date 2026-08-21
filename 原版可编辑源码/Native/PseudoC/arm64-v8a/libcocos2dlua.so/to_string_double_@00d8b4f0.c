
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   dragonBones::to_string<double>(double const&) */

void dragonBones::to_string<double>(double *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
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
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00d8b524 to 00e8b53b has its CatchHandler @ 00d8b74c */
  local_180 = 0x16a0c88;
  local_110[0] = 0x16a0cb0;
  std::__ndk1::ios_base::init((ios_base *)local_110,(void *)((ulong)&local_180 | 8));
  uVar1 = 0x16a0c38;
  uVar2 = 0x16a0c60;
  local_80 = 0xffffffff;
  local_88 = 0;
  local_180 = uVar1;
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  local_110[0] = uVar2;
  std::__ndk1::locale::locale(alStack_170);
                    /* try { // try from 00d8b59c to 00e8b6a3 has its CatchHandler @ 00d8b71c */
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
  ppuStack_178 = &PTR__basic_stringbuf_01698960;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,*param_1);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_180 = uVar1;
  local_110[0] = uVar2;
  if ((local_138 & 1) != 0) {
    ppuStack_178 = &PTR__basic_stringbuf_01698960;
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

