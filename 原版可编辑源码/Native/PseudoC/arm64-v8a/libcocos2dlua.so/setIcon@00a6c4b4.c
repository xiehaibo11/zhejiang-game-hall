
/* fairygui::GButton::setIcon(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GButton::setIcon(GButton *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  basic_string *pbVar2;
  long *plVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x2f0);
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
  plVar3 = *(long **)(this + 0x290);
  if (plVar3 == (long *)0x0) goto LAB_00a6c530;
  if (this[0x33c] == (GButton)0x0) {
LAB_00a6c520:
    pbVar4 = this_00;
  }
  else {
    pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x308);
    if (((byte)this[0x308] & 1) == 0) {
      if ((byte)this[0x308] >> 1 == 0) goto LAB_00a6c520;
    }
    else if (*(long *)(this + 0x310) == 0) goto LAB_00a6c520;
  }
  (**(code **)(*plVar3 + 0x28))(plVar3,pbVar4);
LAB_00a6c530:
  GObject::updateGear((GObject *)this,7);
  return;
}

