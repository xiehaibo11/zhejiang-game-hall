
/* v8::internal::RuntimeCallStatEntries::Entry::SetTotal(v8::base::TimeDelta, unsigned long) */

void __thiscall
v8::internal::RuntimeCallStatEntries::Entry::SetTotal(Entry *this,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 local_28;
  
  local_28 = param_2;
  lVar1 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_28);
  if (lVar1 == 0) {
    dVar3 = 0.0;
  }
  else {
    lVar2 = *(long *)(this + 8);
    lVar1 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_28);
    dVar3 = ((double)lVar2 * 100.0) / (double)lVar1;
  }
  dVar4 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x10));
  *(double *)(this + 0x18) = dVar3;
  *(double *)(this + 0x20) = (dVar4 * 100.0) / (double)param_3;
  return;
}

