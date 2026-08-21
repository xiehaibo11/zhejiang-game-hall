
/* v8::internal::compiler::ScheduleLateNodeVisitor::CloneNode(v8::internal::compiler::Node*) */

long __thiscall
v8::internal::compiler::ScheduleLateNodeVisitor::CloneNode
          (ScheduleLateNodeVisitor *this,Node *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  Node *pNVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  if ((~uVar5 & 0xf000000) == 0) {
    uVar8 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
    if ((int)uVar8 < 1) goto LAB_012b91b4;
  }
  else {
    uVar8 = uVar5 >> 0x18 & 0xf;
    if (uVar8 == 0) goto LAB_012b91b4;
  }
  lVar4 = 0;
  while( true ) {
    pNVar6 = param_1 + 0x20;
    if ((~uVar5 & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
    }
    Scheduler::IncrementUnscheduledUseCount
              (*(Scheduler **)(this + 8),*(Node **)(pNVar6 + lVar4 * 8),(int)lVar4,param_1);
    if ((ulong)uVar8 - 1 == lVar4) break;
    uVar5 = *(uint *)(param_1 + 0x14);
    lVar4 = lVar4 + 1;
  }
LAB_012b91b4:
  lVar4 = Graph::CloneNode(*(Graph **)(*(long *)(this + 8) + 8),param_1);
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("clone #%d:%s -> #%d\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8),(ulong)(*(uint *)(lVar4 + 0x14) & 0xffffff));
  }
  lVar7 = *(long *)(this + 8);
  uVar1 = ((ulong)*(uint *)(lVar4 + 0x14) & 0xffffff) + 1;
  local_50 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x68);
  uStack_48 = 0;
  lVar9 = *(long *)(lVar7 + 0xb0);
  uVar10 = *(long *)(lVar7 + 0xb8) - lVar9 >> 4;
  if (uVar10 < uVar1) {
    std::__ndk1::
    vector<v8::internal::compiler::Scheduler::SchedulerData,v8::internal::ZoneAllocator<v8::internal::compiler::Scheduler::SchedulerData>>
    ::__append((vector<v8::internal::compiler::Scheduler::SchedulerData,v8::internal::ZoneAllocator<v8::internal::compiler::Scheduler::SchedulerData>>
                *)(lVar7 + 0xb0),uVar1 - uVar10,(SchedulerData *)&local_50);
  }
  else if (uVar10 != uVar1) {
    *(ulong *)(lVar7 + 0xb8) = lVar9 + uVar1 * 0x10;
  }
  puVar2 = (undefined8 *)
           (*(long *)(*(long *)(this + 8) + 0xb0) +
           ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10);
  uVar11 = *puVar2;
  puVar3 = (undefined8 *)
           (*(long *)(*(long *)(this + 8) + 0xb0) +
           ((ulong)*(uint *)(lVar4 + 0x14) & 0xffffff) * 0x10);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar11;
  return lVar4;
}

