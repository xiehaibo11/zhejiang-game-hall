
/* v8::internal::ThreadManager::DeleteThreadStateList(v8::internal::ThreadState*) */

void __thiscall
v8::internal::ThreadManager::DeleteThreadStateList(ThreadManager *this,ThreadState *param_1)

{
  ThreadState *pTVar1;
  ThreadState *pTVar2;
  
  pTVar1 = *(ThreadState **)(param_1 + 0x10);
  if (*(ThreadState **)(param_1 + 0x10) != param_1) {
    do {
      pTVar2 = *(ThreadState **)(pTVar1 + 0x10);
      if (pTVar1 != (ThreadState *)0x0) {
        if (*(void **)(pTVar1 + 8) != (void *)0x0) {
          operator_delete__(*(void **)(pTVar1 + 8));
        }
        operator_delete(pTVar1);
      }
      pTVar1 = pTVar2;
    } while (pTVar2 != param_1);
    if (param_1 == (ThreadState *)0x0) {
      return;
    }
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
  }
  operator_delete(param_1);
  return;
}

