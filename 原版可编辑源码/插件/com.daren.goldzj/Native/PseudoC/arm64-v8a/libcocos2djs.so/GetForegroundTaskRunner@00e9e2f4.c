
/* v8::platform::DefaultPlatform::GetForegroundTaskRunner(v8::Isolate*) */

void v8::platform::DefaultPlatform::GetForegroundTaskRunner(Isolate *param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  Isolate *pIVar5;
  __shared_weak_count *this;
  __tree_node_base *p_Var6;
  ulong in_x1;
  __tree_node_base *p_Var7;
  undefined8 *in_x8;
  Isolate *pIVar8;
  long lVar9;
  Isolate *pIVar10;
  Isolate *pIVar11;
  __shared_weak_count *p_Var12;
  Isolate *pIVar13;
  
  base::Mutex::Lock((Mutex *)(param_1 + 8));
  pIVar11 = param_1 + 0x50;
  pIVar8 = *(Isolate **)pIVar11;
  pIVar10 = pIVar11;
  if (pIVar8 == (Isolate *)0x0) {
LAB_00e9e364:
    pcVar2 = FUN_00e9e290;
    if (*(code **)(param_1 + 0x70) != (code *)0x0) {
      pcVar2 = *(code **)(param_1 + 0x70);
    }
    this = operator_new(0x110);
    *(undefined8 *)(this + 0x10) = 0;
    p_Var12 = this + 8;
    *(undefined8 *)p_Var12 = 0;
    *(undefined ***)this = &PTR____shared_ptr_emplace_01c98148;
    DefaultForegroundTaskRunner::DefaultForegroundTaskRunner
              ((DefaultForegroundTaskRunner *)(this + 0x18),*(undefined4 *)(param_1 + 0x34),pcVar2);
    pIVar8 = pIVar11;
    pIVar10 = pIVar11;
    if (*(Isolate **)(param_1 + 0x50) != (Isolate *)0x0) {
      pIVar8 = param_1 + 0x50;
      pIVar5 = *(Isolate **)(param_1 + 0x50);
      do {
        while (pIVar13 = pIVar5, pIVar10 = pIVar13, in_x1 < *(ulong *)(pIVar13 + 0x20)) {
          pIVar8 = pIVar13;
          pIVar5 = *(Isolate **)pIVar13;
          if (*(Isolate **)pIVar13 == (Isolate *)0x0) {
            lVar9 = *(long *)pIVar13;
            goto joined_r0x00e9e404;
          }
        }
        if (in_x1 <= *(ulong *)(pIVar13 + 0x20)) break;
        pIVar8 = pIVar13 + 8;
        pIVar5 = *(Isolate **)pIVar8;
      } while (*(Isolate **)pIVar8 != (Isolate *)0x0);
    }
    lVar9 = *(long *)pIVar8;
    pIVar13 = pIVar8;
joined_r0x00e9e404:
    if (lVar9 == 0) {
      p_Var6 = operator_new(0x38);
      *(ulong *)(p_Var6 + 0x20) = in_x1;
      *(DefaultForegroundTaskRunner **)(p_Var6 + 0x28) =
           (DefaultForegroundTaskRunner *)(this + 0x18);
      *(__shared_weak_count **)(p_Var6 + 0x30) = this;
      *(undefined8 *)p_Var6 = 0;
      *(undefined8 *)(p_Var6 + 8) = 0;
      *(Isolate **)(p_Var6 + 0x10) = pIVar10;
      *(__tree_node_base **)pIVar13 = p_Var6;
      if (**(long **)(param_1 + 0x48) != 0) {
        *(long *)(param_1 + 0x48) = **(long **)(param_1 + 0x48);
        p_Var6 = *(__tree_node_base **)pIVar13;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_1 + 0x50),p_Var6);
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
      pIVar10 = *(Isolate **)pIVar11;
      goto joined_r0x00e9e49c;
    }
    do {
      lVar9 = *(long *)p_Var12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var12,0x10);
      if (bVar4) {
        *(long *)p_Var12 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      pIVar10 = *(Isolate **)pIVar11;
      goto joined_r0x00e9e49c;
    }
  }
  else {
    do {
      if (*(ulong *)(pIVar8 + 0x20) >= in_x1) {
        pIVar10 = pIVar8;
      }
      pIVar8 = *(Isolate **)(pIVar8 + (ulong)(*(ulong *)(pIVar8 + 0x20) < in_x1) * 8);
    } while (pIVar8 != (Isolate *)0x0);
    if ((pIVar10 == pIVar11) || (in_x1 < *(ulong *)(pIVar10 + 0x20))) goto LAB_00e9e364;
  }
  pIVar10 = *(Isolate **)pIVar11;
joined_r0x00e9e49c:
  if (pIVar10 == (Isolate *)0x0) {
    p_Var6 = *(__tree_node_base **)pIVar11;
    pIVar8 = pIVar11;
  }
  else {
    pIVar8 = param_1 + 0x50;
    do {
      while (pIVar11 = pIVar10, in_x1 < *(ulong *)(pIVar11 + 0x20)) {
        pIVar10 = *(Isolate **)pIVar11;
        pIVar8 = pIVar11;
        if (*(Isolate **)pIVar11 == (Isolate *)0x0) {
          p_Var6 = *(__tree_node_base **)pIVar11;
          goto joined_r0x00e9e478;
        }
      }
      if (in_x1 <= *(ulong *)(pIVar11 + 0x20)) break;
      pIVar8 = pIVar11 + 8;
      pIVar10 = *(Isolate **)pIVar8;
    } while (*(Isolate **)pIVar8 != (Isolate *)0x0);
    p_Var6 = *(__tree_node_base **)pIVar8;
  }
joined_r0x00e9e478:
  if (p_Var6 == (__tree_node_base *)0x0) {
    p_Var6 = operator_new(0x38);
    *(undefined8 *)(p_Var6 + 0x28) = 0;
    *(undefined8 *)(p_Var6 + 0x30) = 0;
    *(ulong *)(p_Var6 + 0x20) = in_x1;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(Isolate **)(p_Var6 + 0x10) = pIVar11;
    *(__tree_node_base **)pIVar8 = p_Var6;
    p_Var7 = p_Var6;
    if (**(long **)(param_1 + 0x48) != 0) {
      *(long *)(param_1 + 0x48) = **(long **)(param_1 + 0x48);
      p_Var7 = *(__tree_node_base **)pIVar8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x50),p_Var7);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  }
  *in_x8 = *(undefined8 *)(p_Var6 + 0x28);
  lVar9 = *(long *)(p_Var6 + 0x30);
  in_x8[1] = lVar9;
  if (lVar9 != 0) {
    plVar1 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  base::Mutex::Unlock((Mutex *)(param_1 + 8));
  return;
}

