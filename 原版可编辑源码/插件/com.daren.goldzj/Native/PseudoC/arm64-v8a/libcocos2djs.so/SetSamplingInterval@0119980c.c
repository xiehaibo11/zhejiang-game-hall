
/* v8::internal::SamplingEventsProcessor::SetSamplingInterval(v8::base::TimeDelta) */

void __thiscall
v8::internal::SamplingEventsProcessor::SetSamplingInterval
          (SamplingEventsProcessor *this,long param_2)

{
  SamplingEventsProcessor *pSVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  Semaphore *pSVar5;
  ulong uVar6;
  
  if (*(long *)(this + 0x80188) != param_2) {
    pSVar1 = this + 0x48;
    do {
      iVar2 = *(int *)pSVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pSVar1,0x10);
      if (bVar4) {
        *(int *)pSVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 != 0) {
      base::Mutex::Lock((Mutex *)(this + 0x7c));
      base::ConditionVariable::NotifyOne((ConditionVariable *)(this + 0x4c));
      base::Mutex::Unlock((Mutex *)(this + 0x7c));
      base::Thread::Join((Thread *)this);
    }
    *(long *)(this + 0x80188) = param_2;
    *(undefined4 *)(this + 0x48) = 1;
    pSVar5 = ::operator_new(0x10);
    base::Semaphore::Semaphore(pSVar5,0);
    *(Semaphore **)(this + 0x28) = pSVar5;
    uVar6 = base::Thread::Start((Thread *)this);
    if ((uVar6 & 1) != 0) {
      base::Semaphore::Wait(*(Semaphore **)(this + 0x28));
      pSVar5 = *(Semaphore **)(this + 0x28);
      if (pSVar5 != (Semaphore *)0x0) {
        base::Semaphore::~Semaphore(pSVar5);
        ::operator_delete(pSVar5);
      }
      *(undefined8 *)(this + 0x28) = 0;
    }
  }
  return;
}

