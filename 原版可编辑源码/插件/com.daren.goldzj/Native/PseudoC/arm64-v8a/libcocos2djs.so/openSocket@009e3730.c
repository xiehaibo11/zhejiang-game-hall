
/* cocos2d::network::SIOClientImpl::openSocket() */

void __thiscall cocos2d::network::SIOClientImpl::openSocket(SIOClientImpl *this)

{
  long lVar1;
  SIOClientImpl *pSVar2;
  basic_ostream *pbVar3;
  WebSocket *this_00;
  ulong uVar4;
  basic_string local_1a8 [16];
  void *local_198;
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
  long local_70;
  
                    /* catch() { ... } // from try @ 009e3594 with catch @ 009e3750
                       catch() { ... } // from try @ 009e362c with catch @ 009e3750 */
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009e3578 with catch @ 009e3770
                       catch() { ... } // from try @ 009e35d8 with catch @ 009e3770 */
  local_190 = (undefined **)0x1c670a0;
                    /* catch() { ... } // from try @ 009e3544 with catch @ 009e3788 */
  local_110[0] = (undefined **)0x1c670c8;
                    /* catch() { ... } // from try @ 009e3538 with catch @ 009e378c */
                    /* catch() { ... } // from try @ 009e3518 with catch @ 009e3790 */
  uStack_188 = 0;
  local_180 = &PTR__basic_stringstream_01c66fb0;
                    /* catch() { ... } // from try @ 009e3550 with catch @ 009e37a0
                       catch() { ... } // from try @ 009e35bc with catch @ 009e37a0
                       catch() { ... } // from try @ 009e36a0 with catch @ 009e37a0 */
  std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
  local_88 = 0;
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  local_190 = &PTR__basic_stringstream_01c66f88;
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::locale::locale(alStack_170);
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
                    /* try { // try from 009e37f8 to 00ae384b has its CatchHandler @ 009e37f8
                       catch() { ... } // from try @ 009e37f8 with catch @ 009e37f8
                       catch() { ... } // from try @ 009e38f4 with catch @ 009e37f8 */
  uStack_160 = 0;
  local_168 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  uStack_130 = 0;
  local_138 = 0;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  local_118 = 0x18;
  if (this[0x39] == (SIOClientImpl)0x0) {
                    /* try { // try from 009e384c to 00ae3863 has its CatchHandler @ 009e3970 */
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_180,"ws://",5);
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_180,"wss://",6);
  }
  if (*(int *)(this + 0x16c) == 1) {
    uVar4 = (ulong)((byte)this[0xc0] >> 1);
    pSVar2 = this + 0xc1;
    if (((byte)this[0xc0] & 1) != 0) {
      uVar4 = *(ulong *)(this + 200);
      pSVar2 = *(SIOClientImpl **)(this + 0xd0);
    }
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_180,(char *)pSVar2,uVar4);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,"/socket.io/1/websocket/?EIO=2&transport=websocket&sid=",0x36);
                    /* try { // try from 009e38f4 to 00ae39d7 has its CatchHandler @ 009e37f8 */
    uVar4 = (ulong)((byte)this[0x20] >> 1);
    pSVar2 = this + 0x21;
    if (((byte)this[0x20] & 1) != 0) {
      uVar4 = *(ulong *)(this + 0x28);
      pSVar2 = *(SIOClientImpl **)(this + 0x30);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar3,(char *)pSVar2,uVar4);
  }
  else if (*(int *)(this + 0x16c) == 0) {
                    /* try { // try from 009e386c to 00ae3877 has its CatchHandler @ 009e396c */
    uVar4 = (ulong)((byte)this[0xc0] >> 1);
    pSVar2 = this + 0xc1;
    if (((byte)this[0xc0] & 1) != 0) {
      uVar4 = *(ulong *)(this + 200);
      pSVar2 = *(SIOClientImpl **)(this + 0xd0);
    }
                    /* try { // try from 009e3878 to 00ae3883 has its CatchHandler @ 009e3968 */
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_180,(char *)pSVar2,uVar4);
                    /* try { // try from 009e3884 to 00ae38f3 has its CatchHandler @ 009e3980 */
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,"/socket.io/1/websocket/",0x17);
    uVar4 = (ulong)((byte)this[0x20] >> 1);
    pSVar2 = this + 0x21;
    if (((byte)this[0x20] & 1) != 0) {
      uVar4 = *(ulong *)(this + 0x28);
      pSVar2 = *(SIOClientImpl **)(this + 0x30);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar3,(char *)pSVar2,uVar4);
  }
  this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (this_00 != (WebSocket *)0x0) {
    WebSocket::WebSocket(this_00);
  }
  *(WebSocket **)(this + 0x170) = this_00;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  uVar4 = WebSocket::init(this_00,(Delegate *)(this + 0x10),local_1a8,(vector *)0x0,
                          (basic_string *)(this + 0x150));
  if (((byte)local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
                    /* catch() { ... } // from try @ 009e3878 with catch @ 009e3968 */
                    /* catch() { ... } // from try @ 009e386c with catch @ 009e396c */
                    /* catch() { ... } // from try @ 009e384c with catch @ 009e3970 */
  if (((uVar4 & 1) == 0) && (*(Ref **)(this + 0x170) != (Ref *)0x0)) {
    Ref::release(*(Ref **)(this + 0x170));
    *(undefined8 *)(this + 0x170) = 0;
  }
  local_190 = &PTR__basic_stringstream_01c66f88;
                    /* catch() { ... } // from try @ 009e3884 with catch @ 009e3980 */
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009e39d8 to 00ae3a2b has its CatchHandler @ 009e39d8
                       catch() { ... } // from try @ 009e39d8 with catch @ 009e39d8
                       catch() { ... } // from try @ 009e3b68 with catch @ 009e39d8 */
  return;
}

