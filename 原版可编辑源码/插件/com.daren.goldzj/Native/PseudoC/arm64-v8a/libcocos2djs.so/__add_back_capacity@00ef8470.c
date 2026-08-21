
/* std::__ndk1::deque<v8::internal::OptimizedCompilationJob*,
   std::__ndk1::allocator<v8::internal::OptimizedCompilationJob*> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::OptimizedCompilationJob*,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob*>>
::__add_back_capacity
          (deque<v8::internal::OptimizedCompilationJob*,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob*>>
           *this)

{
  OptimizedCompilationJob **ppOVar1;
  ulong uVar2;
  OptimizedCompilationJob ***pppOVar3;
  undefined8 uVar4;
  long lVar5;
  OptimizedCompilationJob ***pppOVar6;
  ulong uVar7;
  OptimizedCompilationJob **local_60;
  OptimizedCompilationJob **ppOStack_58;
  OptimizedCompilationJob **local_50;
  OptimizedCompilationJob **ppOStack_48;
  deque<v8::internal::OptimizedCompilationJob*,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob*>>
  *pdStack_40;
  OptimizedCompilationJob **local_18;
  
  if (*(ulong *)(this + 0x20) < 0x200) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      pdStack_40 = this + 0x18;
      ppOStack_48 = (OptimizedCompilationJob **)0x0;
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = operator_new(uVar2 * 8);
      ppOStack_58 = local_60 + uVar7;
      ppOStack_48 = local_60 + uVar2;
      local_50 = ppOStack_58;
      local_18 = operator_new(0x1000);
      __split_buffer<v8::internal::OptimizedCompilationJob**,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob**>&>
      ::push_back((__split_buffer<v8::internal::OptimizedCompilationJob**,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob**>&>
                   *)&local_60,&local_18);
      pppOVar3 = *(OptimizedCompilationJob ****)(this + 8);
      pppOVar6 = *(OptimizedCompilationJob ****)(this + 0x10);
      if (pppOVar6 != pppOVar3) {
        do {
          pppOVar6 = pppOVar6 + -1;
          __split_buffer<v8::internal::OptimizedCompilationJob**,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob**>&>
          ::push_front((__split_buffer<v8::internal::OptimizedCompilationJob**,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob**>&>
                        *)&local_60,pppOVar6);
          pppOVar3 = *(OptimizedCompilationJob ****)(this + 8);
        } while (pppOVar6 != pppOVar3);
        pppOVar6 = *(OptimizedCompilationJob ****)(this + 0x10);
      }
      ppOVar1 = *(OptimizedCompilationJob ***)this;
      *(OptimizedCompilationJob ***)(this + 8) = ppOStack_58;
      *(OptimizedCompilationJob ***)this = local_60;
      uVar4 = *(undefined8 *)(this + 0x18);
      *(OptimizedCompilationJob ***)(this + 0x18) = ppOStack_48;
      *(OptimizedCompilationJob ***)(this + 0x10) = local_50;
      local_50 = (OptimizedCompilationJob **)pppOVar6;
      if (pppOVar3 != pppOVar6) {
        local_50 = (OptimizedCompilationJob **)
                   (pppOVar6 +
                   ((ulong)((long)pppOVar6 + (-8 - (long)pppOVar3)) >> 3 ^ 0xffffffffffffffff));
      }
      if (ppOVar1 == (OptimizedCompilationJob **)0x0) {
        return;
      }
      local_60 = ppOVar1;
      ppOStack_58 = (OptimizedCompilationJob **)pppOVar3;
      ppOStack_48 = (OptimizedCompilationJob **)uVar4;
      operator_delete(ppOVar1);
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<v8::internal::OptimizedCompilationJob**,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob**>>
      ::push_back((__split_buffer<v8::internal::OptimizedCompilationJob**,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob**>>
                   *)this,&local_60);
      return;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<v8::internal::OptimizedCompilationJob**,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob**>>
    ::push_front((__split_buffer<v8::internal::OptimizedCompilationJob**,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob**>>
                  *)this,&local_60);
    local_60 = (OptimizedCompilationJob **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
    local_60 = (OptimizedCompilationJob **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00ef8600(this,&local_60);
  return;
}

