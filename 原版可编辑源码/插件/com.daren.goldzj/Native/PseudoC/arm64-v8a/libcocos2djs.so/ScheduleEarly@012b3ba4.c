
/* v8::internal::compiler::Scheduler::ScheduleEarly() */

void __thiscall v8::internal::compiler::Scheduler::ScheduleEarly(Scheduler *this)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  Scheduler *local_a0;
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
     (PrintF("--- SCHEDULE EARLY -----------------------------------------\n"),
     FLAG_trace_turbo_scheduler != '\0')) {
    PrintF("roots: ");
    plVar3 = *(long **)(this + 0x48);
    for (plVar2 = *(long **)(this + 0x40); plVar2 != plVar3; plVar2 = plVar2 + 1) {
      if (FLAG_trace_turbo_scheduler != '\0') {
        PrintF("#%d:%s ",(ulong)(*(uint *)(*plVar2 + 0x14) & 0xffffff),
               *(undefined8 *)(*(long *)*plVar2 + 8));
      }
    }
    if (FLAG_trace_turbo_scheduler != '\0') {
      PrintF("\n");
    }
  }
  local_70 = *(undefined8 *)this;
  uStack_98 = *(undefined8 *)(this + 0x10);
  local_68 = 0;
  local_48 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = (long *)0x0;
  local_78 = 0;
  local_80 = (undefined8 *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_a0 = this;
  local_50 = local_70;
  ScheduleEarlyNodeVisitor::Run((ScheduleEarlyNodeVisitor *)&local_a0,(ZoneVector *)(this + 0x40));
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)&local_90);
  if (puStack_88 == local_80) {
LAB_012b3d04:
    if (((local_90 != (long *)0x0) && (0xf < (ulong)(local_78 - (long)local_90))) &&
       ((uVar1 = local_78 - (long)local_90 >> 3, local_68 == 0 ||
        (*(ulong *)(local_68 + 8) <= uVar1)))) {
      local_90[1] = uVar1;
      *local_90 = local_68;
    }
    return;
  }
  plVar3 = (long *)*puStack_88;
  plVar2 = (long *)local_48;
  if (local_48 != 0) goto LAB_012b3cd4;
  do {
    plVar2 = plVar3;
    plVar2[1] = 0x200;
    *plVar2 = local_48;
    local_48 = (long)plVar2;
    do {
      puStack_88 = puStack_88 + 1;
      if (local_80 == puStack_88) goto LAB_012b3d04;
      plVar3 = (long *)*puStack_88;
      if (plVar2 == (long *)0x0) break;
LAB_012b3cd4:
    } while (0x200 < *(ulong *)((long)plVar2 + 8));
  } while( true );
}

