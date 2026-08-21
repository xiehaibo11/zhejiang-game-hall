
/* cocostudio::ComExtensionData::ComExtensionData() */

void __thiscall cocostudio::ComExtensionData::ComExtensionData(ComExtensionData *this)

{
  ulong uVar1;
  char *pcVar2;
  
  cocos2d::Component::Component((Component *)this);
  *(undefined ***)this = &PTR__ComExtensionData_016ce200;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x50),"");
  *(undefined8 *)(this + 0x68) = 0;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x30) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &COMPONENT_NAME) {
    uVar1 = DAT_01786b18;
    pcVar2 = DAT_01786b20;
    if ((COMPONENT_NAME & 1) == 0) {
      uVar1 = (ulong)(COMPONENT_NAME >> 1);
      pcVar2 = &DAT_01786b11;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),pcVar2,uVar1);
  }
  return;
}

