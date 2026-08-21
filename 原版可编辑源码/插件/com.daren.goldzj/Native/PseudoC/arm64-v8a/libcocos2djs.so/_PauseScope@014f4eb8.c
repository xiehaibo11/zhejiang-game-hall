
/* v8::internal::ConcurrentMarking::PauseScope::~PauseScope() */

void __thiscall v8::internal::ConcurrentMarking::PauseScope::~PauseScope(PauseScope *this)

{
  Mutex *this_00;
  ConcurrentMarking *this_01;
  
  if ((this[8] != (PauseScope)0x0) &&
     (this_01 = *(ConcurrentMarking **)this, *(int *)(*(long *)this_01 + 0x178) != 4)) {
    this_00 = (Mutex *)(this_01 + 0x434);
    base::Mutex::Lock(this_00);
    if ((0 < *(int *)(this_01 + 0x4d8)) && (*(int *)(this_01 + 0x48c) == *(int *)(this_01 + 0x4d8)))
    {
      base::Mutex::Unlock(this_00);
      return;
    }
    base::Mutex::Unlock(this_00);
    if (((*(long *)(*(long *)(this_01 + 8) + 0x2a8) != 0) ||
        (*(long *)(*(long *)(this_01 + 0x20) + 0x818) != 0)) ||
       (*(long *)(*(long *)(this_01 + 0x20) + 0xd88) != 0)) {
      ScheduleTasks(this_01);
      return;
    }
  }
  return;
}

