
/* fairygui::GButton::setSelectedIcon(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GButton::setSelectedIcon(GButton *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long *plVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x308);
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
  if (plVar3 == (long *)0x0) {
    return;
  }
  if (this[0x33c] != (GButton)0x0) {
    if (((byte)*this_00 & 1) == 0) {
      if ((byte)*this_00 >> 1 != 0) goto LAB_00a6c64c;
    }
    else if (*(long *)(this + 0x310) != 0) goto LAB_00a6c64c;
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x2f0);
LAB_00a6c64c:
                    /* WARNING: Could not recover jumptable at 0x00a6c660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,this_00);
  return;
}

