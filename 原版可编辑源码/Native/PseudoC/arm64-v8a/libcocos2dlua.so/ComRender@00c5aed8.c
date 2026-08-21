
/* cocostudio::ComRender::ComRender() */

void __thiscall cocostudio::ComRender::ComRender(ComRender *this)

{
  ulong uVar1;
  char *pcVar2;
  
  cocos2d::Component::Component((Component *)this);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__ComRender_016ca1b8;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x30) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &COMPONENT_NAME) {
    uVar1 = DAT_01785a38;
    pcVar2 = DAT_01785a40;
    if ((COMPONENT_NAME & 1) == 0) {
      uVar1 = (ulong)(COMPONENT_NAME >> 1);
      pcVar2 = &DAT_01785a31;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),pcVar2,uVar1);
  }
  return;
}

