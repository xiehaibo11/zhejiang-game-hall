
/* cocos2d::MenuItemFont::setFontNameObj(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::MenuItemFont::setFontNameObj(MenuItemFont *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  basic_string *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x350);
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
  plVar3 = (long *)0x0;
  if (*(long *)(this + 0x340) != 0) {
    plVar3 = (long *)__dynamic_cast(*(long *)(this + 0x340),&Node::typeinfo,&Label::typeinfo,0);
  }
  (**(code **)(*plVar3 + 0x560))(plVar3,this_00);
  plVar3 = (long *)0x0;
  if (*(long *)(this + 0x340) != 0) {
    plVar3 = (long *)__dynamic_cast(*(long *)(this + 0x340),&Node::typeinfo,&Label::typeinfo,0);
  }
                    /* try { // try from 00f1eb98 to 0101ebf3 has its CatchHandler @ 00f1eb98
                       catch() { ... } // from try @ 00f1eb98 with catch @ 00f1eb98
                       catch() { ... } // from try @ 00f1ee28 with catch @ 00f1eb98 */
  uVar4 = (**(code **)(*plVar3 + 0x168))();
                    /* WARNING: Could not recover jumptable at 0x00f1ebb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x160))(this,uVar4);
  return;
}

