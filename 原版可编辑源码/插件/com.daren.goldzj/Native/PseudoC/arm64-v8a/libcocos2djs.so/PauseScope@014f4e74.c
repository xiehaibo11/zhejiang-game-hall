
/* v8::internal::ConcurrentMarking::PauseScope::PauseScope(v8::internal::ConcurrentMarking*) */

void __thiscall
v8::internal::ConcurrentMarking::PauseScope::PauseScope(PauseScope *this,ConcurrentMarking *param_1)

{
  byte bVar1;
  PauseScope PVar2;
  
  *(ConcurrentMarking **)this = param_1;
  PVar2 = (PauseScope)0x0;
  if (FLAG_concurrent_marking != '\0') {
    bVar1 = Stop(param_1,0);
    PVar2 = (PauseScope)(bVar1 & 1);
  }
  this[8] = PVar2;
  return;
}

