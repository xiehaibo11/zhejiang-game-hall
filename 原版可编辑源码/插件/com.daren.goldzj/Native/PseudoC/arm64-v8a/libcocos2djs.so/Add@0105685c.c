
/* v8::internal::RuntimeCallCounter::Add(v8::internal::RuntimeCallCounter*) */

void __thiscall
v8::internal::RuntimeCallCounter::Add(RuntimeCallCounter *this,RuntimeCallCounter *param_1)

{
  long lVar1;
  undefined8 local_8;
  
  *(long *)(this + 8) = *(long *)(this + 8) + *(long *)(param_1 + 8);
  local_8 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_8);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + lVar1;
  return;
}

