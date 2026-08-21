
/* v8::internal::WorkerThreadRuntimeCallStats::WorkerThreadRuntimeCallStats() */

void __thiscall
v8::internal::WorkerThreadRuntimeCallStats::WorkerThreadRuntimeCallStats
          (WorkerThreadRuntimeCallStats *this)

{
  undefined4 uVar1;
  
  base::Mutex::Mutex((Mutex *)this);
  this[0x44] = (WorkerThreadRuntimeCallStats)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x40] = (WorkerThreadRuntimeCallStats)0x0;
  uVar1 = ThreadId::GetCurrentThreadId();
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}

