
/* fairygui::GButton::constructExtension(fairygui::ByteBuffer*) */

void __thiscall fairygui::GButton::constructExtension(GButton *this,ByteBuffer *param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined **local_70;
  code *local_68;
  void *pvStack_60;
  GButton *local_58;
  long *local_50;
  long local_38;
  
                    /* try { // try from 00a6d508 to 00b6d563 has its CatchHandler @ 00a6d43c */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  ByteBuffer::seek(param_1,0,6);
  cVar4 = ByteBuffer::readByte(param_1);
                    /* catch() { ... } // from try @ 00a6d48c with catch @ 00a6d548
                       catch() { ... } // from try @ 00a6d4f4 with catch @ 00a6d548 */
  *(int *)(this + 0x280) = (int)cVar4;
  ByteBuffer::readS(param_1,(basic_string *)(this + 800));
  uVar8 = ByteBuffer::readFloat(param_1);
  *(undefined4 *)(this + 0x338) = uVar8;
  cVar4 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x340) = (int)cVar4;
  uVar8 = ByteBuffer::readFloat(param_1);
  *(undefined4 *)(this + 0x348) = uVar8;
  if (*(int *)(this + 0x340) == 2) {
    GObject::setPivot((GObject *)this,0.5,0.5,(bool)this[0xe8]);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"button");
  uVar5 = GComponent::getController((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x298) = uVar5;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"title");
  uVar5 = GComponent::getChild((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x288) = uVar5;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"icon");
  uVar5 = GComponent::getChild((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x290) = uVar5;
  if (((byte)local_70._0_1_ & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if (*(long **)(this + 0x288) != (long *)0x0) {
    pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (**(code **)(**(long **)(this + 0x288) + 0x10))();
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x2c0) != pbVar6) {
      uVar1 = *(ulong *)(pbVar6 + 8);
      pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar6 + 0x10);
      if (((byte)*pbVar6 & 1) == 0) {
        pbVar2 = pbVar6 + 1;
        uVar1 = (ulong)((byte)*pbVar6 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x2c0),(char *)pbVar2,uVar1);
    }
  }
  if (*(long **)(this + 0x290) != (long *)0x0) {
    pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (**(code **)(**(long **)(this + 0x290) + 0x20))();
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x2f0) != pbVar6) {
      uVar1 = *(ulong *)(pbVar6 + 8);
      pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar6 + 0x10);
      if (((byte)*pbVar6 & 1) == 0) {
        pbVar2 = pbVar6 + 1;
        uVar1 = (ulong)((byte)*pbVar6 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x2f0),(char *)pbVar2,uVar1);
    }
  }
  if (*(int *)(this + 0x280) == 0) {
    setState(this,(basic_string *)UP);
  }
  local_70 = &PTR_FUN_016a4f48;
  pvStack_60 = (void *)0x0;
  local_68 = onRollOver;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0xe,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar7 = *(code **)(*local_50 + 0x20);
LAB_00a6d728:
    (*pcVar7)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar7 = *(code **)(*local_50 + 0x28);
    goto LAB_00a6d728;
  }
  local_70 = &PTR_FUN_016a4f48;
  pvStack_60 = (void *)0x0;
  local_68 = onRollOut;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0xf,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar7 = *(code **)(*local_50 + 0x20);
LAB_00a6d78c:
    (*pcVar7)();
  }
  else if (local_50 != (long *)0x0) {
                    /* try { // try from 00a6d778 to 00b6d7db has its CatchHandler @ 00a6d778
                       catch() { ... } // from try @ 00a6d778 with catch @ 00a6d778
                       catch() { ... } // from try @ 00a6d9b8 with catch @ 00a6d778
                       catch() { ... } // from try @ 00a6da84 with catch @ 00a6d778 */
    pcVar7 = *(code **)(*local_50 + 0x28);
    goto LAB_00a6d78c;
  }
  local_70 = &PTR_FUN_016a4f48;
  pvStack_60 = (void *)0x0;
  local_68 = onTouchBegin;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,10,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar7 = *(code **)(*local_50 + 0x20);
LAB_00a6d7f0:
    (*pcVar7)();
  }
  else if (local_50 != (long *)0x0) {
                    /* try { // try from 00a6d7dc to 00b6d80f has its CatchHandler @ 00a6dab0 */
    pcVar7 = *(code **)(*local_50 + 0x28);
    goto LAB_00a6d7f0;
  }
  local_70 = &PTR_FUN_016a4f48;
  pvStack_60 = (void *)0x0;
  local_68 = onTouchEnd;
  local_58 = this;
  local_50 = (long *)&local_70;
                    /* try { // try from 00a6d818 to 00b6d827 has its CatchHandler @ 00a6daac */
                    /* try { // try from 00a6d828 to 00b6d83f has its CatchHandler @ 00a6daa8 */
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0xc,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar7 = *(code **)(*local_50 + 0x20);
LAB_00a6d854:
                    /* try { // try from 00a6d854 to 00b6d85f has its CatchHandler @ 00a6dab0 */
    (*pcVar7)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar7 = *(code **)(*local_50 + 0x28);
    goto LAB_00a6d854;
  }
  local_70 = &PTR_FUN_016a4f48;
  pvStack_60 = (void *)0x0;
  local_68 = onClick;
  local_58 = this;
  local_50 = (long *)&local_70;
                    /* try { // try from 00a6d878 to 00b6d8fb has its CatchHandler @ 00a6dac0 */
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0xd,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar7 = *(code **)(*local_50 + 0x20);
LAB_00a6d8b8:
    (*pcVar7)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar7 = *(code **)(*local_50 + 0x28);
    goto LAB_00a6d8b8;
  }
  local_70 = &PTR_FUN_016a4f48;
  pvStack_60 = (void *)0x0;
  local_68 = onExit;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,1,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
                    /* try { // try from 00a6d914 to 00b6d9b7 has its CatchHandler @ 00a6dac4 */
    pcVar7 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00a6d920;
    pcVar7 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar7)();
LAB_00a6d920:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

