
/* fairygui::GButton::setSelectedTitle(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GButton::setSelectedTitle(GButton *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long *plVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x2d8);
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
  plVar3 = *(long **)(this + 0x288);
  if (plVar3 == (long *)0x0) {
    return;
  }
  if (this[0x33c] != (GButton)0x0) {
    if (((byte)*this_00 & 1) == 0) {
      if ((byte)*this_00 >> 1 != 0) goto LAB_00a6c5bc;
    }
    else if (*(long *)(this + 0x2e0) != 0) goto LAB_00a6c5bc;
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x2c0);
LAB_00a6c5bc:
                    /* WARNING: Could not recover jumptable at 0x00a6c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,this_00);
  return;
}

