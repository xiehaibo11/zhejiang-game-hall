
/* v8::internal::WorkerThreadRuntimeCallStats::~WorkerThreadRuntimeCallStats() */

void __thiscall
v8::internal::WorkerThreadRuntimeCallStats::~WorkerThreadRuntimeCallStats
          (WorkerThreadRuntimeCallStats *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (this[0x40] != (WorkerThreadRuntimeCallStats)0x0) {
    base::Thread::DeleteThreadLocalKey(*(int *)(this + 0x44));
  }
  puVar3 = *(undefined8 **)(this + 0x28);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(this + 0x30);
    puVar2 = puVar3;
    if (puVar4 != puVar3) {
      do {
        puVar4 = puVar4 + -1;
        pvVar1 = (void *)*puVar4;
        *puVar4 = 0;
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
        }
      } while (puVar3 != puVar4);
      puVar2 = *(undefined8 **)(this + 0x28);
    }
    *(undefined8 **)(this + 0x30) = puVar3;
    operator_delete(puVar2);
  }
  base::Mutex::~Mutex((Mutex *)this);
  return;
}

