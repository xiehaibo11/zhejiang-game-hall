
/* v8::internal::ConcurrentMarking::RescheduleTasksIfNeeded() */

void __thiscall v8::internal::ConcurrentMarking::RescheduleTasksIfNeeded(ConcurrentMarking *this)

{
  Mutex *this_00;
  
  if (*(int *)(*(long *)this + 0x178) != 4) {
    this_00 = (Mutex *)(this + 0x434);
    base::Mutex::Lock(this_00);
    if ((0 < *(int *)(this + 0x4d8)) && (*(int *)(this + 0x48c) == *(int *)(this + 0x4d8))) {
      base::Mutex::Unlock(this_00);
      return;
    }
    base::Mutex::Unlock(this_00);
    if ((*(long *)(*(long *)(this + 8) + 0x2a8) != 0) ||
       ((*(long *)(*(long *)(this + 0x20) + 0x818) != 0 ||
        (*(long *)(*(long *)(this + 0x20) + 0xd88) != 0)))) {
      ScheduleTasks(this);
      return;
    }
  }
  return;
}

