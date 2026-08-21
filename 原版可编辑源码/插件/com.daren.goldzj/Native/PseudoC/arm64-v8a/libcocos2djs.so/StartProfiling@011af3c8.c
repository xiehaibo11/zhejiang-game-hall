
/* v8::internal::CpuProfilesCollection::StartProfiling(char const*, v8::CpuProfilingOptions) */

undefined8 __thiscall
v8::internal::CpuProfilesCollection::StartProfiling
          (CpuProfilesCollection *this,char *param_1,undefined8 *param_3)

{
  Semaphore *this_00;
  ulong *puVar1;
  int iVar2;
  undefined8 uVar3;
  CpuProfile *pCVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_68;
  undefined4 local_60;
  ulong *local_58;
  CpuProfile *local_38;
  
  this_00 = (Semaphore *)(this + 0x50);
  base::Semaphore::Wait(this_00);
  puVar5 = *(undefined8 **)(this + 0x38);
  puVar6 = *(undefined8 **)(this + 0x40);
  if ((int)((ulong)((long)puVar6 - (long)puVar5) >> 3) < 100) {
    do {
      if (puVar5 == puVar6) {
        pCVar4 = operator_new(0xb8);
        local_68 = *param_3;
        local_60 = *(undefined4 *)(param_3 + 1);
        uVar3 = *(undefined8 *)(this + 0x30);
        local_58 = (ulong *)0x0;
        if ((ulong *)param_3[2] != (ulong *)0x0) {
          local_58 = (ulong *)v8::V8::CopyGlobalReference((ulong *)param_3[2]);
        }
        puVar1 = local_58;
        CpuProfile::CpuProfile(pCVar4,uVar3,param_1,&local_68);
        local_38 = pCVar4;
        if (*(undefined8 **)(this + 0x40) < *(undefined8 **)(this + 0x48)) {
          **(undefined8 **)(this + 0x40) = pCVar4;
          *(long *)(this + 0x40) = *(long *)(this + 0x40) + 8;
        }
        else {
          std::__ndk1::
          vector<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>>>
          ::__emplace_back_slow_path<v8::internal::CpuProfile*>
                    ((vector<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>>>
                      *)(this + 0x38),&local_38);
        }
        if (puVar1 != (ulong *)0x0) {
          v8::V8::DisposeGlobal(puVar1);
          local_58 = (ulong *)0x0;
        }
        break;
      }
      iVar2 = strcmp(*(char **)*puVar5,param_1);
      puVar5 = puVar5 + 1;
    } while (iVar2 != 0);
    base::Semaphore::Signal(this_00);
    uVar3 = 1;
  }
  else {
    base::Semaphore::Signal(this_00);
    uVar3 = 0;
  }
  return uVar3;
}

