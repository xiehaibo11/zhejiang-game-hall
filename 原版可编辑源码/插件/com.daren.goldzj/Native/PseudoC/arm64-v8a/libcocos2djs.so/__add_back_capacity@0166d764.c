
/* std::__ndk1::deque<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry>>
::__add_back_capacity
          (deque<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry>>
           *this)

{
  ulong uVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  LoopStackEntry **ppLVar7;
  LoopStackEntry *local_58;
  LoopStackEntry *local_50;
  LoopStackEntry *pLStack_48;
  LoopStackEntry *local_40;
  LoopStackEntry *pLStack_38;
  deque<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry>>
  *local_30;
  
  if (*(ulong *)(this + 0x30) < 0x100) {
    uVar6 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar4 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar4 >> 3) <= uVar6) {
      local_30 = this + 0x20;
      pLStack_38 = (LoopStackEntry *)0x0;
      local_50 = *(LoopStackEntry **)(this + 0x28);
      uVar5 = lVar4 >> 2;
      if (lVar4 == 0) {
        uVar5 = 1;
      }
      if ((local_50 == (LoopStackEntry *)0x0) || (*(ulong *)(local_50 + 8) < uVar5)) {
        pZVar2 = *(Zone **)local_30;
        uVar1 = uVar5 * 8;
        local_50 = *(LoopStackEntry **)(pZVar2 + 0x10);
        if (uVar1 < (ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) ||
            uVar1 - (*(long *)(pZVar2 + 0x18) - (long)local_50) == 0) {
          *(LoopStackEntry **)(pZVar2 + 0x10) = local_50 + uVar1;
        }
        else {
          local_50 = (LoopStackEntry *)v8::internal::Zone::NewExpand(pZVar2,uVar1);
        }
      }
      else {
        *(undefined8 *)(this + 0x28) = *(undefined8 *)local_50;
      }
      pLStack_48 = local_50 + uVar6 * 8;
      pLStack_38 = local_50 + uVar5 * 8;
      local_58 = *(LoopStackEntry **)(this + 0x48);
      local_40 = pLStack_48;
      if ((local_58 == (LoopStackEntry *)0x0) || (*(ulong *)(local_58 + 8) < 0x100)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_58 = *(LoopStackEntry **)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_58) < 0x1000) {
          local_58 = (LoopStackEntry *)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(LoopStackEntry **)(pZVar2 + 0x10) = local_58 + 0x1000;
        }
      }
      else {
        *(undefined8 *)(this + 0x48) = *(undefined8 *)local_58;
      }
      __split_buffer<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*>&>
      ::push_back((__split_buffer<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*>&>
                   *)&local_50,&local_58);
      ppLVar7 = *(LoopStackEntry ***)(this + 0x10);
      if (ppLVar7 != *(LoopStackEntry ***)(this + 8)) {
        do {
          ppLVar7 = ppLVar7 + -1;
          __split_buffer<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*>&>
          ::push_front((__split_buffer<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*>&>
                        *)&local_50,ppLVar7);
        } while (ppLVar7 != *(LoopStackEntry ***)(this + 8));
      }
      puVar3 = *(undefined8 **)this;
      *(LoopStackEntry **)(this + 8) = pLStack_48;
      *(LoopStackEntry **)this = local_50;
      lVar4 = *(long *)(this + 0x18);
      *(LoopStackEntry **)(this + 0x18) = pLStack_38;
      *(LoopStackEntry **)(this + 0x10) = local_40;
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
      local_50 = *(LoopStackEntry **)(this + 0x48);
      if ((local_50 == (LoopStackEntry *)0x0) || (*(ulong *)(local_50 + 8) < 0x100)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_50 = *(LoopStackEntry **)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
          local_50 = (LoopStackEntry *)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(LoopStackEntry **)(pZVar2 + 0x10) = local_50 + 0x1000;
        }
      }
      else {
        *(undefined8 *)(this + 0x48) = *(undefined8 *)local_50;
      }
      __split_buffer<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*>>
      ::push_back((__split_buffer<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*>>
                   *)this,&local_50);
      return;
    }
    local_50 = *(LoopStackEntry **)(this + 0x48);
    if ((local_50 == (LoopStackEntry *)0x0) || (*(ulong *)(local_50 + 8) < 0x100)) {
      pZVar2 = *(Zone **)(this + 0x40);
      local_50 = *(LoopStackEntry **)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
        local_50 = (LoopStackEntry *)v8::internal::Zone::NewExpand(pZVar2,0x1000);
      }
      else {
        *(LoopStackEntry **)(pZVar2 + 0x10) = local_50 + 0x1000;
      }
    }
    else {
      *(undefined8 *)(this + 0x48) = *(undefined8 *)local_50;
    }
    __split_buffer<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*>>
    ::push_front((__split_buffer<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry*>>
                  *)this,&local_50);
    local_50 = (LoopStackEntry *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) - 0x100;
    local_50 = (LoopStackEntry *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_0166da2c(this,&local_50);
  return;
}

