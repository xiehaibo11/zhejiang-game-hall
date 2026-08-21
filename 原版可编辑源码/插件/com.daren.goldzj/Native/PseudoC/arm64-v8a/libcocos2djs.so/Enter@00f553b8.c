
/* v8::internal::Isolate::Enter() */

void __thiscall v8::internal::Isolate::Enter(Isolate *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  
  puVar1 = (undefined8 *)base::Thread::GetThreadLocal(per_isolate_thread_data_key_);
  if (puVar1 == (undefined8 *)0x0) {
    pIVar5 = (Isolate *)0x0;
  }
  else {
    pIVar5 = (Isolate *)*puVar1;
    if (pIVar5 == this) {
      **(int **)(this + 0x9488) = **(int **)(this + 0x9488) + 1;
      return;
    }
  }
  pvVar2 = (void *)FindOrAllocatePerThreadDataForThisThread(this);
  puVar3 = operator_new(0x20);
  uVar4 = *(undefined8 *)(this + 0x9488);
  *puVar3 = 1;
  *(undefined8 **)(puVar3 + 2) = puVar1;
  *(Isolate **)(puVar3 + 4) = pIVar5;
  *(undefined8 *)(puVar3 + 6) = uVar4;
  *(undefined4 **)(this + 0x9488) = puVar3;
  base::Thread::SetThreadLocal(isolate_key_,this);
  base::Thread::SetThreadLocal(per_isolate_thread_data_key_,pvVar2);
  *(undefined4 *)(this + 0x2bd0) = *(undefined4 *)((long)pvVar2 + 8);
  return;
}

