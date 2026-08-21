
/* cocos2d::network::SocketIOPacketV10x::~SocketIOPacketV10x() */

void __thiscall cocos2d::network::SocketIOPacketV10x::~SocketIOPacketV10x(SocketIOPacketV10x *this)

{
  byte *pbVar1;
  byte *pbVar2;
  SocketIOPacketV10x *pSVar3;
  byte *pbVar4;
  
                    /* catch() { ... } // from try @ 009e1aa0 with catch @ 009e1b7c */
  pbVar4 = *(byte **)(this + 200);
  *(undefined ***)this = &PTR__SocketIOPacketV10x_01c6be08;
  pbVar2 = *(byte **)(this + 0xd0);
  while (pbVar1 = pbVar2, pbVar1 != pbVar4) {
    pbVar2 = pbVar1 + -0x18;
    if ((*pbVar2 & 1) != 0) {
      operator_delete(*(void **)(pbVar1 + -8));
    }
  }
  pSVar3 = this + 0xe0;
  pbVar2 = *(byte **)pSVar3;
                    /* try { // try from 009e1bcc to 00ae1c23 has its CatchHandler @ 009e1bcc
                       catch() { ... } // from try @ 009e1bcc with catch @ 009e1bcc
                       catch() { ... } // from try @ 009e1d38 with catch @ 009e1bcc */
  *(byte **)(this + 0xd0) = pbVar4;
  pbVar4 = *(byte **)(this + 0xe8);
  while (pbVar1 = pbVar4, pbVar1 != pbVar2) {
    pbVar4 = pbVar1 + -0x18;
    if ((*pbVar4 & 1) != 0) {
      operator_delete(*(void **)(pbVar1 + -8));
    }
  }
  *(byte **)(this + 0xe8) = pbVar2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x98),"",0);
                    /* try { // try from 009e1c24 to 00ae1c3b has its CatchHandler @ 009e1dd0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 8),"",0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x38),"",0);
                    /* try { // try from 009e1c44 to 00ae1c4f has its CatchHandler @ 009e1dcc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x20),"",0);
                    /* try { // try from 009e1c50 to 00ae1c5b has its CatchHandler @ 009e1dc8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x68),"",0);
  pbVar4 = *(byte **)pSVar3;
  if (pbVar4 != (byte *)0x0) {
    pbVar1 = *(byte **)(this + 0xe8);
    pbVar2 = pbVar4;
    if (pbVar1 != pbVar4) {
      do {
        pbVar2 = pbVar1 + -0x18;
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar2;
      } while (pbVar4 != pbVar2);
      pbVar2 = *(byte **)pSVar3;
    }
    *(byte **)(this + 0xe8) = pbVar4;
                    /* try { // try from 009e1ca8 to 00ae1cab has its CatchHandler @ 009e1db0 */
    operator_delete(pbVar2);
  }
  SocketIOPacket::~SocketIOPacket((SocketIOPacket *)this);
  return;
}

