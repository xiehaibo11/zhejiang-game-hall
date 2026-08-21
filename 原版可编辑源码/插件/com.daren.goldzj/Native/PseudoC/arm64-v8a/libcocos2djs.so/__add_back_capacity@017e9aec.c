
/* std::__ndk1::deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
::__add_back_capacity
          (deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
           *this)

{
  ulong uVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  long lVar4;
  ScheduleGraphNode *pSVar5;
  ulong uVar6;
  ScheduleGraphNode ***pppSVar7;
  ScheduleGraphNode **local_58;
  ScheduleGraphNode **local_50;
  ScheduleGraphNode **ppSStack_48;
  ScheduleGraphNode **local_40;
  ScheduleGraphNode **ppSStack_38;
  deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
  *local_30;
  
  if (*(ulong *)(this + 0x30) < 0x200) {
    uVar6 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar4 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar4 >> 3) <= uVar6) {
      local_30 = this + 0x20;
      ppSStack_38 = (ScheduleGraphNode **)0x0;
      local_50 = *(ScheduleGraphNode ***)(this + 0x28);
      pSVar5 = (ScheduleGraphNode *)(lVar4 >> 2);
      if (lVar4 == 0) {
        pSVar5 = (ScheduleGraphNode *)0x1;
      }
      if ((local_50 == (ScheduleGraphNode **)0x0) || (local_50[1] < pSVar5)) {
        pZVar2 = *(Zone **)local_30;
        uVar1 = (long)pSVar5 * 8;
        local_50 = *(ScheduleGraphNode ***)(pZVar2 + 0x10);
        if (uVar1 < (ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) ||
            uVar1 - (*(long *)(pZVar2 + 0x18) - (long)local_50) == 0) {
          *(ScheduleGraphNode ***)(pZVar2 + 0x10) = local_50 + (long)pSVar5;
        }
        else {
          local_50 = (ScheduleGraphNode **)v8::internal::Zone::NewExpand(pZVar2,uVar1);
        }
      }
      else {
        *(ScheduleGraphNode **)(this + 0x28) = *local_50;
      }
      ppSStack_48 = local_50 + uVar6;
      ppSStack_38 = local_50 + (long)pSVar5;
      local_58 = *(ScheduleGraphNode ***)(this + 0x48);
      local_40 = ppSStack_48;
      if ((local_58 == (ScheduleGraphNode **)0x0) || (local_58[1] < (ScheduleGraphNode *)0x200)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_58 = *(ScheduleGraphNode ***)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_58) < 0x1000) {
          local_58 = (ScheduleGraphNode **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(ScheduleGraphNode ***)(pZVar2 + 0x10) = local_58 + 0x200;
        }
      }
      else {
        *(ScheduleGraphNode **)(this + 0x48) = *local_58;
      }
      __split_buffer<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**>&>
      ::push_back((__split_buffer<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**>&>
                   *)&local_50,&local_58);
      pppSVar7 = *(ScheduleGraphNode ****)(this + 0x10);
      if (pppSVar7 != *(ScheduleGraphNode ****)(this + 8)) {
        do {
          pppSVar7 = pppSVar7 + -1;
          __split_buffer<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**>&>
          ::push_front((__split_buffer<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**>&>
                        *)&local_50,pppSVar7);
        } while (pppSVar7 != *(ScheduleGraphNode ****)(this + 8));
      }
      puVar3 = *(undefined8 **)this;
      *(ScheduleGraphNode ***)(this + 8) = ppSStack_48;
      *(ScheduleGraphNode ***)this = local_50;
      lVar4 = *(long *)(this + 0x18);
      *(ScheduleGraphNode ***)(this + 0x18) = ppSStack_38;
      *(ScheduleGraphNode ***)(this + 0x10) = local_40;
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
      local_50 = *(ScheduleGraphNode ***)(this + 0x48);
      if ((local_50 == (ScheduleGraphNode **)0x0) || (local_50[1] < (ScheduleGraphNode *)0x200)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_50 = *(ScheduleGraphNode ***)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
          local_50 = (ScheduleGraphNode **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(ScheduleGraphNode ***)(pZVar2 + 0x10) = local_50 + 0x200;
        }
      }
      else {
        *(ScheduleGraphNode **)(this + 0x48) = *local_50;
      }
      __split_buffer<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**>>
      ::push_back((__split_buffer<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**>>
                   *)this,&local_50);
      return;
    }
    local_50 = *(ScheduleGraphNode ***)(this + 0x48);
    if ((local_50 == (ScheduleGraphNode **)0x0) || (local_50[1] < (ScheduleGraphNode *)0x200)) {
      pZVar2 = *(Zone **)(this + 0x40);
      local_50 = *(ScheduleGraphNode ***)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
        local_50 = (ScheduleGraphNode **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
      }
      else {
        *(ScheduleGraphNode ***)(pZVar2 + 0x10) = local_50 + 0x200;
      }
    }
    else {
      *(ScheduleGraphNode **)(this + 0x48) = *local_50;
    }
    __split_buffer<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**>>
    ::push_front((__split_buffer<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode**>>
                  *)this,&local_50);
    local_50 = (ScheduleGraphNode **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) - 0x200;
    local_50 = (ScheduleGraphNode **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_017e9db4(this,&local_50);
  return;
}

