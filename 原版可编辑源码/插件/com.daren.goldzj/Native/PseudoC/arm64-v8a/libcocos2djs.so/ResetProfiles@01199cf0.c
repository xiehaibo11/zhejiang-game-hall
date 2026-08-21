
/* v8::internal::CpuProfiler::ResetProfiles() */

void __thiscall v8::internal::CpuProfiler::ResetProfiles(CpuProfiler *this)

{
  CpuProfilesCollection *this_00;
  void *pvVar1;
  long *plVar2;
  CpuProfilesCollection *this_01;
  
  this_00 = operator_new(0x60);
  CpuProfilesCollection::CpuProfilesCollection(this_00,*(Isolate **)this);
  this_01 = *(CpuProfilesCollection **)(this + 0x20);
  *(CpuProfilesCollection **)(this + 0x20) = this_00;
  if (this_01 != (CpuProfilesCollection *)0x0) {
    CpuProfilesCollection::~CpuProfilesCollection(this_01);
    operator_delete(this_01);
    this_00 = *(CpuProfilesCollection **)(this + 0x20);
  }
  *(CpuProfiler **)(this_00 + 0x30) = this;
  pvVar1 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  if (*(long *)(this + 0x40) == 0) {
    plVar2 = *(long **)(this + 0x38);
    *(undefined8 *)(this + 0x38) = 0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01199d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}

