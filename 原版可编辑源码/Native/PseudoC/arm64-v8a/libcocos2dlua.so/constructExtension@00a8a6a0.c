
/* fairygui::GScrollBar::constructExtension(fairygui::ByteBuffer*) */

void __thiscall fairygui::GScrollBar::constructExtension(GScrollBar *this,ByteBuffer *param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined **local_70;
  code *local_68;
  void *pvStack_60;
  GScrollBar *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a8a6bc to 00b8a6bf has its CatchHandler @ 00a8a6f4 */
                    /* try { // try from 00a8a6c0 to 00b8a707 has its CatchHandler @ 00a8a670 */
  ByteBuffer::seek(param_1,0,6);
  bVar2 = ByteBuffer::readBool(param_1);
  this[0x2b8] = (GScrollBar)(bVar2 & 1);
                    /* catch() { ... } // from try @ 00a8a6bc with catch @ 00a8a6f4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"grip");
  uVar3 = GComponent::getChild((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x288) = uVar3;
                    /* try { // try from 00a8a708 to 00b8a72f has its CatchHandler @ 00a8a708
                       catch() { ... } // from try @ 00a8a708 with catch @ 00a8a708
                       catch() { ... } // from try @ 00a8a758 with catch @ 00a8a708 */
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"bar");
                    /* try { // try from 00a8a730 to 00b8a733 has its CatchHandler @ 00a8a78c */
  uVar3 = GComponent::getChild((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x2a0) = uVar3;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
                    /* try { // try from 00a8a754 to 00b8a757 has its CatchHandler @ 00a8a774 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"arrow1");
                    /* try { // try from 00a8a758 to 00b8a79f has its CatchHandler @ 00a8a708 */
  uVar3 = GComponent::getChild((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x290) = uVar3;
  if (((ulong)local_70 & 1) != 0) {
                    /* catch() { ... } // from try @ 00a8a754 with catch @ 00a8a774 */
    operator_delete(pvStack_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"arrow2");
                    /* catch() { ... } // from try @ 00a8a730 with catch @ 00a8a78c */
  uVar3 = GComponent::getChild((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x298) = uVar3;
  if (((byte)local_70._0_1_ & 1) != 0) {
                    /* try { // try from 00a8a7a0 to 00b8a8b3 has its CatchHandler @ 00a8a7a0
                       catch() { ... } // from try @ 00a8a7a0 with catch @ 00a8a7a0
                       catch() { ... } // from try @ 00a8a934 with catch @ 00a8a7a0 */
    operator_delete(pvStack_60);
  }
  local_70 = &PTR_FUN_016a68e8;
  pvStack_60 = (void *)0x0;
  local_68 = onGripTouchBegin;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            (*(UIEventDispatcher **)(this + 0x288),10,(function *)&local_70,
             (EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00a8a810:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00a8a810;
  }
  local_70 = &PTR_FUN_016a68e8;
  pvStack_60 = (void *)0x0;
  local_68 = onGripTouchMove;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            (*(UIEventDispatcher **)(this + 0x288),0xb,(function *)&local_70,
             (EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00a8a874:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00a8a874;
  }
  local_70 = &PTR_FUN_016a68e8;
  pvStack_60 = (void *)0x0;
  local_68 = onGripTouchEnd;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            (*(UIEventDispatcher **)(this + 0x288),0xc,(function *)&local_70,
             (EventTag *)&EventTag::None);
                    /* try { // try from 00a8a8b4 to 00b8a8e7 has its CatchHandler @ 00a8a9b4 */
  if (&local_70 == (undefined ***)local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00a8a8d8:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00a8a8d8;
  }
                    /* try { // try from 00a8a8e8 to 00b8a8fb has its CatchHandler @ 00a8a980 */
  local_70 = &PTR_FUN_016a68e8;
  pvStack_60 = (void *)0x0;
  local_68 = onTouchBegin;
  local_58 = this;
  local_50 = (long *)&local_70;
                    /* try { // try from 00a8a900 to 00b8a933 has its CatchHandler @ 00a8a984 */
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,10,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
                    /* try { // try from 00a8a934 to 00b8a9cf has its CatchHandler @ 00a8a7a0 */
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00a8a93c:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00a8a93c;
  }
  if (*(UIEventDispatcher **)(this + 0x290) != (UIEventDispatcher *)0x0) {
    local_70 = &PTR_FUN_016a68e8;
    pvStack_60 = (void *)0x0;
    local_68 = onArrowButton1Click;
    local_58 = this;
    local_50 = (long *)&local_70;
    UIEventDispatcher::addEventListener
              (*(UIEventDispatcher **)(this + 0x290),10,(function *)&local_70,
               (EventTag *)&EventTag::None);
                    /* catch() { ... } // from try @ 00a8a8e8 with catch @ 00a8a980 */
                    /* catch() { ... } // from try @ 00a8a900 with catch @ 00a8a984 */
    if (&local_70 == (undefined ***)local_50) {
      pcVar4 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_00a8a9a8;
      pcVar4 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar4)();
  }
LAB_00a8a9a8:
  if (*(UIEventDispatcher **)(this + 0x298) != (UIEventDispatcher *)0x0) {
                    /* catch() { ... } // from try @ 00a8a8b4 with catch @ 00a8a9b4 */
    local_70 = &PTR_FUN_016a68e8;
    pvStack_60 = (void *)0x0;
    local_68 = onArrowButton2Click;
    local_58 = this;
    local_50 = (long *)&local_70;
    UIEventDispatcher::addEventListener
              (*(UIEventDispatcher **)(this + 0x298),10,(function *)&local_70,
               (EventTag *)&EventTag::None);
    if (&local_70 == (undefined ***)local_50) {
      pcVar4 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_00a8aa10;
      pcVar4 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar4)();
  }
LAB_00a8aa10:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

