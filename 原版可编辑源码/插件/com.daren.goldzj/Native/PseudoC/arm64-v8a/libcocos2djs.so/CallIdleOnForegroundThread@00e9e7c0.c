
/* v8::platform::DefaultPlatform::CallIdleOnForegroundThread(v8::Isolate*, v8::IdleTask*) */

void __thiscall
v8::platform::DefaultPlatform::CallIdleOnForegroundThread
          (DefaultPlatform *this,Isolate *param_1,IdleTask *param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  IdleTask *pIVar4;
  long lVar5;
  long *local_30;
  __shared_weak_count *local_28;
  IdleTask *local_8;
  
  (**(code **)(*(long *)this + 0x30))(&local_30);
  local_8 = param_2;
  (**(code **)(*local_30 + 0x20))(local_30,&local_8);
  pIVar4 = local_8;
  local_8 = (IdleTask *)0x0;
  if (pIVar4 != (IdleTask *)0x0) {
    (**(code **)(*(long *)pIVar4 + 8))();
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

