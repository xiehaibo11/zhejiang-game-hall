
/* v8::internal::CpuProfilesCollection::StopProfiling(char const*) */

undefined8 __thiscall
v8::internal::CpuProfilesCollection::StopProfiling(CpuProfilesCollection *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  CpuProfile *pCVar6;
  undefined8 *puVar7;
  
  cVar1 = *param_1;
  base::Semaphore::Wait((Semaphore *)(this + 0x50));
  puVar4 = *(undefined8 **)(this + 0x38);
  puVar7 = *(undefined8 **)(this + 0x40);
  if (((puVar7 != puVar4) && (cVar1 != '\0')) &&
     (iVar2 = strcmp(*(char **)puVar7[-1],param_1), iVar2 != 0)) {
    do {
      if (puVar4 + 1 == puVar7) goto LAB_011af658;
      iVar2 = strcmp(*(char **)puVar7[-2],param_1);
      puVar7 = puVar7 + -1;
    } while (iVar2 != 0);
  }
  if (puVar7 == puVar4) {
LAB_011af658:
    uVar5 = 0;
    goto LAB_011af65c;
  }
  puVar4 = puVar7 + -1;
  CpuProfile::FinishProfile((CpuProfile *)*puVar4);
  puVar3 = *(undefined8 **)(this + 0x20);
  uVar5 = *puVar4;
  if (puVar3 < *(undefined8 **)(this + 0x28)) {
    *puVar4 = 0;
    *puVar3 = uVar5;
    *(long *)(this + 0x20) = *(long *)(this + 0x20) + 8;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>>>
    ::
    __push_back_slow_path<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>>
              ((vector<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CpuProfile,std::__ndk1::default_delete<v8::internal::CpuProfile>>>>
                *)(this + 0x18),(unique_ptr *)puVar4);
  }
  puVar3 = *(undefined8 **)(this + 0x40);
  if (puVar7 == puVar3) {
LAB_011af624:
    do {
      puVar7 = puVar7 + -1;
      pCVar6 = (CpuProfile *)*puVar7;
      *puVar7 = 0;
      if (pCVar6 != (CpuProfile *)0x0) {
        CpuProfile::~CpuProfile(pCVar6);
        operator_delete(pCVar6);
      }
    } while (puVar4 != puVar7);
  }
  else {
    do {
      pCVar6 = (CpuProfile *)*puVar4;
      *puVar4 = puVar4[1];
      puVar4[1] = 0;
      if (pCVar6 != (CpuProfile *)0x0) {
        CpuProfile::~CpuProfile(pCVar6);
        operator_delete(pCVar6);
      }
      puVar4 = puVar4 + 1;
    } while (puVar3 + -1 != puVar4);
    puVar7 = *(undefined8 **)(this + 0x40);
    if (puVar7 != puVar4) goto LAB_011af624;
  }
  *(undefined8 **)(this + 0x40) = puVar4;
LAB_011af65c:
  base::Semaphore::Signal((Semaphore *)(this + 0x50));
  return uVar5;
}

