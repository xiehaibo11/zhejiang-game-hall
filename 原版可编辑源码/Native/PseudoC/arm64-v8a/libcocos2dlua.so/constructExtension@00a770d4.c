
/* fairygui::GLabel::constructExtension(fairygui::ByteBuffer*) */

void fairygui::GLabel::constructExtension(ByteBuffer *param_1)

{
  long lVar1;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"title");
  uVar2 = GComponent::getChild((GComponent *)param_1,(basic_string *)local_40);
  *(undefined8 *)(param_1 + 0x280) = uVar2;
                    /* try { // try from 00a77114 to 00b7714f has its CatchHandler @ 00a77258 */
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"icon");
  uVar2 = GComponent::getChild((GComponent *)param_1,(basic_string *)local_40);
  *(undefined8 *)(param_1 + 0x288) = uVar2;
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
                    /* try { // try from 00a7715c to 00b771b7 has its CatchHandler @ 00a7725c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

