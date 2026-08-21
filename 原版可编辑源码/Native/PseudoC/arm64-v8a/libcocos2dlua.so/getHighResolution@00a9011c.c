
/* fairygui::PackageItem::getHighResolution() */

PackageItem * __thiscall fairygui::PackageItem::getHighResolution(PackageItem *this)

{
  ulong uVar1;
  long lVar2;
  PackageItem *unaff_x20;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(long **)(this + 0x98) != (long *)0x0) && (0 < GRoot::contentScaleLevel)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_50,(basic_string *)
                          (**(long **)(this + 0x98) + (long)(GRoot::contentScaleLevel + -1) * 0x18))
    ;
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
    if (uVar1 != 0) goto LAB_00a901b8;
  }
  unaff_x20 = this;
LAB_00a901b8:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x20;
}

