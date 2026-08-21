
/* cocostudio::ComAudio::ComAudio() */

void __thiscall cocostudio::ComAudio::ComAudio(ComAudio *this)

{
  ulong uVar1;
  char *pcVar2;
  
  cocos2d::Component::Component((Component *)this);
  *(undefined ***)this = &PTR__ComAudio_016c9f08;
  *(undefined ***)(this + 0x50) = &PTR__ComAudio_016c9f88;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x58),"");
  this[0x70] = (ComAudio)0x0;
  *(undefined4 *)(this + 0x74) = 0;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x30) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &COMPONENT_NAME) {
    uVar1 = DAT_01785918;
    pcVar2 = DAT_01785920;
    if ((COMPONENT_NAME & 1) == 0) {
      uVar1 = (ulong)(COMPONENT_NAME >> 1);
      pcVar2 = &DAT_01785911;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),pcVar2,uVar1);
  }
  return;
}

