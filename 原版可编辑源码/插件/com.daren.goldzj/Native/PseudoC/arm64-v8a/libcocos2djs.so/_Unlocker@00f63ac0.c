
/* v8::Unlocker::~Unlocker() */

void __thiscall v8::Unlocker::~Unlocker(Unlocker *this)

{
  undefined4 uVar1;
  Mutex *this_00;
  
  this_00 = *(Mutex **)(*(long *)this + 0x95f0);
  base::Mutex::Lock(this_00);
  uVar1 = internal::ThreadId::GetCurrentThreadId();
  *(undefined4 *)(this_00 + 0x28) = uVar1;
  internal::ThreadManager::RestoreThread(*(ThreadManager **)(*(long *)this + 0x95f0));
  return;
}

