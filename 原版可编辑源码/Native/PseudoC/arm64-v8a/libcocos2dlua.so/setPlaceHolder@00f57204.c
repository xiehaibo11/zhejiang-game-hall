
/* cocos2d::TextFieldTTF::setPlaceHolder(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::TextFieldTTF::setPlaceHolder(TextFieldTTF *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  Color3B aCStack_40 [8];
  long local_38;
  
                    /* try { // try from 00f57210 to 01057223 has its CatchHandler @ 00f57674 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x6d0);
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
  if (((byte)this[0x6b8] & 1) == 0) {
    if ((byte)this[0x6b8] >> 1 != 0) goto LAB_00f572b4;
  }
  else if (*(long *)(this + 0x6c0) != 0) goto LAB_00f572b4;
  if (this[0x728] == (TextFieldTTF)0x0) {
                    /* try { // try from 00f57278 to 010572a3 has its CatchHandler @ 00f57694 */
    if (*(int *)(this + 0x308) == 1) {
      Color3B::Color3B(aCStack_40,(Color4B *)(this + 0x6e8));
      Node::setColor((Node *)this,aCStack_40);
    }
    else {
      Label::setTextColor((Label *)this,(Color4B *)(this + 0x6e8));
    }
    Label::setString((Label *)this,(basic_string *)this_00);
  }
LAB_00f572b4:
                    /* try { // try from 00f572b4 to 010572c7 has its CatchHandler @ 00f57670 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

