
/* v8::internal::ScavengingTask::ProcessItems() */

void __thiscall v8::internal::ScavengingTask::ProcessItems(ScavengingTask *this)

{
  Mutex *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ConditionVariable *this_01;
  ConditionVariable CVar8;
  double dVar9;
  double dVar10;
  
  lVar7 = *(long *)(this + 0x60);
  base::Mutex::Lock((Mutex *)(lVar7 + 0x30));
  *(int *)(lVar7 + 0x60) = *(int *)(lVar7 + 0x60) + 1;
  base::Mutex::Unlock((Mutex *)(lVar7 + 0x30));
  plVar4 = (long *)V8::GetCurrentPlatform();
  dVar9 = (double)(**(code **)(*plVar4 + 0x78))();
LAB_01005338:
  do {
    lVar7 = *(long *)(this + 0x38);
    plVar4 = *(long **)(this + 0x28);
    *(long *)(this + 0x38) = lVar7 + 1;
    lVar6 = plVar4[1] - *plVar4 >> 3;
    if (lVar7 == lVar6) break;
    lVar7 = *(long *)(this + 0x30);
    if (lVar7 == lVar6) {
      lVar7 = 0;
      *(undefined8 *)(this + 0x30) = 0;
    }
    *(long *)(this + 0x30) = lVar7 + 1;
    lVar7 = *(long *)(*plVar4 + lVar7 * 8);
    plVar4 = (long *)(lVar7 + 8);
    do {
      if (*plVar4 != 0) {
        ClearExclusiveLocal();
        goto LAB_01005338;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) break;
    Scavenger::ScavengePage(*(Scavenger **)(this + 0x58),*(MemoryChunk **)(lVar7 + 0x10));
    plVar4 = (long *)(lVar7 + 8);
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kProcessing == state_.exchange(kFinished)");
    }
  } while( true );
  do {
    Scavenger::Process(*(Scavenger **)(this + 0x58),*(OneshotBarrier **)(this + 0x60));
    this_01 = *(ConditionVariable **)(this + 0x60);
    this_00 = (Mutex *)(this_01 + 0x30);
    base::Mutex::Lock(this_00);
    if (this_01[0x68] != (ConditionVariable)0x0) {
      base::Mutex::Unlock(this_00);
      break;
    }
    iVar1 = *(int *)(this_01 + 100);
    *(int *)(this_01 + 100) = iVar1 + 1;
    if (iVar1 + 1 == *(int *)(this_01 + 0x60)) {
      this_01[0x68] = (ConditionVariable)0x1;
      base::ConditionVariable::NotifyAll(this_01);
LAB_010053e0:
      CVar8 = this_01[0x68];
    }
    else {
      uVar5 = base::ConditionVariable::WaitFor(this_01,this_00,this_01 + 0x58);
      if ((uVar5 & 1) != 0) goto LAB_010053e0;
      CVar8 = (ConditionVariable)0x1;
      this_01[0x68] = (ConditionVariable)0x1;
    }
    *(int *)(this_01 + 100) = *(int *)(this_01 + 100) + -1;
    base::Mutex::Unlock(this_00);
  } while (CVar8 == (ConditionVariable)0x0);
  Scavenger::Process(*(Scavenger **)(this + 0x58),(OneshotBarrier *)0x0);
  plVar4 = (long *)V8::GetCurrentPlatform();
  dVar10 = (double)(**(code **)(*plVar4 + 0x78))();
  if (FLAG_trace_parallel_scavenge != '\0') {
    PrintIsolate((void *)(*(long *)(this + 0x50) + -0x8850),
                 "scavenge[%p]: time=%.2f copied=%zu promoted=%zu\n",
                 dVar10 * 1000.0 - dVar9 * 1000.0,this,
                 *(undefined8 *)(*(long *)(this + 0x58) + 0x78),
                 *(undefined8 *)(*(long *)(this + 0x58) + 0x80));
    return;
  }
  return;
}

