
/* v8::internal::YoungGenerationMarkingTask::ProcessItems() */

void __thiscall
v8::internal::YoungGenerationMarkingTask::ProcessItems(YoungGenerationMarkingTask *this)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  plVar3 = (long *)V8::GetCurrentPlatform();
  dVar7 = (double)(**(code **)(*plVar3 + 0x78))();
LAB_00fe0638:
  do {
    lVar5 = *(long *)(this + 0x38);
    plVar3 = *(long **)(this + 0x28);
    *(long *)(this + 0x38) = lVar5 + 1;
    lVar6 = plVar3[1] - *plVar3 >> 3;
    if (lVar5 == lVar6) {
LAB_00fe06c8:
      EmptyMarkingWorklist(this);
      for (plVar3 = *(long **)(this + 0xa0); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        lVar5 = plVar3[3];
        plVar4 = (long *)(plVar3[2] + 0x100);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar3 = (long *)V8::GetCurrentPlatform();
      dVar8 = (double)(**(code **)(*plVar3 + 0x78))();
      if (FLAG_trace_minor_mc_parallel_marking == '\0') {
        return;
      }
      PrintIsolate((void *)(*(long *)(*(long *)(this + 0x50) + 8) + -0x8850),
                   "marking[%p]: time=%f\n",dVar8 * 1000.0 - dVar7 * 1000.0,this);
      return;
    }
    lVar5 = *(long *)(this + 0x30);
    if (lVar5 == lVar6) {
      lVar5 = 0;
      *(undefined8 *)(this + 0x30) = 0;
    }
    *(long *)(this + 0x30) = lVar5 + 1;
    plVar4 = *(long **)(*plVar3 + lVar5 * 8);
    plVar3 = plVar4 + 1;
    do {
      if (*plVar3 != 0) {
        ClearExclusiveLocal();
        goto LAB_00fe0638;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (plVar4 == (long *)0x0) goto LAB_00fe06c8;
    (**(code **)(*plVar4 + 0x10))(plVar4,this);
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kProcessing == state_.exchange(kFinished)");
    }
    EmptyLocalMarkingWorklist(this);
  } while( true );
}

