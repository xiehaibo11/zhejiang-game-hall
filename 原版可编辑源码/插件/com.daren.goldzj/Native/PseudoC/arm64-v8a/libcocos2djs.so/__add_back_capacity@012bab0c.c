
/* std::__ndk1::deque<v8::internal::compiler::Node*,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
::__add_back_capacity
          (deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *this)

{
  ulong uVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  long lVar4;
  Node *pNVar5;
  ulong uVar6;
  Node ***pppNVar7;
  Node **local_58;
  Node **local_50;
  Node **ppNStack_48;
  Node **local_40;
  Node **ppNStack_38;
  deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  *local_30;
  
  if (*(ulong *)(this + 0x30) < 0x200) {
    uVar6 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar4 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar4 >> 3) <= uVar6) {
      local_30 = this + 0x20;
      ppNStack_38 = (Node **)0x0;
      local_50 = *(Node ***)(this + 0x28);
      pNVar5 = (Node *)(lVar4 >> 2);
      if (lVar4 == 0) {
        pNVar5 = (Node *)0x1;
      }
      if ((local_50 == (Node **)0x0) || (local_50[1] < pNVar5)) {
        pZVar2 = *(Zone **)local_30;
        uVar1 = (long)pNVar5 * 8;
        local_50 = *(Node ***)(pZVar2 + 0x10);
        if (uVar1 < (ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) ||
            uVar1 - (*(long *)(pZVar2 + 0x18) - (long)local_50) == 0) {
          *(Node ***)(pZVar2 + 0x10) = local_50 + (long)pNVar5;
        }
        else {
          local_50 = (Node **)v8::internal::Zone::NewExpand(pZVar2,uVar1);
        }
      }
      else {
        *(Node **)(this + 0x28) = *local_50;
      }
      ppNStack_48 = local_50 + uVar6;
      ppNStack_38 = local_50 + (long)pNVar5;
      local_58 = *(Node ***)(this + 0x48);
      local_40 = ppNStack_48;
      if ((local_58 == (Node **)0x0) || (local_58[1] < (Node *)0x200)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_58 = *(Node ***)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_58) < 0x1000) {
          local_58 = (Node **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(Node ***)(pZVar2 + 0x10) = local_58 + 0x200;
        }
      }
      else {
        *(Node **)(this + 0x48) = *local_58;
      }
      __split_buffer<v8::internal::compiler::Node**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node**>&>
      ::push_back((__split_buffer<v8::internal::compiler::Node**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node**>&>
                   *)&local_50,&local_58);
      pppNVar7 = *(Node ****)(this + 0x10);
      if (pppNVar7 != *(Node ****)(this + 8)) {
        do {
          pppNVar7 = pppNVar7 + -1;
          __split_buffer<v8::internal::compiler::Node**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node**>&>
          ::push_front((__split_buffer<v8::internal::compiler::Node**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node**>&>
                        *)&local_50,pppNVar7);
        } while (pppNVar7 != *(Node ****)(this + 8));
      }
      puVar3 = *(undefined8 **)this;
      *(Node ***)(this + 8) = ppNStack_48;
      *(Node ***)this = local_50;
      lVar4 = *(long *)(this + 0x18);
      *(Node ***)(this + 0x18) = ppNStack_38;
      *(Node ***)(this + 0x10) = local_40;
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
      local_50 = *(Node ***)(this + 0x48);
      if ((local_50 == (Node **)0x0) || (local_50[1] < (Node *)0x200)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_50 = *(Node ***)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
          local_50 = (Node **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(Node ***)(pZVar2 + 0x10) = local_50 + 0x200;
        }
      }
      else {
        *(Node **)(this + 0x48) = *local_50;
      }
      __split_buffer<v8::internal::compiler::Node**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node**>>
      ::push_back((__split_buffer<v8::internal::compiler::Node**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node**>>
                   *)this,&local_50);
      return;
    }
    local_50 = *(Node ***)(this + 0x48);
    if ((local_50 == (Node **)0x0) || (local_50[1] < (Node *)0x200)) {
      pZVar2 = *(Zone **)(this + 0x40);
      local_50 = *(Node ***)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
        local_50 = (Node **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
      }
      else {
        *(Node ***)(pZVar2 + 0x10) = local_50 + 0x200;
      }
    }
    else {
      *(Node **)(this + 0x48) = *local_50;
    }
    __split_buffer<v8::internal::compiler::Node**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node**>>
    ::push_front((__split_buffer<v8::internal::compiler::Node**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node**>>
                  *)this,&local_50);
    local_50 = (Node **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) - 0x200;
    local_50 = (Node **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_012badd4(this,&local_50);
  return;
}

