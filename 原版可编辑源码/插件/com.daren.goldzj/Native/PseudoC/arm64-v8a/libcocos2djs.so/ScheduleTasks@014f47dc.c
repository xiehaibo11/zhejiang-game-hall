
/* v8::internal::ConcurrentMarking::ScheduleTasks() */

void __thiscall v8::internal::ConcurrentMarking::ScheduleTasks(ConcurrentMarking *this)

{
  int iVar1;
  CancelableTask *pCVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ConcurrentMarking *pCVar6;
  int iVar7;
  CancelableTask *local_68;
  
  base::Mutex::Lock((Mutex *)(this + 0x434));
  if (*(int *)(this + 0x4d8) == 0) {
    if (((DAT_01d46bd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d46bd0), iVar1 != 0)) {
      plVar3 = (long *)V8::GetCurrentPlatform();
      iVar1 = (**(code **)(*plVar3 + 0x28))();
      DAT_01d46bc8 = iVar1 + 1;
      __cxa_guard_release(&DAT_01d46bd0);
    }
    iVar1 = 7;
    if (DAT_01d46bc8 < 8) {
      iVar1 = DAT_01d46bc8 + -1;
    }
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    *(int *)(this + 0x4d8) = iVar1;
  }
  else if (*(int *)(this + 0x4d8) < 1) goto LAB_014f4970;
  lVar5 = 0;
  pCVar6 = this + 0xa8;
  iVar1 = 1;
  do {
    if (this[lVar5 + 0x491] == (ConcurrentMarking)0x0) {
      if (FLAG_trace_concurrent_marking == '\0') {
        iVar7 = (int)lVar5 + 1;
      }
      else {
        Isolate::PrintWithTimestamp
                  ((char *)(*(long *)this + -0x8850),"Scheduling concurrent marking task %d\n",
                   (ulong)((int)lVar5 + 1));
        iVar7 = iVar1;
      }
      *(undefined4 *)pCVar6 = 0;
      lVar4 = *(long *)this;
      *(undefined4 *)(pCVar6 + 0x38) = *(undefined4 *)(*(long *)(lVar4 + 0x800) + 0x2704);
      pCVar6[0x3c] = *(ConcurrentMarking *)(lVar4 + 0xadc);
      this[lVar5 + 0x491] = (ConcurrentMarking)0x1;
      *(int *)(this + 0x48c) = *(int *)(this + 0x48c) + 1;
      pCVar2 = operator_new(0x40);
      CancelableTask::CancelableTask(pCVar2,(Isolate *)(lVar4 + -0x8850));
      *(undefined ***)pCVar2 = &PTR__CancelableTask_01cc6e20;
      *(undefined **)(pCVar2 + 0x20) = &DAT_01cc6e50;
      *(ConcurrentMarking **)(pCVar2 + 0x28) = this;
      *(ConcurrentMarking **)(pCVar2 + 0x30) = pCVar6;
      *(int *)(pCVar2 + 0x38) = iVar7;
      *(undefined8 *)(this + lVar5 * 8 + 0x4a0) = *(undefined8 *)(pCVar2 + 0x18);
      plVar3 = (long *)V8::GetCurrentPlatform();
      local_68 = pCVar2 + 0x20;
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_68);
      pCVar2 = local_68;
      local_68 = (CancelableTask *)0x0;
      if (pCVar2 != (CancelableTask *)0x0) {
        (**(code **)(*(long *)pCVar2 + 8))();
      }
    }
    lVar5 = lVar5 + 1;
    iVar1 = iVar1 + 1;
    pCVar6 = pCVar6 + 0x80;
  } while (lVar5 < *(int *)(this + 0x4d8));
LAB_014f4970:
  base::Mutex::Unlock((Mutex *)(this + 0x434));
  return;
}

