
/* v8::Unlocker::Initialize(v8::Isolate*) */

void __thiscall v8::Unlocker::Initialize(Unlocker *this,Isolate *param_1)

{
  Mutex *this_00;
  
  *(Isolate **)this = param_1;
  internal::ThreadManager::ArchiveThread(*(ThreadManager **)(param_1 + 0x95f0));
  this_00 = *(Mutex **)(*(long *)this + 0x95f0);
  *(undefined4 *)(this_00 + 0x28) = 0xffffffff;
  base::Mutex::Unlock(this_00);
  return;
}

