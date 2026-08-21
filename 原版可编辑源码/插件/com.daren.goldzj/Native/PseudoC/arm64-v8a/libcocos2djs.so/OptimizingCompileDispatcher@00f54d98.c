
/* v8::internal::OptimizingCompileDispatcher::OptimizingCompileDispatcher(v8::internal::Isolate*) */

void __thiscall
v8::internal::OptimizingCompileDispatcher::OptimizingCompileDispatcher
          (OptimizingCompileDispatcher *this,Isolate *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  
  *(Isolate **)this = param_1;
  uVar1 = FLAG_concurrent_recompilation_queue_length;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = uVar1;
  base::Mutex::Mutex((Mutex *)(this + 0x1c));
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  base::Mutex::Mutex((Mutex *)(this + 0x78));
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  base::Mutex::Mutex((Mutex *)(this + 0xac));
  base::ConditionVariable::ConditionVariable((ConditionVariable *)(this + 0xd4));
  uVar4 = (long)*(int *)(this + 0x10) << 3;
  if ((ulong)(long)*(int *)(this + 0x10) >> 0x3d != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  *(undefined4 *)(this + 0x104) = FLAG_concurrent_recompilation_delay;
  pvVar2 = operator_new__(uVar4,(nothrow_t *)&std::nothrow);
  if (pvVar2 == (void *)0x0) {
    plVar3 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar3 + 0x18))();
    pvVar2 = operator_new__(uVar4,(nothrow_t *)&std::nothrow);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  *(void **)(this + 8) = pvVar2;
  return;
}

