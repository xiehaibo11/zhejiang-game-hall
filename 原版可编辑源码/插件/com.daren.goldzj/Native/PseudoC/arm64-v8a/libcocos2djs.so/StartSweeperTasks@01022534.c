
/* v8::internal::Sweeper::StartSweeperTasks() */

void __thiscall v8::internal::Sweeper::StartSweeperTasks(Sweeper *this)

{
  Sweeper *pSVar1;
  Sweeper *pSVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  CancelableTask *pCVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  CancelableTask *local_38;
  
  if (((FLAG_concurrent_sweeping != '\0') && (this[0xf9] != (Sweeper)0x0)) &&
     (*(char *)(*(long *)this + 0xb47) == '\0')) {
    pSVar1 = this + 0x100;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pSVar1,0x10);
      if (bVar5) {
        *(long *)pSVar1 = *(long *)pSVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar9 = *(long *)this;
    pSVar2 = this + 0x30;
    pCVar6 = operator_new(0x50);
    CancelableTask::CancelableTask(pCVar6,(Isolate *)(lVar9 + -0x8850));
    *(undefined ***)pCVar6 = &PTR__CancelableTask_01caa390;
    *(undefined **)(pCVar6 + 0x20) = &DAT_01caa3c0;
    *(Sweeper **)(pCVar6 + 0x28) = this;
    *(Sweeper **)(pCVar6 + 0x30) = pSVar2;
    *(Sweeper **)(pCVar6 + 0x38) = pSVar1;
    *(undefined4 *)(pCVar6 + 0x40) = 2;
    uVar8 = *(undefined8 *)(pCVar6 + 0x18);
    *(undefined8 *)(pCVar6 + 0x48) = *(undefined8 *)(lVar9 + 0x7f8);
    iVar3 = *(int *)(this + 0x10);
    *(int *)(this + 0x10) = iVar3 + 1;
    *(undefined8 *)(this + (long)iVar3 * 8 + 0x18) = uVar8;
    plVar7 = (long *)V8::GetCurrentPlatform();
    local_38 = pCVar6 + 0x20;
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_38);
    pCVar6 = local_38;
    local_38 = (CancelableTask *)0x0;
    if (pCVar6 != (CancelableTask *)0x0) {
      (**(code **)(*(long *)pCVar6 + 8))();
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pSVar1,0x10);
      if (bVar5) {
        *(long *)pSVar1 = *(long *)pSVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar9 = *(long *)this;
    pCVar6 = operator_new(0x50);
    CancelableTask::CancelableTask(pCVar6,(Isolate *)(lVar9 + -0x8850));
    *(undefined ***)pCVar6 = &PTR__CancelableTask_01caa390;
    *(undefined **)(pCVar6 + 0x20) = &DAT_01caa3c0;
    *(Sweeper **)(pCVar6 + 0x28) = this;
    *(Sweeper **)(pCVar6 + 0x30) = pSVar2;
    *(Sweeper **)(pCVar6 + 0x38) = pSVar1;
    *(undefined4 *)(pCVar6 + 0x40) = 3;
    uVar8 = *(undefined8 *)(pCVar6 + 0x18);
    *(undefined8 *)(pCVar6 + 0x48) = *(undefined8 *)(lVar9 + 0x7f8);
    iVar3 = *(int *)(this + 0x10);
    *(int *)(this + 0x10) = iVar3 + 1;
    *(undefined8 *)(this + (long)iVar3 * 8 + 0x18) = uVar8;
    plVar7 = (long *)V8::GetCurrentPlatform();
    local_38 = pCVar6 + 0x20;
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_38);
    pCVar6 = local_38;
    local_38 = (CancelableTask *)0x0;
    if (pCVar6 != (CancelableTask *)0x0) {
      (**(code **)(*(long *)pCVar6 + 8))();
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pSVar1,0x10);
      if (bVar5) {
        *(long *)pSVar1 = *(long *)pSVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar9 = *(long *)this;
    pCVar6 = operator_new(0x50);
    CancelableTask::CancelableTask(pCVar6,(Isolate *)(lVar9 + -0x8850));
    *(undefined ***)pCVar6 = &PTR__CancelableTask_01caa390;
    *(undefined **)(pCVar6 + 0x20) = &DAT_01caa3c0;
    *(Sweeper **)(pCVar6 + 0x28) = this;
    *(Sweeper **)(pCVar6 + 0x30) = pSVar2;
    *(Sweeper **)(pCVar6 + 0x38) = pSVar1;
    *(undefined4 *)(pCVar6 + 0x40) = 4;
    uVar8 = *(undefined8 *)(pCVar6 + 0x18);
    *(undefined8 *)(pCVar6 + 0x48) = *(undefined8 *)(lVar9 + 0x7f8);
    iVar3 = *(int *)(this + 0x10);
    *(int *)(this + 0x10) = iVar3 + 1;
    *(undefined8 *)(this + (long)iVar3 * 8 + 0x18) = uVar8;
    plVar7 = (long *)V8::GetCurrentPlatform();
    local_38 = pCVar6 + 0x20;
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_38);
    pCVar6 = local_38;
    local_38 = (CancelableTask *)0x0;
    if (pCVar6 != (CancelableTask *)0x0) {
      (**(code **)(*(long *)pCVar6 + 8))();
    }
    ScheduleIncrementalSweepingTask(this);
  }
  return;
}

