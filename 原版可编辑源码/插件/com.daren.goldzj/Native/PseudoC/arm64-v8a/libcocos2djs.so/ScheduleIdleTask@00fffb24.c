
/* v8::internal::ScavengeJob::ScheduleIdleTask(v8::internal::Heap*) */

void __thiscall v8::internal::ScavengeJob::ScheduleIdleTask(ScavengeJob *this,Heap *param_1)

{
  __shared_weak_count *p_Var1;
  Isolate *pIVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  CancelableIdleTask *pCVar7;
  long lVar8;
  CancelableIdleTask *local_48;
  long *local_40;
  __shared_weak_count *local_38;
  
  if ((*this == (ScavengeJob)0x0) && (*(int *)(param_1 + 0x178) != 4)) {
    pIVar2 = (Isolate *)(param_1 + -0x8850);
    plVar5 = (long *)V8::GetCurrentPlatform();
    uVar6 = (**(code **)(*plVar5 + 0x70))(plVar5,pIVar2);
    if ((uVar6 & 1) != 0) {
      *this = (ScavengeJob)0x1;
      pCVar7 = operator_new(0x38);
      CancelableIdleTask::CancelableIdleTask(pCVar7,pIVar2);
      *(undefined ***)pCVar7 = &PTR__CancelableIdleTask_01ca9220;
      *(undefined **)(pCVar7 + 0x20) = &DAT_01ca9250;
      *(Isolate **)(pCVar7 + 0x28) = pIVar2;
      *(ScavengeJob **)(pCVar7 + 0x30) = this;
      plVar5 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar5 + 0x30))(&local_40,plVar5,pIVar2);
      local_48 = pCVar7 + 0x20;
      (**(code **)(*local_40 + 0x20))(local_40,&local_48);
      pCVar7 = local_48;
      local_48 = (CancelableIdleTask *)0x0;
      if (pCVar7 != (CancelableIdleTask *)0x0) {
        (**(code **)(*(long *)pCVar7 + 8))();
      }
      if (local_38 != (__shared_weak_count *)0x0) {
        p_Var1 = local_38 + 8;
        do {
          lVar8 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*(long *)local_38 + 0x10))(local_38);
          std::__ndk1::__shared_weak_count::__release_weak(local_38);
        }
      }
    }
  }
  return;
}

