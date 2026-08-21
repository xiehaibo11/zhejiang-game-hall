
/* v8::internal::OptimizingCompileDispatcher::Unblock() */

void __thiscall
v8::internal::OptimizingCompileDispatcher::Unblock(OptimizingCompileDispatcher *this)

{
  int iVar1;
  long *plVar2;
  CancelableTask *pCVar3;
  Isolate *pIVar4;
  CancelableTask *local_48;
  
  if (0 < *(int *)(this + 0xa4)) {
    do {
      plVar2 = (long *)V8::GetCurrentPlatform();
      pCVar3 = operator_new(0x40);
      pIVar4 = *(Isolate **)this;
      CancelableTask::CancelableTask(pCVar3,pIVar4);
      *(undefined ***)pCVar3 = &PTR__CancelableTask_01ca4468;
      *(undefined **)(pCVar3 + 0x20) = &DAT_01ca4498;
      *(Isolate **)(pCVar3 + 0x28) = pIVar4;
      *(long *)(pCVar3 + 0x30) = *(long *)(pIVar4 + 0x9520) + 0xc928;
      *(OptimizingCompileDispatcher **)(pCVar3 + 0x38) = this;
      base::Mutex::Lock((Mutex *)(this + 0xac));
      *(int *)(*(long *)(pCVar3 + 0x38) + 0xa8) = *(int *)(*(long *)(pCVar3 + 0x38) + 0xa8) + 1;
      base::Mutex::Unlock((Mutex *)(this + 0xac));
      local_48 = pCVar3 + 0x20;
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_48);
      pCVar3 = local_48;
      local_48 = (CancelableTask *)0x0;
      if (pCVar3 != (CancelableTask *)0x0) {
        (**(code **)(*(long *)pCVar3 + 8))();
      }
      iVar1 = *(int *)(this + 0xa4);
      *(int *)(this + 0xa4) = iVar1 + -1;
    } while (0 < iVar1 + -1);
  }
  return;
}

