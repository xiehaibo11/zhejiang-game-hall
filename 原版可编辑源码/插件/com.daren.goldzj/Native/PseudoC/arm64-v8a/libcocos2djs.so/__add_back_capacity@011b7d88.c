
/* std::__ndk1::deque<v8::AllocationProfile::Node,
   std::__ndk1::allocator<v8::AllocationProfile::Node> >::__add_back_capacity() */

void __thiscall
std::__ndk1::deque<v8::AllocationProfile::Node,std::__ndk1::allocator<v8::AllocationProfile::Node>>
::__add_back_capacity
          (deque<v8::AllocationProfile::Node,std::__ndk1::allocator<v8::AllocationProfile::Node>>
           *this)

{
  Node *pNVar1;
  ulong uVar2;
  Node **ppNVar3;
  undefined8 uVar4;
  long lVar5;
  Node **ppNVar6;
  ulong uVar7;
  Node *local_60;
  Node *pNStack_58;
  Node *local_50;
  Node *pNStack_48;
  deque<v8::AllocationProfile::Node,std::__ndk1::allocator<v8::AllocationProfile::Node>> *pdStack_40
  ;
  Node *local_18;
  
  if (*(ulong *)(this + 0x20) < 0x2e) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      pdStack_40 = this + 0x18;
      pNStack_48 = (Node *)0x0;
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = operator_new(uVar2 * 8);
      pNStack_58 = local_60 + uVar7 * 8;
      pNStack_48 = local_60 + uVar2 * 8;
      local_50 = pNStack_58;
      local_18 = operator_new(0xfd0);
      __split_buffer<v8::AllocationProfile::Node*,std::__ndk1::allocator<v8::AllocationProfile::Node*>&>
      ::push_back((__split_buffer<v8::AllocationProfile::Node*,std::__ndk1::allocator<v8::AllocationProfile::Node*>&>
                   *)&local_60,&local_18);
      ppNVar3 = *(Node ***)(this + 8);
      ppNVar6 = *(Node ***)(this + 0x10);
      if (ppNVar6 != ppNVar3) {
        do {
          ppNVar6 = ppNVar6 + -1;
          __split_buffer<v8::AllocationProfile::Node*,std::__ndk1::allocator<v8::AllocationProfile::Node*>&>
          ::push_front((__split_buffer<v8::AllocationProfile::Node*,std::__ndk1::allocator<v8::AllocationProfile::Node*>&>
                        *)&local_60,ppNVar6);
          ppNVar3 = *(Node ***)(this + 8);
        } while (ppNVar6 != ppNVar3);
        ppNVar6 = *(Node ***)(this + 0x10);
      }
      pNVar1 = *(Node **)this;
      *(Node **)(this + 8) = pNStack_58;
      *(Node **)this = local_60;
      uVar4 = *(undefined8 *)(this + 0x18);
      *(Node **)(this + 0x18) = pNStack_48;
      *(Node **)(this + 0x10) = local_50;
      local_50 = (Node *)ppNVar6;
      if (ppNVar3 != ppNVar6) {
        local_50 = (Node *)(ppNVar6 +
                           ((ulong)((long)ppNVar6 + (-8 - (long)ppNVar3)) >> 3 ^ 0xffffffffffffffff)
                           );
      }
      if (pNVar1 == (Node *)0x0) {
        return;
      }
      local_60 = pNVar1;
      pNStack_58 = (Node *)ppNVar3;
      pNStack_48 = (Node *)uVar4;
      operator_delete(pNVar1);
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0xfd0);
      __split_buffer<v8::AllocationProfile::Node*,std::__ndk1::allocator<v8::AllocationProfile::Node*>>
      ::push_back((__split_buffer<v8::AllocationProfile::Node*,std::__ndk1::allocator<v8::AllocationProfile::Node*>>
                   *)this,&local_60);
      return;
    }
    local_60 = operator_new(0xfd0);
    __split_buffer<v8::AllocationProfile::Node*,std::__ndk1::allocator<v8::AllocationProfile::Node*>>
    ::push_front((__split_buffer<v8::AllocationProfile::Node*,std::__ndk1::allocator<v8::AllocationProfile::Node*>>
                  *)this,&local_60);
    local_60 = (Node *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x2e;
    local_60 = (Node *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_011b7f18(this,&local_60);
  return;
}

