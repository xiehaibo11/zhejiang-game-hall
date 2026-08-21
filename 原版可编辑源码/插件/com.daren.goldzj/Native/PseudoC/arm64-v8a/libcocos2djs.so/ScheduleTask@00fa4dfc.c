
/* v8::internal::IncrementalMarkingJob::ScheduleTask(v8::internal::Heap*,
   v8::internal::IncrementalMarkingJob::TaskType) */

void __thiscall
v8::internal::IncrementalMarkingJob::ScheduleTask
          (IncrementalMarkingJob *this,long param_1,int param_3)

{
  __shared_weak_count *p_Var1;
  Isolate *pIVar2;
  IncrementalMarkingJob *pIVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  CancelableTask *pCVar8;
  CancelableTask *pCVar9;
  long lVar10;
  CancelableTask *local_70;
  CancelableTask *local_68;
  CancelableTask *local_60;
  CancelableTask *local_58;
  long *local_50;
  __shared_weak_count *local_48;
  
  pIVar3 = this;
  if (param_3 != 0) {
    pIVar3 = this + 1;
  }
  if ((*pIVar3 == (IncrementalMarkingJob)0x0) && (*(int *)(param_1 + 0x178) != 4)) {
    pIVar2 = (Isolate *)(param_1 + -0x8850);
    pIVar3 = this;
    if (param_3 != 0) {
      pIVar3 = this + 1;
    }
    *pIVar3 = (IncrementalMarkingJob)0x1;
    plVar6 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar6 + 0x30))(&local_50,plVar6,pIVar2);
    if (param_3 == 0) {
      uVar7 = (**(code **)(*local_50 + 0x30))();
      pCVar8 = operator_new(0x40);
      CancelableTask::CancelableTask(pCVar8,pIVar2);
      *(undefined ***)pCVar8 = &PTR__CancelableTask_01ca7fa8;
      pCVar9 = pCVar8 + 0x20;
      *(undefined **)pCVar9 = &DAT_01ca7fd8;
      *(Isolate **)(pCVar8 + 0x28) = pIVar2;
      *(IncrementalMarkingJob **)(pCVar8 + 0x30) = this;
      if ((uVar7 & 1) == 0) {
        *(undefined8 *)(pCVar8 + 0x38) = 0;
        local_60 = pCVar9;
        (**(code **)*local_50)(local_50,&local_60);
        pCVar8 = local_60;
        local_60 = (CancelableTask *)0x0;
      }
      else {
        *(undefined8 *)(pCVar8 + 0x38) = 2;
        local_58 = pCVar9;
        (**(code **)(*local_50 + 8))(local_50,&local_58);
        pCVar8 = local_58;
        local_58 = (CancelableTask *)0x0;
      }
    }
    else {
      uVar7 = (**(code **)(*local_50 + 0x38))();
      pCVar8 = operator_new(0x40);
      CancelableTask::CancelableTask(pCVar8,pIVar2);
      *(undefined ***)pCVar8 = &PTR__CancelableTask_01ca7fa8;
      pCVar9 = pCVar8 + 0x20;
      *(undefined **)pCVar9 = &DAT_01ca7fd8;
      *(Isolate **)(pCVar8 + 0x28) = pIVar2;
      *(IncrementalMarkingJob **)(pCVar8 + 0x30) = this;
      if ((uVar7 & 1) == 0) {
        *(undefined4 *)(pCVar8 + 0x38) = 0;
        *(int *)(pCVar8 + 0x3c) = param_3;
        local_70 = pCVar9;
        (**(code **)(*local_50 + 0x10))(0x3f847ae147ae147b,local_50,&local_70);
        pCVar8 = local_70;
        local_70 = (CancelableTask *)0x0;
      }
      else {
        *(undefined4 *)(pCVar8 + 0x38) = 2;
        *(int *)(pCVar8 + 0x3c) = param_3;
        local_68 = pCVar9;
        (**(code **)(*local_50 + 0x18))(0x3f847ae147ae147b,local_50,&local_68);
        pCVar8 = local_68;
        local_68 = (CancelableTask *)0x0;
      }
    }
    if (pCVar8 != (CancelableTask *)0x0) {
      (**(code **)(*(long *)pCVar8 + 8))();
    }
    if (local_48 != (__shared_weak_count *)0x0) {
      p_Var1 = local_48 + 8;
      do {
        lVar10 = *(long *)p_Var1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)local_48 + 0x10))(local_48);
        std::__ndk1::__shared_weak_count::__release_weak(local_48);
      }
    }
  }
  return;
}

