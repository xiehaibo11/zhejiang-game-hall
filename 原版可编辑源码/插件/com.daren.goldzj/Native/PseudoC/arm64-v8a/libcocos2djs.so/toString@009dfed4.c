
/* cocos2d::network::SocketIOPacket::toString() const */

void __thiscall cocos2d::network::SocketIOPacket::toString(SocketIOPacket *this)

{
  SocketIOPacket SVar1;
  SocketIOPacket SVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  basic_ostream *pbVar6;
  long lVar7;
  SocketIOPacket *pSVar8;
  uint uVar9;
  SocketIOPacket *pSVar10;
  ulong uVar11;
  void *__src;
  char *pcVar12;
  ulong uVar13;
  byte local_1e0 [8];
  ulong local_1d8;
  char *local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  char *local_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  char *local_1a0;
  undefined **local_190;
  undefined8 uStack_188;
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
  
                    /* try { // try from 009dfed8 to 00adffa7 has its CatchHandler @ 009dfe28 */
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  local_190 = (undefined **)0x1c670a0;
  local_110[0] = (undefined **)0x1c670c8;
  uStack_188 = 0;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
  local_88 = 0;
                    /* catch() { ... } // from try @ 009dfeac with catch @ 009dff60 */
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  local_190 = &PTR__basic_stringstream_01c66f88;
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
                    /* catch() { ... } // from try @ 009dfed0 with catch @ 009dff74 */
  local_180 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::locale::locale(alStack_170);
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  uStack_130 = 0;
  local_138 = 0;
  local_118 = 0x18;
  iVar5 = (**(code **)(*(long *)this + 0x10))(this);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,iVar5);
  pSVar8 = this + 0xb1;
  uVar11 = (ulong)((byte)this[0xb0] >> 1);
  pSVar10 = pSVar8;
  if (((byte)this[0xb0] & 1) != 0) {
    uVar11 = *(ulong *)(this + 0xb8);
    pSVar10 = *(SocketIOPacket **)(this + 0xc0);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_180,(char *)pSVar10,uVar11);
  uStack_1a8 = 0;
  local_1a0 = (char *)0x0;
  local_1b0 = 0;
  if (((byte)this[8] & 1) == 0) {
    local_1a0 = *(char **)(this + 0x18);
    uStack_1a8 = *(ulong *)(this + 0x10);
    local_1b0 = *(ulong *)(this + 8);
  }
  else {
    uVar11 = *(ulong *)(this + 0x10);
    if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    __src = *(void **)(this + 0x18);
    if (uVar11 < 0x17) {
      pcVar12 = (char *)((ulong)&local_1b0 | 1);
      local_1b0 = (ulong)(byte)((int)uVar11 << 1);
      if (uVar11 != 0) goto LAB_009e0084;
    }
    else {
      uVar13 = uVar11 + 0x10 & 0xfffffffffffffff0;
      pcVar12 = operator_new(uVar13);
      local_1b0 = uVar13 | 1;
      uStack_1a8 = uVar11;
      local_1a0 = pcVar12;
LAB_009e0084:
      memcpy(pcVar12,__src,uVar11);
    }
    pcVar12[uVar11] = '\0';
  }
  SVar1 = this[0x20];
  uVar11 = (ulong)((byte)SVar1 >> 1);
  if (((byte)SVar1 & 1) != 0) {
    uVar11 = *(ulong *)(this + 0x28);
  }
  if (uVar11 == 4) {
    pSVar10 = *(SocketIOPacket **)(this + 0x30);
    if (((byte)SVar1 & 1) == 0) {
      pSVar10 = this + 0x21;
    }
    if (*(int *)pSVar10 == 0x61746164) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,"+",1);
    }
  }
  SVar1 = this[0x98];
  uVar11 = (ulong)((byte)SVar1 >> 1);
  if (((byte)SVar1 & 1) != 0) {
    uVar11 = *(ulong *)(this + 0xa0);
  }
  if (uVar11 == 3) {
    pSVar10 = *(SocketIOPacket **)(this + 0xa8);
    if (((byte)SVar1 & 1) == 0) {
      pSVar10 = this + 0x99;
    }
    iVar5 = memcmp(pSVar10,"ack",3);
    if (iVar5 != 0) goto LAB_009e012c;
  }
  else {
LAB_009e012c:
    uVar11 = local_1b0 >> 1 & 0x7f;
    pcVar12 = (char *)((ulong)&local_1b0 | 1);
    if ((local_1b0 & 1) != 0) {
      uVar11 = uStack_1a8;
      pcVar12 = local_1a0;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_180,pcVar12,uVar11);
  }
  uVar11 = (ulong)((byte)this[0xb0] >> 1);
  pSVar10 = pSVar8;
  if (((byte)this[0xb0] & 1) != 0) {
    uVar11 = *(ulong *)(this + 0xb8);
    pSVar10 = *(SocketIOPacket **)(this + 0xc0);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_180,(char *)pSVar10,uVar11);
  SVar1 = this[0x68];
  uVar11 = (ulong)((byte)SVar1 >> 1);
  if (((byte)SVar1 & 1) != 0) {
    uVar11 = *(ulong *)(this + 0x70);
  }
  if (uVar11 != 0) {
    if (uVar11 == 1) {
      pSVar10 = *(SocketIOPacket **)(this + 0x78);
      if (((byte)SVar1 & 1) == 0) {
        pSVar10 = this + 0x69;
      }
      if (*pSVar10 == (SocketIOPacket)0x2f) goto LAB_009e027c;
    }
    SVar2 = this[0x98];
    uVar13 = (ulong)((byte)SVar2 >> 1);
    if (((byte)SVar2 & 1) != 0) {
      uVar13 = *(ulong *)(this + 0xa0);
    }
    if (uVar13 == 10) {
      pSVar10 = *(SocketIOPacket **)(this + 0xa8);
      if (((byte)SVar2 & 1) == 0) {
        pSVar10 = this + 0x99;
      }
      iVar5 = memcmp(pSVar10,"disconnect",10);
joined_r0x009e021c:
      if (iVar5 == 0) goto LAB_009e027c;
    }
    else {
      if (uVar13 == 9) {
        pSVar10 = *(SocketIOPacket **)(this + 0xa8);
        if (((byte)SVar2 & 1) == 0) {
          pSVar10 = this + 0x99;
        }
        iVar5 = memcmp(pSVar10,"heartbeat",9);
        goto joined_r0x009e021c;
      }
      if (uVar13 == 3) {
        pSVar10 = *(SocketIOPacket **)(this + 0xa8);
        if (((byte)SVar2 & 1) == 0) {
          pSVar10 = this + 0x99;
        }
        iVar5 = memcmp(pSVar10,"ack",3);
        goto joined_r0x009e021c;
      }
    }
    pSVar10 = *(SocketIOPacket **)(this + 0x78);
    if (((byte)SVar1 & 1) == 0) {
      pSVar10 = this + 0x69;
    }
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_180,(char *)pSVar10,uVar11);
    uVar11 = (ulong)((byte)this[0x80] >> 1);
    pSVar10 = this + 0x81;
    if (((byte)this[0x80] & 1) != 0) {
      uVar11 = *(ulong *)(this + 0x88);
      pSVar10 = *(SocketIOPacket **)(this + 0x90);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar6,(char *)pSVar10,uVar11);
  }
