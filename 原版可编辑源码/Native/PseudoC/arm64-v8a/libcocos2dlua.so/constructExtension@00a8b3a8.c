
/* fairygui::GSlider::constructExtension(fairygui::ByteBuffer*) */

void __thiscall fairygui::GSlider::constructExtension(GSlider *this,ByteBuffer *param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  float fVar7;
  undefined **local_70;
  code *local_68;
  void *pvStack_60;
  GSlider *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cVar2 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x2a0) = (int)cVar2;
  bVar3 = ByteBuffer::readBool(param_1);
  this[0x2a4] = (GSlider)(bVar3 & 1);
  if (1 < *(int *)param_1) {
    bVar3 = ByteBuffer::readBool(param_1);
    this[0x2a5] = (GSlider)(bVar3 & 1);
    bVar3 = ByteBuffer::readBool(param_1);
    this[0x280] = (GSlider)(bVar3 & 1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"title");
  uVar4 = GComponent::getChild((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x2a8) = uVar4;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"bar");
  uVar4 = GComponent::getChild((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x2b0) = uVar4;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"bar_v");
  uVar4 = GComponent::getChild((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x2b8) = uVar4;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"grip");
  uVar4 = GComponent::getChild((GComponent *)this,(basic_string *)&local_70);
  *(undefined8 *)(this + 0x2d0) = uVar4;
  if (((byte)local_70._0_1_ & 1) != 0) {
    operator_delete(pvStack_60);
  }
  lVar5 = *(long *)(this + 0x2b0);
  if (lVar5 != 0) {
    fVar7 = *(float *)(lVar5 + 200);
    *(float *)(this + 0x2c0) = fVar7;
    *(float *)(this + 0x2c8) = *(float *)(this + 200) - fVar7;
    *(undefined4 *)(this + 0x2e4) = *(undefined4 *)(lVar5 + 0xc0);
  }
  lVar5 = *(long *)(this + 0x2b8);
  if (lVar5 != 0) {
    fVar7 = *(float *)(lVar5 + 0xcc);
    *(float *)(this + 0x2c4) = fVar7;
    *(float *)(this + 0x2cc) = *(float *)(this + 0xcc) - fVar7;
    *(undefined4 *)(this + 0x2e8) = *(undefined4 *)(lVar5 + 0xc4);
  }
  if (*(UIEventDispatcher **)(this + 0x2d0) != (UIEventDispatcher *)0x0) {
    local_70 = &PTR_FUN_016a6ab0;
    pvStack_60 = (void *)0x0;
    local_68 = onGripTouchBegin;
    local_58 = this;
    local_50 = (long *)&local_70;
    UIEventDispatcher::addEventListener
              (*(UIEventDispatcher **)(this + 0x2d0),10,(function *)&local_70,
               (EventTag *)&EventTag::None);
    if (&local_70 == (undefined ***)local_50) {
      pcVar6 = *(code **)(*local_50 + 0x20);
LAB_00a8b590:
      (*pcVar6)();
    }
    else if (local_50 != (long *)0x0) {
      pcVar6 = *(code **)(*local_50 + 0x28);
      goto LAB_00a8b590;
    }
    local_70 = &PTR_FUN_016a6ab0;
    pvStack_60 = (void *)0x0;
    local_68 = onGripTouchMove;
    local_58 = this;
    local_50 = (long *)&local_70;
    UIEventDispatcher::addEventListener
              (*(UIEventDispatcher **)(this + 0x2d0),0xb,(function *)&local_70,
               (EventTag *)&EventTag::None);
    if (&local_70 == (undefined ***)local_50) {
      pcVar6 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_00a8b5f8;
      pcVar6 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar6)();
  }
LAB_00a8b5f8:
  local_70 = &PTR_FUN_016a6ab0;
  pvStack_60 = (void *)0x0;
  local_68 = onTouchBegin;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,10,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00a8b65c;
    pcVar6 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar6)();
LAB_00a8b65c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

