
/* v8::internal::OptimizingCompileDispatcher::QueueForOptimization(v8::internal::OptimizedCompilationJob*)
    */

void __thiscall
v8::internal::OptimizingCompileDispatcher::QueueForOptimization
          (OptimizingCompileDispatcher *this,OptimizedCompilationJob *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  CancelableTask *pCVar4;
  Isolate *pIVar5;
  CancelableTask *local_48;
  
  base::Mutex::Lock((Mutex *)(this + 0x1c));
  iVar1 = *(int *)(this + 0x10);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (*(int *)(this + 0x18) + *(int *)(this + 0x14)) / iVar1;
  }
  *(OptimizedCompilationJob **)
   (*(long *)(this + 8) +
   (long)((*(int *)(this + 0x18) + *(int *)(this + 0x14)) - iVar2 * iVar1) * 8) = param_1;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  base::Mutex::Unlock((Mutex *)(this + 0x1c));
  if (FLAG_block_concurrent_recompilation == '\0') {
    plVar3 = (long *)V8::GetCurrentPlatform();
    pCVar4 = operator_new(0x40);
    pIVar5 = *(Isolate **)this;
    CancelableTask::CancelableTask(pCVar4,pIVar5);
    *(undefined ***)pCVar4 = &PTR__CancelableTask_01ca4468;
    *(undefined **)(pCVar4 + 0x20) = &DAT_01ca4498;
    *(Isolate **)(pCVar4 + 0x28) = pIVar5;
    *(long *)(pCVar4 + 0x30) = *(long *)(pIVar5 + 0x9520) + 0xc928;
    *(OptimizingCompileDispatcher **)(pCVar4 + 0x38) = this;
    base::Mutex::Lock((Mutex *)(this + 0xac));
    *(int *)(*(long *)(pCVar4 + 0x38) + 0xa8) = *(int *)(*(long *)(pCVar4 + 0x38) + 0xa8) + 1;
    base::Mutex::Unlock((Mutex *)(this + 0xac));
    local_48 = pCVar4 + 0x20;
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_48);
    pCVar4 = local_48;
    local_48 = (CancelableTask *)0x0;
    if (pCVar4 != (CancelableTask *)0x0) {
      (**(code **)(*(long *)pCVar4 + 8))();
    }
  }
  else {
    *(int *)(this + 0xa4) = *(int *)(this + 0xa4) + 1;
  }
  return;
}

