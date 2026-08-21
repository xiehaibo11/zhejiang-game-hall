
/* v8::internal::Isolate::Exit() */

void __thiscall v8::internal::Isolate::Exit(Isolate *this)

{
  Isolate *pIVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  
  pIVar1 = this + 0x9488;
  iVar4 = **(int **)pIVar1 + -1;
  **(int **)pIVar1 = iVar4;
  if (0 < iVar4) {
    return;
  }
  pvVar5 = *(void **)pIVar1;
  *(undefined8 *)pIVar1 = *(undefined8 *)((long)pvVar5 + 0x18);
  pvVar2 = *(void **)((long)pvVar5 + 8);
  pvVar3 = *(void **)((long)pvVar5 + 0x10);
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  base::Thread::SetThreadLocal(isolate_key_,pvVar3);
  base::Thread::SetThreadLocal(per_isolate_thread_data_key_,pvVar2);
  return;
}

