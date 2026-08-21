
/* cocos2d::LabelTTF::getTextDefinition() */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
cocos2d::LabelTTF::getTextDefinition(LabelTTF *this)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  Size aSStack_70 [8];
  undefined4 local_68;
  LabelTTF local_64;
  Size aSStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00f12c6c to 01012c73 has its CatchHandler @ 00f12cf4 */
                    /* try { // try from 00f12c74 to 01012d0f has its CatchHandler @ 00f12c24 */
  Label::_getFontDefinition();
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x318);
  if (this_00 != local_98) {
    uVar1 = (ulong)((byte)local_98[0] >> 1);
    pcVar3 = (char *)((ulong)local_98 | 1);
    if (((byte)local_98[0] & 1) != 0) {
      uVar1 = local_90;
      pcVar3 = local_88;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,pcVar3,uVar1);
  }
  *(undefined8 *)(this + 0x338) = uStack_78;
  *(undefined8 *)(this + 0x330) = local_80;
  Size::operator=((Size *)(this + 0x340),aSStack_70);
  *(undefined4 *)(this + 0x348) = local_68;
  this[0x34c] = local_64;
  Size::operator=((Size *)(this + 0x350),aSStack_60);
  *(undefined8 *)(this + 0x358) = local_58;
  *(undefined4 *)(this + 0x370) = local_40;
  *(undefined8 *)(this + 0x368) = uStack_48;
  *(undefined8 *)(this + 0x360) = local_50;
                    /* catch() { ... } // from try @ 00f12c6c with catch @ 00f12cf4 */
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

