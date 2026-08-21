
/* v8::internal::MemoryReducer::ScheduleTimer(double) */

void __thiscall v8::internal::MemoryReducer::ScheduleTimer(MemoryReducer *this,double param_1)

{
  CancelableTask *pCVar1;
  long *plVar2;
  long lVar3;
  CancelableTask *local_38;
  
  lVar3 = *(long *)this;
  if (*(int *)(lVar3 + 0x178) != 4) {
    plVar2 = *(long **)(this + 8);
    pCVar1 = operator_new(0x30);
    CancelableTask::CancelableTask(pCVar1,(Isolate *)(lVar3 + -0x8850));
    *(undefined ***)pCVar1 = &PTR__CancelableTask_01ca9108;
    local_38 = pCVar1 + 0x20;
    *(undefined **)local_38 = &DAT_01ca9138;
    *(MemoryReducer **)(pCVar1 + 0x28) = this;
    (**(code **)(*plVar2 + 0x10))((param_1 + 100.0) / 1000.0,plVar2,&local_38);
    pCVar1 = local_38;
    local_38 = (CancelableTask *)0x0;
    if (pCVar1 != (CancelableTask *)0x0) {
      (**(code **)(*(long *)pCVar1 + 8))();
    }
  }
  return;
}

