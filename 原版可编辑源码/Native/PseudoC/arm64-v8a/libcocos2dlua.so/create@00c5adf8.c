
/* cocostudio::ComRender::create() */

Component * cocostudio::ComRender::create(void)

{
  char *pcVar1;
  Component *this;
  ulong uVar2;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Component *)0x0) {
    cocos2d::Component::Component(this);
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined ***)this = &PTR__ComRender_016ca1b8;
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x30) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        &COMPONENT_NAME) {
      uVar2 = DAT_01785a38;
      pcVar1 = DAT_01785a40;
      if ((COMPONENT_NAME & 1) == 0) {
        uVar2 = (ulong)(COMPONENT_NAME >> 1);
        pcVar1 = &DAT_01785a31;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x30),pcVar1,uVar2);
    }
    uVar2 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Component *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

