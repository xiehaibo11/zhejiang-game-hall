
/* v8::internal::ThreadManager::Unlock() */

void __thiscall v8::internal::ThreadManager::Unlock(ThreadManager *this)

{
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  base::Mutex::Unlock((Mutex *)this);
  return;
}

