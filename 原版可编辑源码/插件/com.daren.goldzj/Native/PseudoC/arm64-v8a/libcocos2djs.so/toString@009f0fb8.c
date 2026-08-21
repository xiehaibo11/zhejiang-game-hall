
/* cocos2d::network::Uri::toString() const */

void __thiscall cocos2d::network::Uri::toString(Uri *this)

{
  Uri *pUVar1;
  Uri UVar2;
  long lVar3;
  basic_ostream *pbVar4;
  ulong uVar5;
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
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_110[0] = (undefined **)0x1c670c8;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
  local_88 = 0;
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::locale::locale(alStack_170);
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  uStack_130 = 0;
  local_138 = 0;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  local_118 = 0x18;
  uVar5 = (ulong)((byte)this[8] >> 1);
  pUVar1 = this + 9;
  if (((byte)this[8] & 1) != 0) {
    uVar5 = *(ulong *)(this + 0x10);
    pUVar1 = *(Uri **)(this + 0x18);
  }
  if (this[0x80] == (Uri)0x0) {
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_180,(char *)pUVar1,uVar5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,":",1);
  }
  else {
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_180,(char *)pUVar1,uVar5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"://",3);
    if (((byte)this[0x38] & 1) == 0) {
      uVar5 = (ulong)((byte)this[0x38] >> 1);
    }
    else {
      uVar5 = *(ulong *)(this + 0x40);
    }
    UVar2 = this[0x20];
    if (uVar5 == 0) {
      if (((byte)UVar2 & 1) == 0) {
        if ((byte)UVar2 >> 1 != 0) {
LAB_009f1198:
          uVar5 = *(ulong *)(this + 0x28);
          pUVar1 = *(Uri **)(this + 0x30);
          if (((byte)UVar2 & 1) == 0) {
            pUVar1 = this + 0x21;
            uVar5 = (ulong)((byte)UVar2 >> 1);
          }
          pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)&local_180,(char *)pUVar1,uVar5);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"@",1);
        }
      }
      else if (*(long *)(this + 0x28) != 0) goto LAB_009f1198;
    }
    else {
      uVar5 = *(ulong *)(this + 0x28);
      pUVar1 = *(Uri **)(this + 0x30);
      if (((byte)UVar2 & 1) == 0) {
        pUVar1 = this + 0x21;
        uVar5 = (ulong)((byte)UVar2 >> 1);
      }
                    /* try { // try from 009f113c to 00af1157 has its CatchHandler @ 009f159c */
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,(char *)pUVar1,uVar5);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,":",1);
      uVar5 = *(ulong *)(this + 0x40);
      pUVar1 = *(Uri **)(this + 0x48);
                    /* try { // try from 009f115c to 00af119f has its CatchHandler @ 009f1548 */
      if (((byte)this[0x38] & 1) == 0) {
        pUVar1 = this + 0x39;
        uVar5 = (ulong)((byte)this[0x38] >> 1);
      }
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,(char *)pUVar1,uVar5);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"@",1);
    }
    uVar5 = (ulong)((byte)this[0x50] >> 1);
    pUVar1 = this + 0x51;
                    /* try { // try from 009f11d8 to 00af1213 has its CatchHandler @ 009f159c */
    if (((byte)this[0x50] & 1) != 0) {
      uVar5 = *(ulong *)(this + 0x58);
      pUVar1 = *(Uri **)(this + 0x60);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_180,(char *)pUVar1,uVar5);
    if (*(short *)(this + 0x82) != 0) {
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,":",1);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                 *(ushort *)(this + 0x82));
    }
  }
  uVar5 = (ulong)((byte)this[0xb8] >> 1);
  pUVar1 = this + 0xb9;
  if (((byte)this[0xb8] & 1) != 0) {
    uVar5 = *(ulong *)(this + 0xc0);
    pUVar1 = *(Uri **)(this + 200);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_180,(char *)pUVar1,uVar5);
  if (((byte)this[0xd0] & 1) == 0) {
    if ((byte)this[0xd0] >> 1 != 0) {
LAB_009f1250:
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,"?",1);
      uVar5 = *(ulong *)(this + 0xd8);
      pUVar1 = *(Uri **)(this + 0xe0);
      if (((byte)this[0xd0] & 1) == 0) {
        pUVar1 = this + 0xd1;
        uVar5 = (ulong)((byte)this[0xd0] >> 1);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar4,(char *)pUVar1,uVar5);
    }
  }
  else if (*(long *)(this + 0xd8) != 0) goto LAB_009f1250;
  if (((byte)this[0xe8] & 1) == 0) {
    if ((byte)this[0xe8] >> 1 == 0) goto LAB_009f12d0;
  }
  else {
                    /* try { // try from 009f129c to 00af151f has its CatchHandler @ 009f1548 */
    if (*(long *)(this + 0xf0) == 0) goto LAB_009f12d0;
  }
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_180,"#",1);
  uVar5 = *(ulong *)(this + 0xf0);
  pUVar1 = *(Uri **)(this + 0xf8);
  if (((byte)this[0xe8] & 1) == 0) {
    pUVar1 = this + 0xe9;
    uVar5 = (ulong)((byte)this[0xe8] >> 1);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar4,(char *)pUVar1,uVar5);
LAB_009f12d0:
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

