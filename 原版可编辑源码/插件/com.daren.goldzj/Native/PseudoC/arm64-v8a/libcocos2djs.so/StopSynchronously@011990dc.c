
/* v8::internal::ProfilerEventsProcessor::StopSynchronously() */

void __thiscall
v8::internal::ProfilerEventsProcessor::StopSynchronously(ProfilerEventsProcessor *this)

{
  ProfilerEventsProcessor *pPVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  pPVar1 = this + 0x48;
  do {
    iVar2 = *(int *)pPVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pPVar1,0x10);
    if (bVar4) {
      *(int *)pPVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 != 0) {
    base::Mutex::Lock((Mutex *)(this + 0x7c));
    base::ConditionVariable::NotifyOne((ConditionVariable *)(this + 0x4c));
    base::Mutex::Unlock((Mutex *)(this + 0x7c));
    base::Thread::Join((Thread *)this);
    return;
  }
  return;
}

