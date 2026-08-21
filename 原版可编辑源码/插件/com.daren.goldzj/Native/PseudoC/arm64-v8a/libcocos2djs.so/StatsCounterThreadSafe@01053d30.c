
/* v8::internal::StatsCounterThreadSafe::StatsCounterThreadSafe(v8::internal::Counters*, char
   const*) */

void __thiscall
v8::internal::StatsCounterThreadSafe::StatsCounterThreadSafe
          (StatsCounterThreadSafe *this,Counters *param_1,char *param_2)

{
  *(Counters **)this = param_1;
  *(char **)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  base::Mutex::Mutex((Mutex *)(this + 0x18));
  return;
}

