
/* fairygui::PackageItem::getBranch() */

PackageItem * __thiscall fairygui::PackageItem::getBranch(PackageItem *this)

{
  ulong uVar1;
  long lVar2;
  PackageItem *unaff_x20;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 00a9002c to 00b9008b has its CatchHandler @ 00a8ff2c */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(long **)(this + 0x90) != (long *)0x0) && (*(int *)(*(long *)(this + 0x28) + 0x160) != -1))
  {
                    /* catch() { ... } // from try @ 00a8ffc8 with catch @ 00a9006c */
                    /* catch() { ... } // from try @ 00a8ff7c with catch @ 00a90070
                       catch() { ... } // from try @ 00a90018 with catch @ 00a90070 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_50,(basic_string *)
                          (**(long **)(this + 0x90) +
                          (long)*(int *)(*(long *)(this + 0x28) + 0x160) * 0x18));
    uVar1 = (ulong)((byte)local_50[0] >> 1);
    if (((byte)local_50[0] & 1) != 0) {
      uVar1 = local_48;
    }
    if (uVar1 != 0) {
      unaff_x20 = (PackageItem *)
                  UIPackage::getItem(*(UIPackage **)(this + 0x28),(basic_string *)local_50);
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (uVar1 != 0) goto LAB_00a900c4;
  }
  unaff_x20 = this;
LAB_00a900c4:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x20;
}

