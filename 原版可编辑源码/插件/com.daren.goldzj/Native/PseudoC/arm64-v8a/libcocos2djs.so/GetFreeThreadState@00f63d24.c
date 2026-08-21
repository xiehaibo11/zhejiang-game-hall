
/* v8::internal::ThreadManager::GetFreeThreadState() */

ThreadState * __thiscall v8::internal::ThreadManager::GetFreeThreadState(ThreadManager *this)

{
  ThreadState *this_00;
  
  this_00 = *(ThreadState **)(*(ThreadState **)(this + 0x38) + 0x10);
  if (this_00 == *(ThreadState **)(this + 0x38)) {
    this_00 = operator_new(0x28);
    *(undefined8 *)(this_00 + 8) = 0;
    *(ThreadState **)(this_00 + 0x10) = this_00;
    *(undefined4 *)this_00 = 0xffffffff;
    *(ThreadState **)(this_00 + 0x18) = this_00;
    *(ThreadManager **)(this_00 + 0x20) = this;
    ThreadState::AllocateSpace(this_00);
  }
  return this_00;
}

