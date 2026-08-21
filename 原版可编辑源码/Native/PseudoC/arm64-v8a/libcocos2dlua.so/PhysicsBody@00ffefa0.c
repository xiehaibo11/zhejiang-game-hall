
/* cocos2d::PhysicsBody::PhysicsBody() */

void __thiscall cocos2d::PhysicsBody::PhysicsBody(PhysicsBody *this)

{
  ulong uVar1;
  char *pcVar2;
  
  Component::Component((Component *)this);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined ***)this = &PTR__PhysicsBody_01724d90;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x90) = 0x1010101;
  this[0x94] = (PhysicsBody)0x1;
  this[0xb0] = (PhysicsBody)0x0;
  *(undefined4 *)(this + 0xa8) = 0x7f7fffff;
  *(undefined4 *)(this + 0xac) = 0x7f7fffff;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined8 *)(this + 0xba) = 0;
  *(undefined8 *)(this + 0xcc) = 0;
  *(undefined8 *)(this + 0xa0) = 0x4348000000000000;
  *(undefined8 *)(this + 0x98) = 0x3f800000;
  *(undefined8 *)(this + 0xc4) = 0;
  Vec3::Vec3((Vec3 *)(this + 0xe0));
  *(undefined8 *)(this + 0xf4) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0xec) = 0;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x30) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &COMPONENT_NAME) {
    uVar1 = DAT_01792c98;
    pcVar2 = DAT_01792ca0;
    if ((COMPONENT_NAME & 1) == 0) {
      uVar1 = (ulong)(COMPONENT_NAME >> 1);
      pcVar2 = &DAT_01792c91;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),pcVar2,uVar1);
  }
                    /* try { // try from 00fff078 to 010ff1af has its CatchHandler @ 00fff078
                       catch() { ... } // from try @ 00fff078 with catch @ 00fff078
                       catch() { ... } // from try @ 00fff1b8 with catch @ 00fff078 */
  return;
}

