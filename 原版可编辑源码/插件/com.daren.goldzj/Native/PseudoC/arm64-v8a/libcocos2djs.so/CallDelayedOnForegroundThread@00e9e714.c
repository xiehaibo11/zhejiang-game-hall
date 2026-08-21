
/* v8::platform::DefaultPlatform::CallDelayedOnForegroundThread(v8::Isolate*, v8::Task*, double) */

void __thiscall
v8::platform::DefaultPlatform::CallDelayedOnForegroundThread
          (DefaultPlatform *this,Isolate *param_1,Task *param_2,double param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  Task *pTVar4;
  long lVar5;
  Task *local_38;
  long *local_30;
  __shared_weak_count *local_28;
  
  (**(code **)(*(long *)this + 0x30))(&local_30);
  local_38 = param_2;
  (**(code **)(*local_30 + 0x10))(param_3,local_30,&local_38);
  pTVar4 = local_38;
  local_38 = (Task *)0x0;
  if (pTVar4 != (Task *)0x0) {
    (**(code **)(*(long *)pTVar4 + 8))();
  }
  if (local_28 != (__shared_weak_count *)0x0) {
    p_Var1 = local_28 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)local_28 + 0x10))(local_28);
      std::__ndk1::__shared_weak_count::__release_weak(local_28);
    }
  }
  return;
}

