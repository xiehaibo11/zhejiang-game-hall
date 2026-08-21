
/* v8::platform::DefaultForegroundTaskRunner::PostDelayedTask(std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> >, double) */

void __thiscall
v8::platform::DefaultForegroundTaskRunner::PostDelayedTask
          (double param_1,DefaultForegroundTaskRunner *this,undefined8 *param_3)

{
  double *pdVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  double *pdVar5;
  double dVar6;
  long lVar7;
  long lVar8;
  double *pdVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double local_50;
  long *local_48;
  
  base::Mutex::Lock((Mutex *)(this + 0xc));
  if (this[8] == (DefaultForegroundTaskRunner)0x0) {
    local_50 = (double)(**(code **)(this + 0xf0))();
    local_50 = local_50 + param_1;
    plVar2 = (long *)*param_3;
    *param_3 = 0;
    pdVar1 = *(double **)(this + 0xd8);
    if (pdVar1 < *(double **)(this + 0xe0)) {
      *pdVar1 = local_50;
      local_48 = (long *)0x0;
      pdVar1[1] = (double)plVar2;
      lVar3 = *(long *)(this + 0xd8) + 0x10;
      *(long *)(this + 0xd8) = lVar3;
    }
    else {
      local_48 = plVar2;
      std::__ndk1::
      vector<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>,std::__ndk1::allocator<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>>
      ::
      __push_back_slow_path<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
                ((vector<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>,std::__ndk1::allocator<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>>
                  *)(this + 0xd0),(pair *)&local_50);
      lVar3 = *(long *)(this + 0xd8);
    }
    lVar8 = *(long *)(this + 0xd0);
    if (0x10 < lVar3 - lVar8) {
      uVar4 = (ulong)(lVar3 - lVar8) >> 4;
      lVar7 = uVar4 - 2;
      lVar10 = uVar4 - 1;
      if (-1 < lVar7) {
        lVar10 = lVar7;
      }
      lVar10 = lVar10 >> 1;
      pdVar1 = (double *)(lVar8 + lVar10 * 0x10);
      dVar12 = *(double *)(lVar3 + -0x10);
      if (dVar12 < *pdVar1) {
        dVar11 = *(double *)(lVar3 + -8);
        *(undefined8 *)(lVar3 + -8) = 0;
        pdVar9 = (double *)(lVar3 + -0x10);
        do {
          pdVar5 = pdVar1;
          *pdVar9 = *pdVar5;
          dVar6 = pdVar5[1];
          pdVar5[1] = 0.0;
          plVar2 = (long *)pdVar9[1];
          pdVar9[1] = dVar6;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          if (lVar10 == 0) break;
          if (-1 < lVar10 + -1) {
            lVar10 = lVar10 + -1;
          }
          lVar10 = lVar10 >> 1;
          pdVar1 = (double *)(lVar8 + lVar10 * 0x10);
          pdVar9 = pdVar5;
        } while (dVar12 < *pdVar1);
        plVar2 = (long *)pdVar5[1];
        *pdVar5 = dVar12;
        pdVar5[1] = dVar11;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
    }
    plVar2 = local_48;
    local_48 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0xc));
  return;
}

