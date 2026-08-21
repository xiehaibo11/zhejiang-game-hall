
/* v8::internal::Heap::MemoryPressureNotification(v8::MemoryPressureLevel, bool) */

void __thiscall v8::internal::Heap::MemoryPressureNotification(Heap *this,int param_2,uint param_3)

{
  __shared_weak_count *p_Var1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  CancelableTask *pCVar6;
  long lVar7;
  undefined8 *local_50;
  __shared_weak_count *local_48;
  CancelableTask *local_28;
  
  iVar2 = *(int *)(this + 0xc0);
  *(int *)(this + 0xc0) = param_2;
  if (((param_2 == 2) && (iVar2 != 2)) || ((param_2 == 1 && (iVar2 == 0)))) {
    if ((param_3 & 1) != 0) {
      CheckMemoryPressure(this);
      return;
    }
    base::RecursiveMutex::Lock((RecursiveMutex *)(this + 0xce0));
    StackGuard::RequestInterrupt((StackGuard *)(this + -0x8808),2);
    plVar5 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar5 + 0x30))(&local_50,plVar5,(Isolate *)(this + -0x8850));
    pCVar6 = operator_new(0x30);
    CancelableTask::CancelableTask(pCVar6,(Isolate *)(this + -0x8850));
    *(undefined ***)pCVar6 = &PTR__CancelableTask_01ca7e38;
    local_28 = pCVar6 + 0x20;
    *(undefined **)local_28 = &DAT_01ca7e68;
    *(Heap **)(pCVar6 + 0x28) = this;
    (**(code **)*local_50)(local_50,&local_28);
    pCVar6 = local_28;
    local_28 = (CancelableTask *)0x0;
    if (pCVar6 != (CancelableTask *)0x0) {
      (**(code **)(*(long *)pCVar6 + 8))();
    }
    if (local_48 != (__shared_weak_count *)0x0) {
      p_Var1 = local_48 + 8;
      do {
        lVar7 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*(long *)local_48 + 0x10))(local_48);
        std::__ndk1::__shared_weak_count::__release_weak(local_48);
      }
    }
    base::RecursiveMutex::Unlock((RecursiveMutex *)(this + 0xce0));
  }
  return;
}

