
/* v8::Locker::~Locker() */

void __thiscall v8::Locker::~Locker(Locker *this)

{
  Mutex *this_00;
  ThreadManager *this_01;
  
  if (*this != (Locker)0x0) {
    this_01 = *(ThreadManager **)(*(long *)(this + 8) + 0x95f0);
    if (this[1] == (Locker)0x0) {
      internal::ThreadManager::ArchiveThread(this_01);
    }
    else {
      internal::HandleScopeImplementer::FreeThreadResources();
      internal::ThreadLocalTop::Free((ThreadLocalTop *)(*(long *)(this_01 + 0x48) + 0x2bb8));
      internal::StackGuard::FreeThreadResources((StackGuard *)(*(long *)(this_01 + 0x48) + 0x48));
      internal::RegExpStack::ThreadLocal::ResetToStaticStack
                ((ThreadLocal *)(*(RegExpStack **)(*(long *)(this_01 + 0x48) + 0xb618) + 0x200),
                 *(RegExpStack **)(*(long *)(this_01 + 0x48) + 0xb618));
      internal::Bootstrapper::FreeThreadResources();
    }
    this_00 = *(Mutex **)(*(long *)(this + 8) + 0x95f0);
    *(undefined4 *)(this_00 + 0x28) = 0xffffffff;
    base::Mutex::Unlock(this_00);
    return;
  }
  return;
}

