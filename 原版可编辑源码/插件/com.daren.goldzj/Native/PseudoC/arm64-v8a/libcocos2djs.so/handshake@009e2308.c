
/* cocos2d::network::SIOClientImpl::handshake() */

void __thiscall cocos2d::network::SIOClientImpl::handshake(SIOClientImpl *this)

{
  ulong uVar1;
  long lVar2;
  SIOClientImpl *pSVar3;
  char *pcVar4;
  basic_ostream *pbVar5;
  Ref *this_00;
  HttpClient *pHVar6;
  code *pcVar7;
  long lVar8;
  undefined **local_1f0;
  undefined **ppuStack_1e8;
  locale alStack_1e0 [8];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  ulong local_1a8;
  undefined8 uStack_1a0;
  void *local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined **local_180 [17];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined **local_e0;
  code *local_d8;
  undefined8 uStack_d0;
  SIOClientImpl *local_c8;
  undefined ***local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0;
  undefined7 uStack_af;
  undefined1 local_a8;
  undefined2 uStack_a7;
  undefined5 uStack_a5;
  char *pcStack_a0;
  SIOClientImpl *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_90;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 009e2338 to 00ae238f has its CatchHandler @ 009e2338
                       catch() { ... } // from try @ 009e2338 with catch @ 009e2338
                       catch() { ... } // from try @ 009e2440 with catch @ 009e2338
                       catch() { ... } // from try @ 009e24a0 with catch @ 009e2338 */
  lVar8 = *(long *)(lVar2 + 0x28);
  local_180[0] = (undefined **)0x1c670c8;
  local_1f0 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_180,&ppuStack_1e8);
  local_f8 = 0;
                    /* try { // try from 009e2390 to 00ae23af has its CatchHandler @ 009e24bc */
  local_f0 = 0xffffffff;
  ppuStack_1e8 = &PTR__basic_streambuf_01c671a8;
  local_180[0] = &PTR__basic_stringstream_01c66fd8;
  local_1f0 = &PTR__basic_stringstream_01c66fb0;
                    /* try { // try from 009e23b0 to 00ae23c7 has its CatchHandler @ 009e24b8 */
  std::__ndk1::locale::locale(alStack_1e0);
                    /* try { // try from 009e23c8 to 00ae23d3 has its CatchHandler @ 009e24a0 */
  uStack_1b0 = 0;
  local_1b8 = 0;
  uStack_1c0 = 0;
  local_1c8 = 0;
  uStack_1d0 = 0;
  local_1d8 = 0;
  uStack_190 = 0;
  local_198 = (void *)0x0;
  uStack_1a0 = 0;
  local_1a8 = 0;
  ppuStack_1e8 = &PTR__basic_stringbuf_01c67100;
  local_188 = 0x18;
  if (this[0x39] == (SIOClientImpl)0x0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_1f0,"http://",7);
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_1f0,"https://",8);
  }
                    /* try { // try from 009e2438 to 00ae243f has its CatchHandler @ 009e24bc */
  uVar1 = (ulong)((byte)this[0xc0] >> 1);
  pSVar3 = this + 0xc1;
  if (((byte)this[0xc0] & 1) != 0) {
    uVar1 = *(ulong *)(this + 200);
    pSVar3 = *(SIOClientImpl **)(this + 0xd0);
  }
                    /* try { // try from 009e2440 to 00ae2497 has its CatchHandler @ 009e2338 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_1f0,(char *)pSVar3,uVar1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar5,"/socket.io/1/?EIO=2&transport=polling&b64=true",0x2e);
  this_00 = operator_new(0xc0,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined4 *)(this_00 + 0xc) = 4;
    *(undefined8 *)(this_00 + 0x80) = 0;
    *(undefined8 *)(this_00 + 0x50) = 0;
                    /* try { // try from 009e2498 to 00ae249f has its CatchHandler @ 009e24bc */
    *(undefined ***)this_00 = &PTR__HttpRequest_01c68340;
                    /* catch() { ... } // from try @ 009e23c8 with catch @ 009e24a0
                       try { // try from 009e24a0 to 00ae24cf has its CatchHandler @ 009e2338 */
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x98) = 0;
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined8 *)(this_00 + 0xa8) = 0;
    *(undefined8 *)(this_00 + 0xa0) = 0;
    *(undefined4 *)(this_00 + 0xb0) = 0x41200000;
  }
                    /* catch() { ... } // from try @ 009e23b0 with catch @ 009e24b8 */
                    /* catch() { ... } // from try @ 009e2390 with catch @ 009e24bc
                       catch() { ... } // from try @ 009e2438 with catch @ 009e24bc
                       catch() { ... } // from try @ 009e2498 with catch @ 009e24bc */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this_00 + 0x10) != &local_b0) {
    uVar1 = (ulong)((byte)local_b0 >> 1);
    pcVar4 = (char *)((ulong)&local_b0 | 1);
    if (((byte)local_b0 & 1) != 0) {
      uVar1 = CONCAT53(uStack_a5,CONCAT21(uStack_a7,local_a8));
      pcVar4 = pcStack_a0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this_00 + 0x10),pcVar4,uVar1);
  }
  if (((byte)local_b0 & 1) != 0) {
    operator_delete(pcStack_a0);
  }
  *(undefined4 *)(this_00 + 0xc) = 0;
  local_c0 = &local_e0;
  local_e0 = &PTR_FUN_01c6bf80;
  uStack_d0 = 0;
  local_d8 = handshakeResponse;
  local_b0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x80;
  uStack_af = 0x1c6bf;
  pcStack_a0 = (char *)0x0;
  local_a8 = 0x54;
  uStack_a7 = 0x9e27;
  uStack_a5 = 0;
  local_c8 = this;
  local_98 = this;
  local_90 = &local_b0;
  FUN_008fe56c(&local_b0,this_00 + 0x60);
  if (&local_b0 == local_90) {
                    /* try { // try from 009e2578 to 00ae25cf has its CatchHandler @ 009e2578
                       catch() { ... } // from try @ 009e2578 with catch @ 009e2578
                       catch() { ... } // from try @ 009e266c with catch @ 009e2578
                       catch() { ... } // from try @ 009e26cc with catch @ 009e2578 */
    pcVar7 = *(code **)(*(long *)local_90 + 0x20);
LAB_009e2580:
    (*pcVar7)();
  }
  else if (local_90 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
    pcVar7 = *(code **)(*(long *)local_90 + 0x28);
    goto LAB_009e2580;
  }
  if (&local_e0 == local_c0) {
    pcVar7 = (code *)(*local_c0)[4];
LAB_009e25ac:
    (*pcVar7)();
  }
  else if (local_c0 != (undefined ***)0x0) {
    pcVar7 = (code *)(*local_c0)[5];
    goto LAB_009e25ac;
  }
  uStack_a5 = 0;
  local_b0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x12;
                    /* try { // try from 009e25d0 to 00ae266b has its CatchHandler @ 009e26cc */
  pcStack_a0 = (void *)0x0;
  uStack_a7 = 0x65;
  uStack_af = 0x616873646e6168;
  local_a8 = 0x6b;
  if (((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
       (this_00 + 0x40) != &local_b0) &&
     (std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this_00 + 0x40),(char *)((ulong)&local_b0 | 1),9), ((byte)local_b0 & 1) != 0)) {
    operator_delete(pcStack_a0);
  }
  if (this[0x39] != (SIOClientImpl)0x0) {
    if (((byte)this[0x150] & 1) == 0) {
      if ((byte)this[0x150] >> 1 == 0) goto LAB_009e2634;
    }
    else if (*(long *)(this + 0x158) == 0) goto LAB_009e2634;
    pHVar6 = (HttpClient *)HttpClient::getInstance();
    HttpClient::setSSLVerification(pHVar6,(basic_string *)(this + 0x150));
  }
LAB_009e2634:
  pHVar6 = (HttpClient *)HttpClient::getInstance();
  HttpClient::send(pHVar6,(HttpRequest *)this_00);
  Ref::release(this_00);
  local_180[0] = &PTR__basic_stringstream_01c66fd8;
  local_1f0 = &PTR__basic_stringstream_01c66fb0;
  ppuStack_1e8 = &PTR__basic_stringbuf_01c67100;
  if ((local_1a8 & 1) != 0) {
                    /* try { // try from 009e266c to 00ae26c3 has its CatchHandler @ 009e2578 */
    operator_delete(local_198);
  }
  ppuStack_1e8 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_1e0);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_180);
  if (*(long *)(lVar2 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

