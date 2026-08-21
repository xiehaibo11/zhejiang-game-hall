
/* v8::internal::StatsCounterThreadSafe::Set(int) */

void __thiscall v8::internal::StatsCounterThreadSafe::Set(StatsCounterThreadSafe *this,int param_1)

{
  if (*(long *)(this + 0x10) != 0) {
    base::Mutex::Lock((Mutex *)(this + 0x18));
    **(int **)(this + 0x10) = param_1;
    base::Mutex::Unlock((Mutex *)(this + 0x18));
    return;
  }
  return;
}

