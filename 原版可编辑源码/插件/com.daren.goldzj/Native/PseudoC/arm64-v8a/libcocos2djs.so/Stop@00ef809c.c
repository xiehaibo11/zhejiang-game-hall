
/* v8::internal::OptimizingCompileDispatcher::Stop() */

void __thiscall v8::internal::OptimizingCompileDispatcher::Stop(OptimizingCompileDispatcher *this)

{
  Mutex *this_00;
  
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
  FlushOutputQueue(this,false);
  return;
}

