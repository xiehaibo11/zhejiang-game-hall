
/* cocos2d::Value::asString() const */

void cocos2d::Value::asString(void)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  double *in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  char local_194 [4];
  undefined8 local_190;
  undefined8 uStack_188;
  long local_180;
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
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (*(float *)(in_x0 + 1) == 9.80909e-45) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8,(basic_string *)*in_x0);
  }
  else {
    local_110[0] = 0x1698928;
    local_190 = 0x1698900;
    uStack_188 = 0;
    local_180 = 0x1698810;
    std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
    local_88 = 0;
    local_80 = 0xffffffff;
    ppuStack_178 = &PTR__basic_streambuf_01698a08;
    local_190 = 0x16987e8;
    local_110[0] = 0x1698838;
    local_180 = 0x1698810;
    std::__ndk1::locale::locale(alStack_170);
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
    ppuStack_178 = &PTR__basic_stringbuf_01698960;
    local_118 = 0x18;
    switch(*(float *)(in_x0 + 1)) {
    case 1.4013e-45:
      local_194[0] = *(char *)in_x0;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_180,local_194,1);
      break;
    case 2.8026e-45:
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,
                 (int)*(float *)in_x0);
      break;
    case 4.2039e-45:
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,
                 (uint)*(float *)in_x0);
      break;
    case 5.60519e-45:
      *(uint *)(alStack_170 + *(long *)(local_180 + -0x18) + -8) =
           *(uint *)(alStack_170 + *(long *)(local_180 + -0x18) + -8) & 0xfffffeff | 4;
      *(undefined8 *)(alStack_170 + *(long *)(local_180 + -0x18)) = 7;
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,*(float *)in_x0);
      break;
    case 7.00649e-45:
      *(uint *)(alStack_170 + *(long *)(local_180 + -0x18) + -8) =
           *(uint *)(alStack_170 + *(long *)(local_180 + -0x18) + -8) & 0xfffffeff | 4;
      *(undefined8 *)(alStack_170 + *(long *)(local_180 + -0x18)) = 0x10;
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,*in_x0);
      break;
    case 8.40779e-45:
      pcVar2 = "false";
      if (*(char *)in_x0 != '\0') {
        pcVar2 = "true";
      }
      uVar1 = 4;
      if (*(char *)in_x0 == '\0') {
        uVar1 = 5;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_180,pcVar2,uVar1);
    }
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    local_190 = 0x16987e8;
    local_110[0] = 0x1698838;
    local_180 = 0x1698810;
    ppuStack_178 = &PTR__basic_stringbuf_01698960;
    if ((local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    ppuStack_178 = &PTR__basic_streambuf_01698a08;
    std::__ndk1::locale::~locale(alStack_170);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

