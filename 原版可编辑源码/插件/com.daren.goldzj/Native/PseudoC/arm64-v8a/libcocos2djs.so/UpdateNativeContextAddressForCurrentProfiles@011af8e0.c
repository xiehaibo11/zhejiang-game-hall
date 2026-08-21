
/* v8::internal::CpuProfilesCollection::UpdateNativeContextAddressForCurrentProfiles(unsigned long,
   unsigned long) */

void __thiscall
v8::internal::CpuProfilesCollection::UpdateNativeContextAddressForCurrentProfiles
          (CpuProfilesCollection *this,ulong param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  
  base::Semaphore::Wait((Semaphore *)(this + 0x50));
  plVar2 = *(long **)(this + 0x40);
  for (plVar1 = *(long **)(this + 0x38); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    puVar3 = *(ulong **)(*plVar1 + 0x20);
    if ((puVar3 != (ulong *)0x0) && (*puVar3 == param_1)) {
      *puVar3 = param_2;
    }
  }
  base::Semaphore::Signal((Semaphore *)(this + 0x50));
  return;
}

