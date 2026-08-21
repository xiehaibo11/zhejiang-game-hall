
/* universe::FileSystemAndroid::removeDirectory(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

uint universe::FileSystemAndroid::removeDirectory(basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  char *pcVar5;
  byte *in_x1;
  basic_string *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  undefined8 local_50;
  char *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009fba14 to 00afbc63 has its CatchHandler @ 009fb3bc */
  uVar1 = (ulong)(*in_x1 >> 1);
  if ((*in_x1 & 1) != 0) {
    uVar1 = *(ulong *)(in_x1 + 8);
  }
  if (uVar1 == 0) {
    pcVar5 = (char *)Translated::getInstance();
                    /* catch() { ... } // from try @ 009fb5c0 with catch @ 009fbb34 */
    Translated::log(pcVar5,"Fail to remove directory, path is empty!");
    uVar3 = 0;
  }
  else {
    CustomFileManager::getAbsolutePath(param_1);
    local_50 = 0;
    local_48 = (char *)0x0;
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xc;
    local_53 = 0x2072;
    local_57 = 0x2d206d72;
    local_51 = 0;
    std::__ndk1::operator+((__ndk1 *)&DAT_01a61e87,(char *)local_40,in_x2);
    puVar4 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_88,"\"",1);
    local_60 = (char *)puVar4[2];
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
                    /* catch() { ... } // from try @ 009fb9dc with catch @ 009fba9c */
    *puVar4 = 0;
                    /* catch() { ... } // from try @ 009fb978 with catch @ 009fbaa0 */
                    /* catch() { ... } // from try @ 009fb95c with catch @ 009fbaa4 */
                    /* catch() { ... } // from try @ 009fb94c with catch @ 009fbaa8 */
                    /* catch() { ... } // from try @ 009fb930 with catch @ 009fbaac */
    uVar1 = local_70 >> 1 & 0x7f;
    pcVar5 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar1 = uStack_68;
      pcVar5 = local_60;
    }
                    /* catch() { ... } // from try @ 009fb8d0 with catch @ 009fbab4 */
                    /* catch() { ... } // from try @ 009fb8b4 with catch @ 009fbab8 */
                    /* catch() { ... } // from try @ 009fb8a4 with catch @ 009fbabc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(&local_58,pcVar5,uVar1);
                    /* catch() { ... } // from try @ 009fb888 with catch @ 009fbac0 */
                    /* catch() { ... } // from try @ 009fb828 with catch @ 009fbac8 */
    if ((local_70 & 1) != 0) {
                    /* catch() { ... } // from try @ 009fb80c with catch @ 009fbacc */
                    /* catch() { ... } // from try @ 009fb7fc with catch @ 009fbad0 */
      operator_delete(local_60);
    }
                    /* catch() { ... } // from try @ 009fb7e0 with catch @ 009fbad4 */
                    /* catch() { ... } // from try @ 009fb780 with catch @ 009fbadc */
    if (((byte)local_88[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 009fb764 with catch @ 009fbae0 */
                    /* catch() { ... } // from try @ 009fb754 with catch @ 009fbae4 */
      operator_delete(local_78);
    }
                    /* catch() { ... } // from try @ 009fb738 with catch @ 009fbae8 */
                    /* catch() { ... } // from try @ 009fb6c8 with catch @ 009fbaf0 */
    pcVar5 = (char *)((ulong)&local_58 | 1);
                    /* catch() { ... } // from try @ 009fb6b8 with catch @ 009fbaf4 */
    if (((byte)local_58 & 1) != 0) {
      pcVar5 = local_48;
    }
                    /* catch() { ... } // from try @ 009fb698 with catch @ 009fbaf8 */
    uVar3 = system(pcVar5);
                    /* catch() { ... } // from try @ 009fb688 with catch @ 009fbafc */
                    /* catch() { ... } // from try @ 009fb678 with catch @ 009fbb00 */
                    /* catch() { ... } // from try @ 009fb65c with catch @ 009fbb04 */
    if (((byte)local_58 & 1) != 0) {
                    /* catch() { ... } // from try @ 009fb64c with catch @ 009fbb0c */
      operator_delete(local_48);
    }
                    /* catch() { ... } // from try @ 009fb5ec with catch @ 009fbb14 */
    uVar3 = uVar3 >> 0x1f ^ 1;
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
                    /* catch() { ... } // from try @ 009fb5d0 with catch @ 009fbb24 */
    }
  }
                    /* catch() { ... } // from try @ 009fb5a4 with catch @ 009fbb40 */
                    /* catch() { ... } // from try @ 009fb534 with catch @ 009fbb48 */
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 009fb524 with catch @ 009fbb58 */
  return uVar3;
}

