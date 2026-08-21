
/* std::__ndk1::deque<cocostudio::FrameEvent*, std::__ndk1::allocator<cocostudio::FrameEvent*>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::deque<cocostudio::FrameEvent*,std::__ndk1::allocator<cocostudio::FrameEvent*>>::
__add_back_capacity(deque<cocostudio::FrameEvent*,std::__ndk1::allocator<cocostudio::FrameEvent*>>
                    *this)

{
  long lVar1;
  FrameEvent **ppFVar2;
  ulong uVar3;
  FrameEvent ***pppFVar4;
  long lVar5;
  FrameEvent ***pppFVar6;
  ulong uVar7;
  FrameEvent ***pppFVar8;
  undefined8 uVar9;
  FrameEvent **local_68;
  FrameEvent **local_60;
  FrameEvent **ppFStack_58;
  FrameEvent **local_50;
  FrameEvent **ppFStack_48;
  deque<cocostudio::FrameEvent*,std::__ndk1::allocator<cocostudio::FrameEvent*>> *pdStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x200) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar3 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar3 = 1;
      }
      pdStack_40 = this + 0x18;
      ppFStack_48 = (FrameEvent **)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      ppFStack_58 = local_60 + uVar7;
      ppFStack_48 = local_60 + uVar3;
      local_50 = ppFStack_58;
      local_68 = operator_new(0x1000);
      __split_buffer<cocostudio::FrameEvent**,std::__ndk1::allocator<cocostudio::FrameEvent**>&>::
      push_back((__split_buffer<cocostudio::FrameEvent**,std::__ndk1::allocator<cocostudio::FrameEvent**>&>
                 *)&local_60,&local_68);
      pppFVar6 = *(FrameEvent ****)(this + 0x10);
      while (pppFVar4 = *(FrameEvent ****)(this + 8), pppFVar6 != pppFVar4) {
        pppFVar6 = pppFVar6 + -1;
        __split_buffer<cocostudio::FrameEvent**,std::__ndk1::allocator<cocostudio::FrameEvent**>&>::
        push_front((__split_buffer<cocostudio::FrameEvent**,std::__ndk1::allocator<cocostudio::FrameEvent**>&>
                    *)&local_60,pppFVar6);
      }
      ppFVar2 = *(FrameEvent ***)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      pppFVar8 = *(FrameEvent ****)(this + 0x10);
      *(FrameEvent ***)(this + 8) = ppFStack_58;
      *(FrameEvent ***)this = local_60;
      *(FrameEvent ***)(this + 0x18) = ppFStack_48;
      *(FrameEvent ***)(this + 0x10) = local_50;
      local_50 = (FrameEvent **)pppFVar8;
      if (pppFVar8 != pppFVar6) {
        local_50 = (FrameEvent **)
                   (pppFVar8 +
                   ((ulong)((long)pppFVar8 + (-8 - (long)pppFVar4)) >> 3 ^ 0xffffffffffffffff));
      }
      local_60 = ppFVar2;
      ppFStack_58 = (FrameEvent **)pppFVar4;
      ppFStack_48 = (FrameEvent **)uVar9;
      if (ppFVar2 != (FrameEvent **)0x0) {
        operator_delete(ppFVar2);
      }
      goto LAB_00c3c8a8;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<cocostudio::FrameEvent**,std::__ndk1::allocator<cocostudio::FrameEvent**>>::
      push_back((__split_buffer<cocostudio::FrameEvent**,std::__ndk1::allocator<cocostudio::FrameEvent**>>
                 *)this,&local_60);
      goto LAB_00c3c8a8;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<cocostudio::FrameEvent**,std::__ndk1::allocator<cocostudio::FrameEvent**>>::
    push_front((__split_buffer<cocostudio::FrameEvent**,std::__ndk1::allocator<cocostudio::FrameEvent**>>
                *)this,&local_60);
    local_60 = (FrameEvent **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
    local_60 = (FrameEvent **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00c3ca6c(this,&local_60);
LAB_00c3c8a8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

