
/* std::__ndk1::deque<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates>>
::__add_back_capacity
          (deque<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates>>
           *this)

{
  ulong uVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  IteratorsStates **ppIVar7;
  IteratorsStates *local_58;
  IteratorsStates *local_50;
  IteratorsStates *pIStack_48;
  IteratorsStates *local_40;
  IteratorsStates *pIStack_38;
  deque<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates>>
  *local_30;
  
  if (*(ulong *)(this + 0x30) < 0x55) {
    uVar6 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar4 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar4 >> 3) <= uVar6) {
      local_30 = this + 0x20;
      pIStack_38 = (IteratorsStates *)0x0;
      local_50 = *(IteratorsStates **)(this + 0x28);
      uVar5 = lVar4 >> 2;
      if (lVar4 == 0) {
        uVar5 = 1;
      }
      if ((local_50 == (IteratorsStates *)0x0) || (*(ulong *)(local_50 + 8) < uVar5)) {
        pZVar2 = *(Zone **)local_30;
        uVar1 = uVar5 * 8;
        local_50 = *(IteratorsStates **)(pZVar2 + 0x10);
        if (uVar1 < (ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) ||
            uVar1 - (*(long *)(pZVar2 + 0x18) - (long)local_50) == 0) {
          *(IteratorsStates **)(pZVar2 + 0x10) = local_50 + uVar1;
        }
        else {
          local_50 = (IteratorsStates *)v8::internal::Zone::NewExpand(pZVar2,uVar1);
        }
      }
      else {
        *(undefined8 *)(this + 0x28) = *(undefined8 *)local_50;
      }
      pIStack_48 = local_50 + uVar6 * 8;
      pIStack_38 = local_50 + uVar5 * 8;
      local_58 = *(IteratorsStates **)(this + 0x48);
      local_40 = pIStack_48;
      if ((local_58 == (IteratorsStates *)0x0) || (*(ulong *)(local_58 + 8) < 0x55)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_58 = *(IteratorsStates **)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_58) < 0xff0) {
          local_58 = (IteratorsStates *)v8::internal::Zone::NewExpand(pZVar2,0xff0);
        }
        else {
          *(IteratorsStates **)(pZVar2 + 0x10) = local_58 + 0xff0;
        }
      }
      else {
        *(undefined8 *)(this + 0x48) = *(undefined8 *)local_58;
      }
      __split_buffer<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*>&>
      ::push_back((__split_buffer<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*>&>
                   *)&local_50,&local_58);
      ppIVar7 = *(IteratorsStates ***)(this + 0x10);
      if (ppIVar7 != *(IteratorsStates ***)(this + 8)) {
        do {
          ppIVar7 = ppIVar7 + -1;
          __split_buffer<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*>&>
          ::push_front((__split_buffer<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*>&>
                        *)&local_50,ppIVar7);
        } while (ppIVar7 != *(IteratorsStates ***)(this + 8));
      }
      puVar3 = *(undefined8 **)this;
      *(IteratorsStates **)(this + 8) = pIStack_48;
      *(IteratorsStates **)this = local_50;
      lVar4 = *(long *)(this + 0x18);
      *(IteratorsStates **)(this + 0x18) = pIStack_38;
      *(IteratorsStates **)(this + 0x10) = local_40;
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
      local_50 = *(IteratorsStates **)(this + 0x48);
      if ((local_50 == (IteratorsStates *)0x0) || (*(ulong *)(local_50 + 8) < 0x55)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_50 = *(IteratorsStates **)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0xff0) {
          local_50 = (IteratorsStates *)v8::internal::Zone::NewExpand(pZVar2,0xff0);
        }
        else {
          *(IteratorsStates **)(pZVar2 + 0x10) = local_50 + 0xff0;
        }
      }
      else {
        *(undefined8 *)(this + 0x48) = *(undefined8 *)local_50;
      }
      __split_buffer<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*>>
      ::push_back((__split_buffer<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*>>
                   *)this,&local_50);
      return;
    }
    local_50 = *(IteratorsStates **)(this + 0x48);
    if ((local_50 == (IteratorsStates *)0x0) || (*(ulong *)(local_50 + 8) < 0x55)) {
      pZVar2 = *(Zone **)(this + 0x40);
      local_50 = *(IteratorsStates **)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0xff0) {
        local_50 = (IteratorsStates *)v8::internal::Zone::NewExpand(pZVar2,0xff0);
      }
      else {
        *(IteratorsStates **)(pZVar2 + 0x10) = local_50 + 0xff0;
      }
    }
    else {
      *(undefined8 *)(this + 0x48) = *(undefined8 *)local_50;
    }
    __split_buffer<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*>>
    ::push_front((__split_buffer<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates*>>
                  *)this,&local_50);
    local_50 = (IteratorsStates *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) - 0x55;
    local_50 = (IteratorsStates *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_0167ec14(this,&local_50);
  return;
}

