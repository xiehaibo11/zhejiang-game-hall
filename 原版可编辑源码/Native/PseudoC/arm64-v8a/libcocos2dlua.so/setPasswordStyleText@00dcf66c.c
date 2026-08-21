
/* cocos2d::ui::TextField::setPasswordStyleText(char const*) */

void __thiscall cocos2d::ui::TextField::setPasswordStyleText(TextField *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00dcf6a4 with catch @ 00dcf678 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x4f0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,param_1);
                    /* try { // try from 00dcf69c to 00ecf6a3 has its CatchHandler @ 00dcf6e8 */
                    /* try { // try from 00dcf6a4 to 00ecf703 has its CatchHandler @ 00dcf678 */
  (**(code **)(*plVar2 + 0x658))(plVar2,local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  (**(code **)(**(long **)(this + 0x4f0) + 0x590))();
  setString((basic_string *)this);
                    /* catch() { ... } // from try @ 00dcf69c with catch @ 00dcf6e8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

