
/* v8::platform::DefaultPlatform::PumpMessageLoop(v8::Isolate*, v8::platform::MessageLoopBehavior)
    */

uint __thiscall
v8::platform::DefaultPlatform::PumpMessageLoop(DefaultPlatform *this,ulong param_1,uint param_3)

{
  Mutex *this_00;
  __shared_weak_count *p_Var1;
  undefined8 uVar2;
  __shared_weak_count *this_01;
  char cVar3;
  bool bVar4;
  long *plVar5;
  DefaultPlatform *pDVar6;
  DefaultPlatform *pDVar7;
  long lVar8;
  long *local_38;
  
  this_00 = (Mutex *)(this + 8);
  base::Mutex::Lock(this_00);
  this = this + 0x50;
  pDVar7 = *(DefaultPlatform **)this;
  pDVar6 = this;
  if (pDVar7 != (DefaultPlatform *)0x0) {
    do {
      if (*(ulong *)(pDVar7 + 0x20) >= param_1) {
        pDVar6 = pDVar7;
      }
      pDVar7 = *(DefaultPlatform **)(pDVar7 + (ulong)(*(ulong *)(pDVar7 + 0x20) < param_1) * 8);
    } while (pDVar7 != (DefaultPlatform *)0x0);
    if ((pDVar6 != this) && (*(ulong *)(pDVar6 + 0x20) <= param_1)) {
      uVar2 = *(undefined8 *)(pDVar6 + 0x28);
      this_01 = *(__shared_weak_count **)(pDVar6 + 0x30);
      if (this_01 != (__shared_weak_count *)0x0) {
        p_Var1 = this_01 + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      base::Mutex::Unlock(this_00);
      DefaultForegroundTaskRunner::PopTaskFromQueue(&local_38,uVar2,param_3 & 1);
      if (local_38 == (long *)0x0) {
        local_38 = (long *)0x0;
      }
      else {
        (**(code **)(*local_38 + 0x10))();
        plVar5 = local_38;
        local_38 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        param_3 = 1;
      }
      if (this_01 != (__shared_weak_count *)0x0) {
        p_Var1 = this_01 + 8;
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
          (**(code **)(*(long *)this_01 + 0x10))(this_01);
          std::__ndk1::__shared_weak_count::__release_weak(this_01);
        }
      }
      goto LAB_00e9dcf0;
    }
  }
  base::Mutex::Unlock(this_00);
LAB_00e9dcf0:
  return param_3 & 1;
}

