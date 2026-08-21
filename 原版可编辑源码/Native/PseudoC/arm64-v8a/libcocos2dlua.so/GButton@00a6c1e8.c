
/* fairygui::GButton::GButton() */

void __thiscall fairygui::GButton::GButton(GButton *this)

{
  ulong uVar1;
  char *pcVar2;
  
  GComponent::GComponent((GComponent *)this);
  *(undefined4 *)(this + 0x280) = 0;
  *(undefined ***)this = &PTR__GButton_016a4e30;
  *(undefined2 *)(this + 0x33c) = 0;
  this[0x33e] = (GButton)0x0;
  *(undefined4 *)(this + 0x340) = 0;
  this[0x344] = (GButton)0x0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 0x348) = 0x3f4ccccd;
  this[0x34c] = (GButton)0x1;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)(this + 800)
      != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         &UIConfig::buttonSound) {
    uVar1 = DAT_017826f0;
    pcVar2 = DAT_017826f8;
    if ((UIConfig::buttonSound & 1) == 0) {
      uVar1 = (ulong)(UIConfig::buttonSound >> 1);
      pcVar2 = &DAT_017826e9;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 800),pcVar2,uVar1);
  }
  *(undefined4 *)(this + 0x338) = UIConfig::buttonSoundVolumeScale;
  return;
}

