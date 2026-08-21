
/* v8::internal::Sweeper::ScheduleIncrementalSweepingTask() */

void __thiscall v8::internal::Sweeper::ScheduleIncrementalSweepingTask(Sweeper *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  CancelableTask *pCVar5;
  long lVar6;
  CancelableTask *local_48;
  undefined8 *local_40;
  __shared_weak_count *local_38;
  
  if (this[0xf8] == (Sweeper)0x0) {
    lVar6 = *(long *)this;
    this[0xf8] = (Sweeper)0x1;
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x30))(&local_40,plVar4,lVar6 + -0x8850);
    lVar6 = *(long *)this;
    pCVar5 = operator_new(0x38);
    CancelableTask::CancelableTask(pCVar5,(Isolate *)(lVar6 + -0x8850));
    *(undefined ***)pCVar5 = &PTR__CancelableTask_01caa3e8;
    local_48 = pCVar5 + 0x20;
    *(undefined **)local_48 = &DAT_01caa418;
    *(Isolate **)(pCVar5 + 0x28) = (Isolate *)(lVar6 + -0x8850);
    *(Sweeper **)(pCVar5 + 0x30) = this;
    (**(code **)*local_40)(local_40,&local_48);
    pCVar5 = local_48;
    local_48 = (CancelableTask *)0x0;
    if (pCVar5 != (CancelableTask *)0x0) {
      (**(code **)(*(long *)pCVar5 + 8))();
    }
    if (local_38 != (__shared_weak_count *)0x0) {
      p_Var1 = local_38 + 8;
      do {
        lVar6 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)local_38 + 0x10))(local_38);
        std::__ndk1::__shared_weak_count::__release_weak(local_38);
      }
    }
  }
  return;
}