LAB_009e027c:
  uVar11 = (ulong)((byte)this[0xb0] >> 1);
  if (((byte)this[0xb0] & 1) != 0) {
    uVar11 = *(ulong *)(this + 0xb8);
    pSVar8 = *(SocketIOPacket **)(this + 0xc0);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_180,(char *)pSVar8,uVar11);
  if (*(long *)(this + 0x50) == *(long *)(this + 0x58)) goto LAB_009e0378;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = (char *)0x0;
  SVar1 = this[0x98];
  uVar11 = (ulong)((byte)SVar1 >> 1);
  if (((byte)SVar1 & 1) != 0) {
    uVar11 = *(ulong *)(this + 0xa0);
  }
  if (uVar11 == 3) {
    pSVar8 = *(SocketIOPacket **)(this + 0xa8);
    if (((byte)SVar1 & 1) == 0) {
      pSVar8 = this + 0x99;
    }
    iVar5 = memcmp(pSVar8,"ack",3);
    if (iVar5 != 0) goto LAB_009e02ec;
    FUN_008d57d4(local_1e0,&local_1b0,"+");
    uVar11 = (ulong)(local_1e0[0] >> 1);
    pcVar12 = (char *)((ulong)local_1e0 | 1);
    if ((local_1e0[0] & 1) != 0) {
      uVar11 = local_1d8;
      pcVar12 = local_1d0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_1c8,pcVar12,uVar11);
    if ((local_1e0[0] & 1) != 0) {
      operator_delete(local_1d0);
    }
    uVar9 = (uint)(byte)local_1c8._0_1_;
    uVar11 = local_1c0;
    pcVar12 = local_1b8;
  }
  else {
LAB_009e02ec:
    uVar9 = 0;
    uVar11 = 0;
    pcVar12 = (char *)0x0;
  }
  uVar13 = (ulong)(uVar9 >> 1);
  pcVar4 = (char *)((ulong)&local_1c8 | 1);
  if ((uVar9 & 1) != 0) {
    uVar13 = uVar11;
    pcVar4 = pcVar12;
  }
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_180,pcVar4,uVar13);
  (**(code **)(*(long *)this + 0x18))(local_1e0,this);
  uVar11 = (ulong)(local_1e0[0] >> 1);
  pcVar12 = (char *)((ulong)local_1e0 | 1);
  if ((local_1e0[0] & 1) != 0) {
    uVar11 = local_1d8;
    pcVar12 = local_1d0;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,pcVar12,uVar11);
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
LAB_009e0378:
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  local_190 = &PTR__basic_stringstream_01c66f88;
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

