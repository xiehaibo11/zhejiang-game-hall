
/* std::__ndk1::deque<std::__ndk1::unique_ptr<v8::IdleTask,
   std::__ndk1::default_delete<v8::IdleTask> >,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,
   std::__ndk1::default_delete<v8::IdleTask> > > >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>>>
::__add_back_capacity
          (deque<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>>>
           *this)

{
  unique_ptr *puVar1;
  ulong uVar2;
  unique_ptr **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  unique_ptr **ppuVar6;
  ulong uVar7;
  unique_ptr *local_60;
  unique_ptr **ppuStack_58;
  unique_ptr **local_50;
  unique_ptr *puStack_48;
  deque<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>>>
  *pdStack_40;
  unique_ptr *local_18;
  
  if (*(ulong *)(this + 0x20) < 0x200) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      pdStack_40 = this + 0x18;
      puStack_48 = (unique_ptr *)0x0;
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = operator_new(uVar2 * 8);
      ppuStack_58 = (unique_ptr **)(local_60 + uVar7 * 8);
      puStack_48 = local_60 + uVar2 * 8;
      local_50 = ppuStack_58;
      local_18 = operator_new(0x1000);
      __split_buffer<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*>&>
      ::push_back((__split_buffer<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*>&>
                   *)&local_60,&local_18);
      ppuVar3 = *(unique_ptr ***)(this + 8);
      ppuVar6 = *(unique_ptr ***)(this + 0x10);
      if (ppuVar6 != ppuVar3) {
        do {
          ppuVar6 = ppuVar6 + -1;
          __split_buffer<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*>&>
          ::push_front((__split_buffer<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*>&>
                        *)&local_60,ppuVar6);
          ppuVar3 = *(unique_ptr ***)(this + 8);
        } while (ppuVar6 != ppuVar3);
        ppuVar6 = *(unique_ptr ***)(this + 0x10);
      }
      puVar1 = *(unique_ptr **)this;
      *(unique_ptr ***)(this + 8) = ppuStack_58;
      *(unique_ptr **)this = local_60;
      uVar4 = *(undefined8 *)(this + 0x18);
      *(unique_ptr **)(this + 0x18) = puStack_48;
      *(unique_ptr ***)(this + 0x10) = local_50;
      local_50 = ppuVar6;
      if (ppuVar3 != ppuVar6) {
        local_50 = ppuVar6 + ((ulong)((long)ppuVar6 + (-8 - (long)ppuVar3)) >> 3 ^
                             0xffffffffffffffff);
      }
      if (puVar1 == (unique_ptr *)0x0) {
        return;
      }
      local_60 = puVar1;
      ppuStack_58 = ppuVar3;
      puStack_48 = (unique_ptr *)uVar4;
      operator_delete(puVar1);
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*>>
      ::push_back((__split_buffer<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*>>
                   *)this,&local_60);
      return;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*>>
    ::push_front((__split_buffer<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>*>>
                  *)this,&local_60);
    local_60 = (unique_ptr *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
    local_60 = (unique_ptr *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_0147950c(this,&local_60);
  return;
}

