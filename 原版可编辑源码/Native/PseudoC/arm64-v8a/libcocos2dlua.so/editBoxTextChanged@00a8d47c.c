
/* fairygui::GTextInput::editBoxTextChanged(cocos2d::ui::EditBox*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void fairygui::GTextInput::editBoxTextChanged(EditBox *param_1,basic_string *param_2)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  byte local_50 [8];
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a8d4a4 to 00b8d4b7 has its CatchHandler @ 00a8d534 */
  if (((byte)param_1[0x1d8] & 1) == 0) {
    *(undefined2 *)(param_1 + 0x1d8) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x1e8) = 0;
                    /* try { // try from 00a8d4b8 to 00b8d58b has its CatchHandler @ 00a8d3e4 */
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  FUIInput::getText();
  uVar1 = (ulong)(local_50[0] >> 1);
  pcVar3 = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
    pcVar3 = local_40;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (param_1 + 0x1d8),pcVar3,uVar1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

