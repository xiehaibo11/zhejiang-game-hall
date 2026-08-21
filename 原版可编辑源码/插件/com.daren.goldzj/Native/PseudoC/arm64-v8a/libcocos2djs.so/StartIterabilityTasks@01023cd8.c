
/* v8::internal::Sweeper::StartIterabilityTasks() */

void __thiscall v8::internal::Sweeper::StartIterabilityTasks(Sweeper *this)

{
  CancelableTask *pCVar1;
  long *plVar2;
  long lVar3;
  CancelableTask *local_28;
  
  if (((this[0x140] != (Sweeper)0x0) && (FLAG_concurrent_sweeping != '\0')) &&
     (*(long *)(this + 0x110) != *(long *)(this + 0x118))) {
    lVar3 = *(long *)this;
    pCVar1 = operator_new(0x40);
    CancelableTask::CancelableTask(pCVar1,(Isolate *)(lVar3 + -0x8850));
    *(undefined ***)pCVar1 = &PTR__CancelableTask_01caa440;
    *(undefined **)(pCVar1 + 0x20) = &DAT_01caa470;
    *(Sweeper **)(pCVar1 + 0x28) = this;
    *(Sweeper **)(pCVar1 + 0x30) = this + 0x130;
    *(undefined8 *)(pCVar1 + 0x38) = *(undefined8 *)(lVar3 + 0x7f8);
    *(undefined8 *)(this + 0x128) = *(undefined8 *)(pCVar1 + 0x18);
    this[0x141] = (Sweeper)0x1;
    plVar2 = (long *)V8::GetCurrentPlatform();
    local_28 = pCVar1 + 0x20;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_28);
    pCVar1 = local_28;
    local_28 = (CancelableTask *)0x0;
    if (pCVar1 != (CancelableTask *)0x0) {
      (**(code **)(*(long *)pCVar1 + 8))();
    }
  }
  return;
}

