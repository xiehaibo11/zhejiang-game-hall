
/* v8::internal::CpuProfiler::StopProcessor() */

void __thiscall v8::internal::CpuProfiler::StopProcessor(CpuProfiler *this)

{
  Thread *pTVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  Thread *this_00;
  
  this_00 = *(Thread **)(this + 0x30);
  this[0xb0] = (CpuProfiler)0x0;
  pTVar1 = this_00 + 0x48;
  do {
    iVar2 = *(int *)pTVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pTVar1,0x10);
    if (bVar4) {
      *(int *)pTVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 != 0) {
    base::Mutex::Lock((Mutex *)(this_00 + 0x7c));
    base::ConditionVariable::NotifyOne((ConditionVariable *)(this_00 + 0x4c));
    base::Mutex::Unlock((Mutex *)(this_00 + 0x7c));
    base::Thread::Join(this_00);
  }
  plVar6 = *(long **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if ((*(int *)(this + 0xc) == 0) && (plVar6 = *(long **)(this + 0x40), plVar6 != (long *)0x0)) {
    *(undefined8 *)(this + 0x40) = 0;
    Logger::RemoveCodeEventListener(*(Logger **)(*plVar6 + 0x9558),(CodeEventListener *)plVar6[1]);
    lVar5 = *(long *)(*plVar6 + 0xb800) + -1;
    *(long *)(*plVar6 + 0xb800) = lVar5;
    if (lVar5 == 0) {
      *(undefined1 *)(*plVar6 + 0xb7fc) = 0;
    }
    operator_delete(plVar6);
    return;
  }
  return;
}

