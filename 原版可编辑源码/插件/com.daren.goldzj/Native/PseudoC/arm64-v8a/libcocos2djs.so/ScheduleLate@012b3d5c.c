
/* v8::internal::compiler::Scheduler::ScheduleLate() */

void __thiscall v8::internal::compiler::Scheduler::ScheduleLate(Scheduler *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 local_c8;
  Scheduler *pSStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  if ((FLAG_trace_turbo_scheduler != '\0') &&
     (PrintF("--- SCHEDULE LATE ------------------------------------------\n"),
     FLAG_trace_turbo_scheduler != '\0')) {
    PrintF("roots: ");
    plVar4 = *(long **)(this + 0x48);
    for (plVar3 = *(long **)(this + 0x40); plVar3 != plVar4; plVar3 = plVar3 + 1) {
      if (FLAG_trace_turbo_scheduler != '\0') {
        PrintF("#%d:%s ",(ulong)(*(uint *)(*plVar3 + 0x14) & 0xffffff),
               *(undefined8 *)(*(long *)*plVar3 + 8));
      }
    }
    if (FLAG_trace_turbo_scheduler != '\0') {
      PrintF("\n");
    }
  }
  local_c8 = *(undefined8 *)this;
  local_b8 = *(undefined8 *)(this + 0x10);
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = (long *)0x0;
  local_78 = 0;
  local_80 = (undefined8 *)0x0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_48 = 0;
  puVar1 = *(undefined8 **)(this + 0x48);
  uStack_98 = local_c8;
  local_70 = local_c8;
  local_50 = local_c8;
  pSStack_c0 = this;
  for (puVar5 = *(undefined8 **)(this + 0x40); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    ScheduleLateNodeVisitor::ProcessQueue((ScheduleLateNodeVisitor *)&local_c8,(Node *)*puVar5);
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
  ::clear((__deque_base<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
           *)&local_90);
  if (puStack_88 == local_80) {
LAB_012b3ed8:
    if (((local_90 != (long *)0x0) && (0xf < (ulong)(local_78 - (long)local_90))) &&
       ((uVar2 = local_78 - (long)local_90 >> 3, local_68 == 0 ||
        (*(ulong *)(local_68 + 8) <= uVar2)))) {
      local_90[1] = uVar2;
      *local_90 = local_68;
    }
    return;
  }
  plVar4 = (long *)*puStack_88;
  plVar3 = (long *)local_48;
  if (local_48 != 0) goto LAB_012b3ea8;
  do {
    plVar3 = plVar4;
    plVar3[1] = 0x200;
    *plVar3 = local_48;
    local_48 = (long)plVar3;
    do {
      puStack_88 = puStack_88 + 1;
      if (local_80 == puStack_88) goto LAB_012b3ed8;
      plVar4 = (long *)*puStack_88;
      if (plVar3 == (long *)0x0) break;
LAB_012b3ea8:
    } while (0x200 < *(ulong *)((long)plVar3 + 8));
  } while( true );
}

