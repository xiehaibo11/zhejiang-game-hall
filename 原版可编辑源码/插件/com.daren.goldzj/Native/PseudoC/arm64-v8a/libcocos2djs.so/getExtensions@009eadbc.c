
/* WebSocketImpl::getExtensions() const */

void WebSocketImpl::getExtensions(void)

{
  long lVar1;
  char *pcVar2;
  long in_x0;
  undefined8 *in_x8;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  byte local_88 [8];
  ulong local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 009e9998 with catch @ 009eadc0 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(in_x0 + 0x118);
  if (lVar5 == *(long *)(in_x0 + 0x120)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
  else {
    lVar6 = 0;
    uVar7 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    do {
      FUN_008d57d4(local_88,lVar5 + lVar6,"; ");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009eaf5c with catch @ 009eae30
                       catch(type#1 @ 00000000) { ... } // from try @ 009eafe0 with catch @ 009eae30
                       catch(type#1 @ 00000000) { ... } // from try @ 009eaff0 with catch @ 009eae30
                        */
      uVar4 = (ulong)(local_88[0] >> 1);
      pcVar2 = (char *)((ulong)local_88 | 1);
      if ((local_88[0] & 1) != 0) {
        uVar4 = local_80;
        pcVar2 = local_78;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,pcVar2,uVar4);
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      lVar5 = *(long *)(in_x0 + 0x118);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x18;
      lVar3 = *(long *)(in_x0 + 0x120) - lVar5 >> 3;
      uVar4 = lVar3 * -0x5555555555555555;
    } while (uVar7 <= uVar4 && uVar4 - uVar7 != 0);
                    /* try { // try from 009eae84 to 00aeae87 has its CatchHandler @ 009eaf9c */
    lVar5 = lVar5 + lVar3 * 8;
    uVar7 = (ulong)(*(byte *)(lVar5 + -0x18) >> 1);
    pcVar2 = (char *)(lVar5 + -0x17);
    if ((*(byte *)(lVar5 + -0x18) & 1) != 0) {
      uVar7 = *(ulong *)(lVar5 + -0x10);
      pcVar2 = *(char **)(lVar5 + -8);
    }
                    /* try { // try from 009eaea0 to 00aeaea7 has its CatchHandler @ 009eafb8 */
                    /* try { // try from 009eaea8 to 00aeaeb7 has its CatchHandler @ 009eafa8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_70,pcVar2,uVar7);
    in_x8[2] = local_60;
    in_x8[1] = uStack_68;
    *in_x8 = local_70;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009eaee0 to 00aeaeeb has its CatchHandler @ 009eafbc */
                    /* try { // try from 009eaeec to 00aeaf0b has its CatchHandler @ 009eafa4 */
  return;
}

