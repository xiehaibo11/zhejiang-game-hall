
/* v8::platform::DefaultPlatform::RunIdleTasks(v8::Isolate*, double) */

void __thiscall
v8::platform::DefaultPlatform::RunIdleTasks(DefaultPlatform *this,Isolate *param_1,double param_2)

{
  DefaultPlatform *pDVar1;
  Mutex *this_00;
  __shared_weak_count *p_Var2;
  __shared_weak_count *this_01;
  char cVar3;
  bool bVar4;
  long *plVar5;
  __tree_node_base *p_Var6;
  DefaultPlatform *pDVar7;
  code *pcVar8;
  long lVar9;
  DefaultPlatform *pDVar10;
  __tree_node_base *p_Var11;
  DefaultPlatform *pDVar12;
  DefaultPlatform *pDVar13;
  double dVar14;
  double dVar15;
  long *local_48;
  
  this_00 = (Mutex *)(this + 8);
  base::Mutex::Lock(this_00);
  pDVar7 = this + 0x50;
  pDVar12 = *(DefaultPlatform **)pDVar7;
  pDVar13 = pDVar7;
  pDVar10 = pDVar12;
  if (pDVar12 != (DefaultPlatform *)0x0) {
    do {
      if (*(Isolate **)(pDVar10 + 0x20) >= param_1) {
        pDVar13 = pDVar10;
      }
      pDVar1 = pDVar10 + (ulong)(*(Isolate **)(pDVar10 + 0x20) < param_1) * 8;
      pDVar10 = *(DefaultPlatform **)pDVar1;
    } while (*(DefaultPlatform **)pDVar1 != (DefaultPlatform *)0x0);
    if ((pDVar13 != pDVar7) && (*(Isolate **)(pDVar13 + 0x20) <= param_1)) {
      pDVar13 = this + 0x50;
      do {
        pDVar10 = pDVar12;
        if (param_1 < *(Isolate **)(pDVar10 + 0x20)) {
          pDVar12 = *(DefaultPlatform **)pDVar10;
          pDVar13 = pDVar10;
        }
        else {
          if (param_1 <= *(Isolate **)(pDVar10 + 0x20)) break;
          pDVar13 = pDVar10 + 8;
          pDVar12 = *(DefaultPlatform **)pDVar13;
        }
      } while (pDVar12 != (DefaultPlatform *)0x0);
      p_Var11 = *(__tree_node_base **)pDVar13;
      if (p_Var11 == (__tree_node_base *)0x0) {
        p_Var11 = operator_new(0x38);
        *(undefined8 *)(p_Var11 + 0x28) = 0;
        *(undefined8 *)(p_Var11 + 0x30) = 0;
        *(Isolate **)(p_Var11 + 0x20) = param_1;
        *(undefined8 *)p_Var11 = 0;
        *(undefined8 *)(p_Var11 + 8) = 0;
        *(DefaultPlatform **)(p_Var11 + 0x10) = pDVar10;
        *(__tree_node_base **)pDVar13 = p_Var11;
        p_Var6 = p_Var11;
        if (**(long **)(this + 0x48) != 0) {
          *(long *)(this + 0x48) = **(long **)(this + 0x48);
          p_Var6 = *(__tree_node_base **)pDVar13;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x50),p_Var6);
        *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
      }
      this_01 = *(__shared_weak_count **)(p_Var11 + 0x30);
      if (this_01 != (__shared_weak_count *)0x0) {
        p_Var2 = this_01 + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
          if (bVar4) {
            *(long *)p_Var2 = *(long *)p_Var2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      base::Mutex::Unlock(this_00);
      dVar14 = (double)(**(code **)(*(long *)this + 0x78))(this);
      pcVar8 = *(code **)(*(long *)this + 0x78);
      while ((plVar5 = local_48, dVar15 = (double)(*pcVar8)(this), dVar15 < dVar14 + param_2 &&
             (DefaultForegroundTaskRunner::PopTaskFromIdleQueue(), local_48 != (long *)0x0))) {
        (**(code **)(*local_48 + 0x10))(dVar14 + param_2);
        local_48 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        pcVar8 = *(code **)(*(long *)this + 0x78);
      }
      if (this_01 != (__shared_weak_count *)0x0) {
        p_Var2 = this_01 + 8;
        do {
          lVar9 = *(long *)p_Var2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
          if (bVar4) {
            *(long *)p_Var2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*(long *)this_01 + 0x10))(this_01);
          std::__ndk1::__shared_weak_count::__release_weak(this_01);
        }
      }
      return;
    }
  }
  base::Mutex::Unlock(this_00);
  return;
}

