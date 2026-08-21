
/* v8::internal::ConcurrentMarking::IsStopped() */

bool __thiscall v8::internal::ConcurrentMarking::IsStopped(ConcurrentMarking *this)

{
  bool bVar1;
  
  if (FLAG_concurrent_marking == '\0') {
    bVar1 = true;
  }
  else {
    base::Mutex::Lock((Mutex *)(this + 0x434));
    bVar1 = *(int *)(this + 0x48c) == 0;
    base::Mutex::Unlock((Mutex *)(this + 0x434));
  }
  return bVar1;
}

