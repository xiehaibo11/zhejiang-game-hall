
/* cocos2d::MenuItemImage::init() */

undefined8 __thiscall cocos2d::MenuItemImage::init(MenuItemImage *this)

{
  long lVar1;
  code *pcVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,"");
  local_50 = (long *)0x0;
                    /* catch() { ... } // from try @ 00f1f560 with catch @ 00f1f9ac */
  initWithNormalImage(this,(basic_string *)local_88,(basic_string *)local_a0,
                      (basic_string *)local_b8,(function *)alStack_70);
  if (alStack_70 == local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f1f9e0;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00f1f9e0:
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
                    /* catch() { ... } // from try @ 00f1f558 with catch @ 00f1fa34 */
  if (((byte)local_a0[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00f1f488 with catch @ 00f1fa38 */
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

