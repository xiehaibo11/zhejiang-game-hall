
/* cocostudio::ComController::ComController() */

void __thiscall cocostudio::ComController::ComController(ComController *this)

{
  ulong uVar1;
  char *pcVar2;
  
  cocos2d::Component::Component((Component *)this);
  InputDelegate::InputDelegate((InputDelegate *)(this + 0x50));
  *(undefined ***)this = &PTR__ComController_016ca000;
  *(undefined ***)(this + 0x50) = &PTR__ComController_016ca070;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x30) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &COMPONENT_NAME) {
    uVar1 = DAT_017859a8;
    pcVar2 = DAT_017859b0;
    if ((COMPONENT_NAME & 1) == 0) {
      uVar1 = (ulong)(COMPONENT_NAME >> 1);
      pcVar2 = &DAT_017859a1;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),pcVar2,uVar1);
  }
  return;
}

