
/* v8::internal::WorkerThreadRuntimeCallStats::GetKey() */

ulong __thiscall
v8::internal::WorkerThreadRuntimeCallStats::GetKey(WorkerThreadRuntimeCallStats *this)

{
  ulong uVar1;
  
  if (this[0x40] == (WorkerThreadRuntimeCallStats)0x0) {
    uVar1 = base::Thread::CreateThreadLocalKey();
    if (this[0x40] == (WorkerThreadRuntimeCallStats)0x0) {
      this[0x40] = (WorkerThreadRuntimeCallStats)0x1;
    }
    *(int *)(this + 0x44) = (int)uVar1;
  }
  else {
    uVar1 = (ulong)*(uint *)(this + 0x44);
  }
  return uVar1;
}

