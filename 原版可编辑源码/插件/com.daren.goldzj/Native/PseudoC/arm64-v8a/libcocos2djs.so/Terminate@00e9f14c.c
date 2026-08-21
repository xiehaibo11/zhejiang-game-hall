
/* v8::platform::DefaultWorkerThreadsTaskRunner::Terminate() */

void __thiscall
v8::platform::DefaultWorkerThreadsTaskRunner::Terminate(DefaultWorkerThreadsTaskRunner *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  base::Mutex::Lock((Mutex *)(this + 0xc));
  this[8] = (DefaultWorkerThreadsTaskRunner)0x1;
  DelayedTaskQueue::Terminate((DelayedTaskQueue *)(this + 0x38));
  plVar1 = *(long **)(this + 0xe8);
  plVar3 = *(long **)(this + 0xf0);
  while (plVar3 != plVar1) {
    plVar3 = plVar3 + -1;
    plVar2 = (long *)*plVar3;
    *plVar3 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(long **)(this + 0xf0) = plVar1;
  *(undefined4 *)(this + 0x108) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0xc));
  return;
}

