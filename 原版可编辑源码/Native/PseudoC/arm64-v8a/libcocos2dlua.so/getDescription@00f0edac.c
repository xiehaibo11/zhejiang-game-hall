
/* cocos2d::Label::getDescription() const */

void cocos2d::Label::getDescription(void)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long in_x0;
  undefined8 in_x1;
  undefined8 in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  char acStack_6c [52];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00f0edcc to 0100edd3 has its CatchHandler @ 00f0ee28 */
                    /* try { // try from 00f0edd4 to 0100ee43 has its CatchHandler @ 00f0ed98 */
  FUN_00f0ee58(acStack_6c,in_x1,in_x2,*(undefined4 *)(in_x0 + 0x1a0));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,acStack_6c);
  uVar1 = (ulong)(*(byte *)(in_x0 + 0x328) >> 1);
  pcVar3 = (char *)(in_x0 + 0x329);
  if ((*(byte *)(in_x0 + 0x328) & 1) != 0) {
    uVar1 = *(ulong *)(in_x0 + 0x330);
    pcVar3 = *(char **)(in_x0 + 0x338);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,pcVar3,uVar1);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00f0edcc with catch @ 00f0ee28 */
  return;
}

