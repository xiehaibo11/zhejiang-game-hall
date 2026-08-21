
/* v8::internal::CpuProfilesCollection::AddPathToCurrentProfiles(v8::base::TimeTicks,
   std::__ndk1::vector<v8::internal::ProfileStackFrame,
   std::__ndk1::allocator<v8::internal::ProfileStackFrame> > const&, int, bool, v8::base::TimeDelta)
    */

void __thiscall
v8::internal::CpuProfilesCollection::AddPathToCurrentProfiles
          (CpuProfilesCollection *this,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          uint param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  base::Semaphore::Wait((Semaphore *)(this + 0x50));
  puVar1 = *(undefined8 **)(this + 0x40);
  if (*(undefined8 **)(this + 0x38) != puVar1) {
    puVar2 = *(undefined8 **)(this + 0x38);
    do {
      puVar3 = puVar2 + 1;
      CpuProfile::AddPath((CpuProfile *)*puVar2,param_2,param_3,param_4,param_5 & 1,param_6);
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
  }
  base::Semaphore::Signal((Semaphore *)(this + 0x50));
  return;
}

