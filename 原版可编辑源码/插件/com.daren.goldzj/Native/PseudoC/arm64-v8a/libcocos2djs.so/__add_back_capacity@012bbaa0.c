
/* std::__ndk1::deque<v8::internal::compiler::Node::InputEdges::iterator,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::compiler::Node::InputEdges::iterator,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator>>
::__add_back_capacity
          (deque<v8::internal::compiler::Node::InputEdges::iterator,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator>>
           *this)

{
  ulong uVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  iterator **ppiVar7;
  iterator *local_58;
  iterator *local_50;
  iterator *piStack_48;
  iterator *local_40;
  iterator *piStack_38;
  deque<v8::internal::compiler::Node::InputEdges::iterator,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator>>
  *local_30;
  
  if (*(ulong *)(this + 0x30) < 0x100) {
    uVar6 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar4 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar4 >> 3) <= uVar6) {
      local_30 = this + 0x20;
      piStack_38 = (iterator *)0x0;
      local_50 = *(iterator **)(this + 0x28);
      uVar5 = lVar4 >> 2;
      if (lVar4 == 0) {
        uVar5 = 1;
      }
      if ((local_50 == (iterator *)0x0) || (*(ulong *)(local_50 + 8) < uVar5)) {
        pZVar2 = *(Zone **)local_30;
        uVar1 = uVar5 * 8;
        local_50 = *(iterator **)(pZVar2 + 0x10);
        if (uVar1 < (ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) ||
            uVar1 - (*(long *)(pZVar2 + 0x18) - (long)local_50) == 0) {
          *(iterator **)(pZVar2 + 0x10) = local_50 + uVar1;
        }
        else {
          local_50 = (iterator *)v8::internal::Zone::NewExpand(pZVar2,uVar1);
        }
      }
      else {
        *(undefined8 *)(this + 0x28) = *(undefined8 *)local_50;
      }
      piStack_48 = local_50 + uVar6 * 8;
      piStack_38 = local_50 + uVar5 * 8;
      local_58 = *(iterator **)(this + 0x48);
      local_40 = piStack_48;
      if ((local_58 == (iterator *)0x0) || (*(ulong *)(local_58 + 8) < 0x100)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_58 = *(iterator **)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_58) < 0x1000) {
          local_58 = (iterator *)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(iterator **)(pZVar2 + 0x10) = local_58 + 0x1000;
        }
      }
      else {
        *(undefined8 *)(this + 0x48) = *(undefined8 *)local_58;
      }
      __split_buffer<v8::internal::compiler::Node::InputEdges::iterator*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator*>&>
      ::push_back((__split_buffer<v8::internal::compiler::Node::InputEdges::iterator*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator*>&>
                   *)&local_50,&local_58);
      ppiVar7 = *(iterator ***)(this + 0x10);
      if (ppiVar7 != *(iterator ***)(this + 8)) {
        do {
          ppiVar7 = ppiVar7 + -1;
          __split_buffer<v8::internal::compiler::Node::InputEdges::iterator*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator*>&>
          ::push_front((__split_buffer<v8::internal::compiler::Node::InputEdges::iterator*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator*>&>
                        *)&local_50,ppiVar7);
        } while (ppiVar7 != *(iterator ***)(this + 8));
      }
      puVar3 = *(undefined8 **)this;
      *(iterator **)(this + 8) = piStack_48;
      *(iterator **)this = local_50;
      lVar4 = *(long *)(this + 0x18);
      *(iterator **)(this + 0x18) = piStack_38;
      *(iterator **)(this + 0x10) = local_40;
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      if ((ulong)(lVar4 - (long)puVar3) < 0x10) {
        return;
      }
      uVar6 = lVar4 - (long)puVar3 >> 3;
      if ((*(long *)(local_30 + 8) != 0) && (uVar6 < *(ulong *)(*(long *)(local_30 + 8) + 8))) {
        return;
      }
      puVar3[1] = uVar6;
      *puVar3 = *(undefined8 *)(local_30 + 8);
      *(undefined8 **)(local_30 + 8) = puVar3;
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_50 = *(iterator **)(this + 0x48);
      if ((local_50 == (iterator *)0x0) || (*(ulong *)(local_50 + 8) < 0x100)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_50 = *(iterator **)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
          local_50 = (iterator *)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(iterator **)(pZVar2 + 0x10) = local_50 + 0x1000;
        }
      }
      else {
        *(undefined8 *)(this + 0x48) = *(undefined8 *)local_50;
      }
      __split_buffer<v8::internal::compiler::Node::InputEdges::iterator*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator*>>
      ::push_back((__split_buffer<v8::internal::compiler::Node::InputEdges::iterator*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator*>>
                   *)this,&local_50);
      return;
    }
    local_50 = *(iterator **)(this + 0x48);
    if ((local_50 == (iterator *)0x0) || (*(ulong *)(local_50 + 8) < 0x100)) {
      pZVar2 = *(Zone **)(this + 0x40);
      local_50 = *(iterator **)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
        local_50 = (iterator *)v8::internal::Zone::NewExpand(pZVar2,0x1000);
      }
      else {
        *(iterator **)(pZVar2 + 0x10) = local_50 + 0x1000;
      }
    }
    else {
      *(undefined8 *)(this + 0x48) = *(undefined8 *)local_50;
    }
    __split_buffer<v8::internal::compiler::Node::InputEdges::iterator*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator*>>
    ::push_front((__split_buffer<v8::internal::compiler::Node::InputEdges::iterator*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator*>>
                  *)this,&local_50);
    local_50 = (iterator *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) - 0x100;
    local_50 = (iterator *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_012bbd68(this,&local_50);
  return;
}

