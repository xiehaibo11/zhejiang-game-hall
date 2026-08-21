
/* v8::platform::tracing::TracingController::StopTracing() */

void __thiscall v8::platform::tracing::TracingController::StopTracing(TracingController *this)

{
  TracingController *pTVar1;
  TracingController TVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  byte bVar8;
  int iVar9;
  void *pvVar10;
  Mutex *pMVar11;
  long *plVar12;
  char *__s1;
  long lVar13;
  byte *pbVar14;
  undefined **ppuVar15;
  void *local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pTVar1 = this + 0x48;
  do {
    if (*pTVar1 != (TracingController)0x1) {
      ClearExclusiveLocal();
      goto LAB_00ea0908;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pTVar1,0x10);
    if (bVar4) {
      *pTVar1 = (TracingController)0x0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (g_category_index != 0) {
    ppuVar15 = &g_category_groups;
    lVar13 = g_category_index;
    pbVar14 = &g_category_group_enabled;
    do {
      __s1 = *ppuVar15;
      if (((byte)*pTVar1 & 1) == 0) {
        bVar8 = 0;
        TVar2 = *pTVar1;
      }
      else {
        bVar8 = TraceConfig::IsCategoryGroupEnabled(*(TraceConfig **)(this + 0x10),__s1);
        bVar8 = bVar8 & 1;
        TVar2 = *pTVar1;
      }
      if ((((byte)TVar2 & 1) != 0) && (iVar9 = strcmp(__s1,"__metadata"), iVar9 == 0)) {
        bVar8 = 1;
      }
      *pbVar14 = bVar8;
      lVar13 = lVar13 + -1;
      ppuVar15 = ppuVar15 + 1;
      pbVar14 = pbVar14 + 1;
    } while (lVar13 != 0);
  }
  uStack_88 = 0;
  local_90 = (void *)0x0;
  uStack_78 = 0;
  local_80 = (void *)0x0;
  local_70 = 0x3f800000;
  pMVar11 = *(Mutex **)(this + 0x18);
  base::Mutex::Lock(pMVar11);
  if ((TracingController *)&local_90 != this + 0x20) {
    local_70 = *(undefined4 *)(this + 0x40);
    std::__ndk1::
    __hash_table<v8::TracingController::TraceStateObserver*,std::__ndk1::hash<v8::TracingController::TraceStateObserver*>,std::__ndk1::equal_to<v8::TracingController::TraceStateObserver*>,std::__ndk1::allocator<v8::TracingController::TraceStateObserver*>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::TracingController::TraceStateObserver*,void*>*>>
              ((__hash_table<v8::TracingController::TraceStateObserver*,std::__ndk1::hash<v8::TracingController::TraceStateObserver*>,std::__ndk1::equal_to<v8::TracingController::TraceStateObserver*>,std::__ndk1::allocator<v8::TracingController::TraceStateObserver*>>
                *)&local_90,*(undefined8 *)(this + 0x30),0);
  }
  base::Mutex::Unlock(pMVar11);
  for (plVar12 = local_80; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
    (**(code **)(*(long *)plVar12[2] + 0x18))();
  }
  pMVar11 = *(Mutex **)(this + 0x18);
  base::Mutex::Lock(pMVar11);
  (**(code **)(**(long **)(this + 8) + 0x20))();
  base::Mutex::Unlock(pMVar11);
  pvVar6 = local_90;
  puVar7 = local_80;
  while (puVar7 != (void *)0x0) {
    pvVar10 = (void *)*puVar7;
    local_90 = pvVar6;
    operator_delete(puVar7);
    pvVar6 = local_90;
    puVar7 = pvVar10;
  }
  local_90 = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
LAB_00ea0908:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

