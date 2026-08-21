
/* cocostudio::ComAttribute::ComAttribute() */

void __thiscall cocostudio::ComAttribute::ComAttribute(ComAttribute *this)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  cocos2d::Component::Component((Component *)this);
  *(undefined ***)this = &PTR__ComAttribute_016c9e80;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 200) = 0x400;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  puVar3 = operator_new(0x28);
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3[1] = 0x10000;
  *(undefined8 **)(this + 0x90) = puVar3;
  *(undefined8 **)(this + 0x98) = puVar3;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x30) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &COMPONENT_NAME) {
    uVar1 = DAT_01785888;
    pcVar2 = DAT_01785890;
    if ((COMPONENT_NAME & 1) == 0) {
      uVar1 = (ulong)(COMPONENT_NAME >> 1);
      pcVar2 = &DAT_01785881;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),pcVar2,uVar1);
  }
  return;
}

