
/* v8::internal::ThreadManager::ArchiveThread() */

void __thiscall v8::internal::ThreadManager::ArchiveThread(ThreadManager *this)

{
  undefined4 uVar1;
  long lVar2;
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
  *(undefined8 *)(*(long *)(this_00 + 0x10) + 0x18) = *(undefined8 *)(this_00 + 0x18);
  *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x10) = *(undefined8 *)(this_00 + 0x10);
  lVar2 = Isolate::FindOrAllocatePerThreadDataForThisThread(*(Isolate **)(this + 0x48));
  *(ThreadState **)(lVar2 + 0x18) = this_00;
  uVar1 = ThreadId::GetCurrentThreadId();
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(ThreadState **)(this + 0x30) = this_00;
  uVar1 = ThreadId::GetCurrentThreadId();
  *(undefined4 *)this_00 = uVar1;
  return;
}

