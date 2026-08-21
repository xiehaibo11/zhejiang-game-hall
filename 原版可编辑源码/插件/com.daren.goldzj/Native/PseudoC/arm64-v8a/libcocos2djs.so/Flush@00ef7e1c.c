
/* v8::internal::OptimizingCompileDispatcher::Flush(v8::internal::BlockingBehavior) */

void __thiscall
v8::internal::OptimizingCompileDispatcher::Flush(OptimizingCompileDispatcher *this,int param_2)

{
  Mutex *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (param_2 == 1) {
    if (FLAG_block_concurrent_recompilation != '\0') {
      Unblock(this);
    }
    base::Mutex::Lock((Mutex *)(this + 0x1c));
    iVar1 = *(int *)(this + 0x14);
    while (0 < iVar1) {
      iVar2 = *(int *)(this + 0x18);
      iVar3 = *(int *)(this + 0x10);
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = iVar2 / iVar3;
      }
      uVar5 = *(undefined8 *)(*(long *)(this + 8) + (long)(iVar2 - iVar4 * iVar3) * 8);
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = (iVar2 + 1) / iVar3;
      }
      *(int *)(this + 0x14) = iVar1 + -1;
      *(int *)(this + 0x18) = (iVar2 + 1) - iVar4 * iVar3;
      FUN_00ef7b88(uVar5,1);
      iVar1 = *(int *)(this + 0x14);
    }
    FlushOutputQueue(this,true);
    if (FLAG_trace_concurrent_recompilation != '\0') {
      PrintF("  ** Flushed concurrent recompilation queues (not blocking).\n");
    }
    base::Mutex::Unlock((Mutex *)(this + 0x1c));
    return;
  }
  *(undefined4 *)(this + 0xa0) = 1;
  if (FLAG_block_concurrent_recompilation != '\0') {
    Unblock(this);
  }
  this_00 = (Mutex *)(this + 0xac);
  base::Mutex::Lock(this_00);
  if (0 < *(int *)(this + 0xa8)) {
    do {
      base::ConditionVariable::Wait((ConditionVariable *)(this + 0xd4),this_00);
    } while (0 < *(int *)(this + 0xa8));
  }
  *(undefined4 *)(this + 0xa0) = 0;
  base::Mutex::Unlock(this_00);
  FlushOutputQueue(this,true);
  if (FLAG_trace_concurrent_recompilation == '\0') {
    return;
  }
  PrintF("  ** Flushed concurrent recompilation queues.\n");
  return;
}

