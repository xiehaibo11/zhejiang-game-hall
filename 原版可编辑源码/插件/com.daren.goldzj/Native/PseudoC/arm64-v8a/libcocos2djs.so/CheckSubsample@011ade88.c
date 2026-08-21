
/* v8::internal::CpuProfile::CheckSubsample(v8::base::TimeDelta) */

undefined8 __thiscall v8::internal::CpuProfile::CheckSubsample(CpuProfile *this,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(this + 0xb0);
    *(long *)(this + 0xb0) = lVar1 - param_2;
    if (0 < lVar1 - param_2) {
      return 0;
    }
    *(long *)(this + 0xb0) = (long)*(int *)(this + 0x10);
  }
  return 1;
}

