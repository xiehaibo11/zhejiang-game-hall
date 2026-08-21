
/* v8::platform::DefaultPlatform::EnsureBackgroundTaskRunnerInitialized() */

void __thiscall
v8::platform::DefaultPlatform::EnsureBackgroundTaskRunnerInitialized(DefaultPlatform *this)

{
  __shared_weak_count *p_Var1;
  _func_double *p_Var2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  __shared_weak_count *this_00;
  
  base::Mutex::Lock((Mutex *)(this + 8));
  if (*(long *)(this + 0x38) == 0) {
    p_Var2 = FUN_00e9e290;
    if (*(_func_double **)(this + 0x70) != (_func_double *)0x0) {
      p_Var2 = *(_func_double **)(this + 0x70);
    }
    puVar5 = operator_new(0x128);
    puVar5[2] = 0;
    *puVar5 = &PTR____shared_ptr_emplace_01c98110;
    puVar5[1] = 0;
    DefaultWorkerThreadsTaskRunner::DefaultWorkerThreadsTaskRunner
              ((DefaultWorkerThreadsTaskRunner *)(puVar5 + 3),*(uint *)(this + 0x30),p_Var2);
    this_00 = *(__shared_weak_count **)(this + 0x40);
    *(DefaultWorkerThreadsTaskRunner **)(this + 0x38) =
         (DefaultWorkerThreadsTaskRunner *)(puVar5 + 3);
    *(undefined8 **)(this + 0x40) = puVar5;
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
      do {
        lVar6 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 8));
  return;
}

