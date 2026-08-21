
/* v8::internal::ThreadManager::Lock() */

void __thiscall v8::internal::ThreadManager::Lock(ThreadManager *this)

{
  undefined4 uVar1;
  
  base::Mutex::Lock((Mutex *)this);
  uVar1 = ThreadId::GetCurrentThreadId();
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}

