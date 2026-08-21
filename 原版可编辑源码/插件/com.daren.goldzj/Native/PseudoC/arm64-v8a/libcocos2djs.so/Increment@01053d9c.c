
/* v8::internal::StatsCounterThreadSafe::Increment() */

void __thiscall v8::internal::StatsCounterThreadSafe::Increment(StatsCounterThreadSafe *this)

{
  if (*(long *)(this + 0x10) != 0) {
    base::Mutex::Lock((Mutex *)(this + 0x18));
    **(int **)(this + 0x10) = **(int **)(this + 0x10) + 1;
    base::Mutex::Unlock((Mutex *)(this + 0x18));
    return;
  }
  return;
}

