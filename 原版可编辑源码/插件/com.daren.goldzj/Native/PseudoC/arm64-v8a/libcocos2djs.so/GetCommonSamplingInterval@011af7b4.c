
/* v8::internal::CpuProfilesCollection::GetCommonSamplingInterval() const */

long __thiscall
v8::internal::CpuProfilesCollection::GetCommonSamplingInterval(CpuProfilesCollection *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(*(long *)(this + 0x30) + 0x18);
  lVar3 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_8);
  if (lVar3 != 0) {
    plVar4 = *(long **)(this + 0x38);
    if (plVar4 != *(long **)(this + 0x40)) {
      lVar5 = 0;
      do {
        lVar1 = 0;
        if (lVar3 != 0) {
          lVar1 = (lVar3 + -1 + (long)*(int *)(*plVar4 + 0x10)) / lVar3;
        }
        if (lVar1 < 2) {
          lVar1 = 1;
        }
        lVar1 = lVar1 * lVar3;
        while (lVar2 = lVar1, lVar2 != 0) {
          lVar1 = 0;
          if (lVar2 != 0) {
            lVar1 = lVar5 / lVar2;
          }
          lVar1 = lVar5 - lVar1 * lVar2;
          lVar5 = lVar2;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != *(long **)(this + 0x40));
      return lVar5;
    }
  }
  return 0;
}

