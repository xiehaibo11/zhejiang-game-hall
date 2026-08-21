
/* v8::platform::DefaultWorkerThreadsTaskRunner::~DefaultWorkerThreadsTaskRunner() */

void __thiscall
v8::platform::DefaultWorkerThreadsTaskRunner::~DefaultWorkerThreadsTaskRunner
          (DefaultWorkerThreadsTaskRunner *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0xe8);
  *(undefined ***)this = &PTR_PostTask_01c98180;
  if (plVar2 != (long *)0x0) {
    plVar3 = *(long **)(this + 0xf0);
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = *(long **)(this + 0xe8);
    }
    *(long **)(this + 0xf0) = plVar2;
    operator_delete(plVar1);
  }
  DelayedTaskQueue::~DelayedTaskQueue((DelayedTaskQueue *)(this + 0x38));
  base::Mutex::~Mutex((Mutex *)(this + 0xc));
  operator_delete(this);
  return;
}

