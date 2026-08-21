
/* v8::internal::CpuProfiler::StartProcessorIfNotStarted() */

void __thiscall v8::internal::CpuProfiler::StartProcessorIfNotStarted(CpuProfiler *this)

{
  long lVar1;
  CpuProfiler CVar2;
  ProfileGenerator *this_00;
  void *pvVar3;
  undefined8 uVar4;
  ProfilerEventsProcessor *this_01;
  Sampler *this_02;
  long *plVar5;
  Semaphore *pSVar6;
  ulong uVar7;
  long lVar8;
  Thread *this_03;
  Isolate *pIVar9;
  
  if (*(ProfilerEventsProcessor **)(this + 0x30) == (ProfilerEventsProcessor *)0x0) {
    if (*(long *)(this + 0x40) == 0) {
      EnableLogging(this);
      lVar8 = *(long *)(this + 0x28);
    }
    else {
      lVar8 = *(long *)(this + 0x28);
    }
    if (lVar8 == 0) {
      this_00 = operator_new(0x10);
      ProfileGenerator::ProfileGenerator
                (this_00,*(CpuProfilesCollection **)(this + 0x20),(CodeMap *)(this + 0x58));
      pvVar3 = *(void **)(this + 0x28);
      *(ProfileGenerator **)(this + 0x28) = this_00;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
    }
    uVar4 = CpuProfilesCollection::GetCommonSamplingInterval
                      (*(CpuProfilesCollection **)(this + 0x20));
    this_01 = (ProfilerEventsProcessor *)AlignedAlloc(0x801c0,0x40);
    pIVar9 = *(Isolate **)this;
    CVar2 = this[0x10];
    ProfilerEventsProcessor::ProfilerEventsProcessor
              (this_01,pIVar9,*(ProfileGenerator **)(this + 0x28),
               (ProfilerCodeObserver *)(this + 0x48));
    *(undefined ***)(this_01 + 0x30) = &PTR_CodeEventHandler_01cb6378;
    *(undefined ***)this_01 = &PTR__SamplingEventsProcessor_01cb6338;
    lVar8 = 0;
    do {
      lVar1 = lVar8 + 0x1040;
      *(undefined4 *)(this_01 + lVar8 + 0x188) = 5;
      *(undefined8 *)(this_01 + lVar8 + 0x1190) = 0;
      *(undefined8 *)(this_01 + lVar8 + 0x198) = 0;
      *(undefined8 *)(this_01 + lVar8 + 400) = 0;
      *(undefined8 *)(this_01 + lVar8 + 0x11a8) = 0;
      *(undefined8 *)(this_01 + lVar8 + 0x11a0) = 0;
      *(ushort *)(this_01 + lVar8 + 0x1198) = *(ushort *)(this_01 + lVar8 + 0x1198) & 0xfc00 | 0x200
      ;
      *(undefined4 *)(this_01 + lVar8 + 0x11b0) = 0;
      lVar8 = lVar1;
    } while (lVar1 != 0x7ff80);
    *(ProfilerEventsProcessor **)(this_01 + 0x80100) = this_01 + 0x180;
    *(ProfilerEventsProcessor **)(this_01 + 0x80140) = this_01 + 0x180;
    this_02 = operator_new(0x38);
    sampler::Sampler::Sampler(this_02,(Isolate *)pIVar9);
    *(ProfilerEventsProcessor **)(this_02 + 0x30) = this_01;
    *(undefined ***)this_02 = &PTR__Sampler_01cb63c8;
    *(Sampler **)(this_01 + 0x80180) = this_02;
    *(undefined8 *)(this_01 + 0x80188) = uVar4;
    *(CpuProfiler *)(this_01 + 0x80190) = CVar2;
    sampler::Sampler::Start(this_02);
    plVar5 = *(long **)(this + 0x30);
    *(ProfilerEventsProcessor **)(this + 0x30) = this_01;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
      this_01 = *(ProfilerEventsProcessor **)(this + 0x30);
    }
    this[0xb0] = (CpuProfiler)0x1;
    ProfilerEventsProcessor::AddCurrentStack(this_01,false);
    this_03 = *(Thread **)(this + 0x30);
    pSVar6 = operator_new(0x10);
    base::Semaphore::Semaphore(pSVar6,0);
    *(Semaphore **)(this_03 + 0x28) = pSVar6;
    uVar7 = base::Thread::Start(this_03);
    if ((uVar7 & 1) != 0) {
      base::Semaphore::Wait(*(Semaphore **)(this_03 + 0x28));
      pSVar6 = *(Semaphore **)(this_03 + 0x28);
      if (pSVar6 != (Semaphore *)0x0) {
        base::Semaphore::~Semaphore(pSVar6);
        operator_delete(pSVar6);
      }
      *(undefined8 *)(this_03 + 0x28) = 0;
    }
    return;
  }
  ProfilerEventsProcessor::AddCurrentStack(*(ProfilerEventsProcessor **)(this + 0x30),false);
  return;
}

