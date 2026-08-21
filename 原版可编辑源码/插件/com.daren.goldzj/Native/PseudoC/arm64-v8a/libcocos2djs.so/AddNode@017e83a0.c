
/* v8::internal::compiler::InstructionScheduler::SchedulingQueueBase::AddNode(v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*)
    */

void __thiscall
v8::internal::compiler::InstructionScheduler::SchedulingQueueBase::AddNode
          (SchedulingQueueBase *this,ScheduleGraphNode *param_1)

{
  SchedulingQueueBase *pSVar1;
  undefined8 *puVar2;
  Zone *this_00;
  SchedulingQueueBase *pSVar3;
  SchedulingQueueBase *pSVar4;
  
  pSVar4 = *(SchedulingQueueBase **)(this + 0x10);
  pSVar1 = this + 8;
  pSVar3 = pSVar1;
  if (pSVar1 != pSVar4) {
    do {
      pSVar3 = pSVar4;
      if (*(int *)(*(long *)(pSVar4 + 0x10) + 0x60) < *(int *)(param_1 + 0x60)) break;
      pSVar4 = *(SchedulingQueueBase **)(pSVar4 + 8);
      pSVar3 = pSVar1;
    } while (pSVar1 != pSVar4);
  }
  this_00 = *(Zone **)(this + 0x20);
  puVar2 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x18) {
    puVar2 = (undefined8 *)Zone::NewExpand(this_00,0x18);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar2 + 3;
  }
  *puVar2 = 0;
  puVar2[2] = param_1;
  *(undefined8 **)(*(long *)pSVar3 + 8) = puVar2;
  *puVar2 = *(undefined8 *)pSVar4;
  *(undefined8 **)pSVar3 = puVar2;
  puVar2[1] = pSVar3;
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return;
}

