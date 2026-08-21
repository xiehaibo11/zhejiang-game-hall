
/* std::__ndk1::deque<universe::network::AUpdates*,
   std::__ndk1::allocator<universe::network::AUpdates*> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<universe::network::AUpdates*,std::__ndk1::allocator<universe::network::AUpdates*>>::
__add_back_capacity(deque<universe::network::AUpdates*,std::__ndk1::allocator<universe::network::AUpdates*>>
                    *this)

{
  long lVar1;
  AUpdates **ppAVar2;
  ulong uVar3;
  AUpdates ***pppAVar4;
  long lVar5;
  AUpdates ***pppAVar6;
  ulong uVar7;
  AUpdates ***pppAVar8;
  undefined8 uVar9;
  AUpdates **local_68;
  AUpdates **local_60;
  AUpdates **ppAStack_58;
  AUpdates **local_50;
  AUpdates **ppAStack_48;
  deque<universe::network::AUpdates*,std::__ndk1::allocator<universe::network::AUpdates*>>
  *pdStack_40;
  long local_38;
  
                    /* try { // try from 00a06f1c to 00b071cb has its CatchHandler @ 00a06f1c
                       catch() { ... } // from try @ 00a06f1c with catch @ 00a06f1c
                       catch() { ... } // from try @ 00a0724c with catch @ 00a06f1c */
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
      ppAStack_48 = (AUpdates **)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      ppAStack_58 = local_60 + uVar7;
      ppAStack_48 = local_60 + uVar3;
      local_50 = ppAStack_58;
      local_68 = operator_new(0x1000);
      __split_buffer<universe::network::AUpdates**,std::__ndk1::allocator<universe::network::AUpdates**>&>
      ::push_back((__split_buffer<universe::network::AUpdates**,std::__ndk1::allocator<universe::network::AUpdates**>&>
                   *)&local_60,&local_68);
      pppAVar6 = *(AUpdates ****)(this + 0x10);
      while (pppAVar4 = *(AUpdates ****)(this + 8), pppAVar6 != pppAVar4) {
        pppAVar6 = pppAVar6 + -1;
        __split_buffer<universe::network::AUpdates**,std::__ndk1::allocator<universe::network::AUpdates**>&>
        ::push_front((__split_buffer<universe::network::AUpdates**,std::__ndk1::allocator<universe::network::AUpdates**>&>
                      *)&local_60,pppAVar6);
      }
      ppAVar2 = *(AUpdates ***)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      pppAVar8 = *(AUpdates ****)(this + 0x10);
      *(AUpdates ***)(this + 8) = ppAStack_58;
      *(AUpdates ***)this = local_60;
      *(AUpdates ***)(this + 0x18) = ppAStack_48;
      *(AUpdates ***)(this + 0x10) = local_50;
      local_50 = (AUpdates **)pppAVar8;
      if (pppAVar8 != pppAVar6) {
        local_50 = (AUpdates **)
                   (pppAVar8 +
                   ((ulong)((long)pppAVar8 + (-8 - (long)pppAVar4)) >> 3 ^ 0xffffffffffffffff));
      }
      local_60 = ppAVar2;
      ppAStack_58 = (AUpdates **)pppAVar4;
      ppAStack_48 = (AUpdates **)uVar9;
      if (ppAVar2 != (AUpdates **)0x0) {
        operator_delete(ppAVar2);
      }
      goto LAB_00a06f5c;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<universe::network::AUpdates**,std::__ndk1::allocator<universe::network::AUpdates**>>
      ::push_back((__split_buffer<universe::network::AUpdates**,std::__ndk1::allocator<universe::network::AUpdates**>>
                   *)this,&local_60);
      goto LAB_00a06f5c;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<universe::network::AUpdates**,std::__ndk1::allocator<universe::network::AUpdates**>>
    ::push_front((__split_buffer<universe::network::AUpdates**,std::__ndk1::allocator<universe::network::AUpdates**>>
                  *)this,&local_60);
    local_60 = (AUpdates **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
    local_60 = (AUpdates **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00a07120(this,&local_60);
LAB_00a06f5c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

