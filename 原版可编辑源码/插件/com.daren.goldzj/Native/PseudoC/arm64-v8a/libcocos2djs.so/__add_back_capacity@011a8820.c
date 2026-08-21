
/* std::__ndk1::deque<v8::internal::HeapGraphEdge,
   std::__ndk1::allocator<v8::internal::HeapGraphEdge> >::__add_back_capacity() */

void __thiscall
std::__ndk1::deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
::__add_back_capacity
          (deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
           *this)

{
  HeapGraphEdge *pHVar1;
  ulong uVar2;
  HeapGraphEdge **ppHVar3;
  undefined8 uVar4;
  long lVar5;
  HeapGraphEdge **ppHVar6;
  ulong uVar7;
  HeapGraphEdge *local_60;
  HeapGraphEdge *pHStack_58;
  HeapGraphEdge *local_50;
  HeapGraphEdge *pHStack_48;
  deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>> *pdStack_40
  ;
  HeapGraphEdge *local_18;
  
  if (*(ulong *)(this + 0x20) < 0xaa) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      pdStack_40 = this + 0x18;
      pHStack_48 = (HeapGraphEdge *)0x0;
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = operator_new(uVar2 * 8);
      pHStack_58 = local_60 + uVar7 * 8;
      pHStack_48 = local_60 + uVar2 * 8;
      local_50 = pHStack_58;
      local_18 = operator_new(0xff0);
      __split_buffer<v8::internal::HeapGraphEdge*,std::__ndk1::allocator<v8::internal::HeapGraphEdge*>&>
      ::push_back((__split_buffer<v8::internal::HeapGraphEdge*,std::__ndk1::allocator<v8::internal::HeapGraphEdge*>&>
                   *)&local_60,&local_18);
      ppHVar3 = *(HeapGraphEdge ***)(this + 8);
      ppHVar6 = *(HeapGraphEdge ***)(this + 0x10);
      if (ppHVar6 != ppHVar3) {
        do {
          ppHVar6 = ppHVar6 + -1;
          __split_buffer<v8::internal::HeapGraphEdge*,std::__ndk1::allocator<v8::internal::HeapGraphEdge*>&>
          ::push_front((__split_buffer<v8::internal::HeapGraphEdge*,std::__ndk1::allocator<v8::internal::HeapGraphEdge*>&>
                        *)&local_60,ppHVar6);
          ppHVar3 = *(HeapGraphEdge ***)(this + 8);
        } while (ppHVar6 != ppHVar3);
        ppHVar6 = *(HeapGraphEdge ***)(this + 0x10);
      }
      pHVar1 = *(HeapGraphEdge **)this;
      *(HeapGraphEdge **)(this + 8) = pHStack_58;
      *(HeapGraphEdge **)this = local_60;
      uVar4 = *(undefined8 *)(this + 0x18);
      *(HeapGraphEdge **)(this + 0x18) = pHStack_48;
      *(HeapGraphEdge **)(this + 0x10) = local_50;
      local_50 = (HeapGraphEdge *)ppHVar6;
      if (ppHVar3 != ppHVar6) {
        local_50 = (HeapGraphEdge *)
                   (ppHVar6 +
                   ((ulong)((long)ppHVar6 + (-8 - (long)ppHVar3)) >> 3 ^ 0xffffffffffffffff));
      }
      if (pHVar1 == (HeapGraphEdge *)0x0) {
        return;
      }
      local_60 = pHVar1;
      pHStack_58 = (HeapGraphEdge *)ppHVar3;
      pHStack_48 = (HeapGraphEdge *)uVar4;
      operator_delete(pHVar1);
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0xff0);
      __split_buffer<v8::internal::HeapGraphEdge*,std::__ndk1::allocator<v8::internal::HeapGraphEdge*>>
      ::push_back((__split_buffer<v8::internal::HeapGraphEdge*,std::__ndk1::allocator<v8::internal::HeapGraphEdge*>>
                   *)this,&local_60);
      return;
    }
    local_60 = operator_new(0xff0);
    __split_buffer<v8::internal::HeapGraphEdge*,std::__ndk1::allocator<v8::internal::HeapGraphEdge*>>
    ::push_front((__split_buffer<v8::internal::HeapGraphEdge*,std::__ndk1::allocator<v8::internal::HeapGraphEdge*>>
                  *)this,&local_60);
    local_60 = (HeapGraphEdge *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0xaa;
    local_60 = (HeapGraphEdge *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_011a89b0(this,&local_60);
  return;
}

