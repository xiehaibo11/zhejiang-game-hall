
/* v8::internal::ItemParallelJob::Run() */

void __thiscall v8::internal::ItemParallelJob::Run(ItemParallelJob *this)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  long *plVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong local_a8;
  long *local_a0;
  long local_98;
  long lStack_90;
  undefined2 local_84 [2];
  char *local_80;
  char *pcStack_78;
  long *local_70;
  long *local_68;
  
  lVar11 = *(long *)this;
  lVar1 = *(long *)(this + 8);
  lVar16 = *(long *)(this + 0x18);
  lVar15 = *(long *)(this + 0x20);
  if (DAT_01d46bd8 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d46bd8 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.gc");
  }
  pbVar4 = DAT_01d46bd8;
  lVar15 = lVar15 - lVar16;
  local_a8 = lVar1 - lVar11 >> 3;
  if ((*DAT_01d46bd8 & 5) != 0) {
    local_98 = lVar15 * 0x20000000 >> 0x20;
    lStack_90 = (lVar1 - lVar11) * 0x20000000 >> 0x20;
    local_80 = "num_tasks";
    pcStack_78 = "num_items";
    local_84[0] = 0x303;
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x18))
              (plVar6,0x49,pbVar4,"ItemParallelJob::Run",0,0,0,2,&local_80,local_84,&local_98,
               &local_70,0x10);
    plVar6 = local_68;
    local_68 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_70;
    local_70 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  lVar11 = *(long *)(this + 0x18);
  uVar14 = lVar15 >> 3;
  uVar9 = *(long *)(this + 0x20) - lVar11 >> 3;
  uVar10 = local_a8;
  if (uVar9 <= local_a8) {
    uVar10 = uVar9;
  }
  if (uVar10 == 0) {
    local_a8 = 0;
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = local_a8 / uVar10;
    }
    local_a8 = local_a8 - uVar9 * uVar10;
  }
  uVar10 = uVar14 << 3;
  if (uVar14 >> 0x3d != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  pvVar7 = operator_new__(uVar10);
  if (lVar15 != 0) {
    lVar16 = 0;
    uVar17 = 0;
    plVar6 = (long *)0x0;
    uVar10 = 1;
    do {
      plVar13 = *(long **)(lVar11 + lVar16);
      *(undefined8 *)(lVar11 + lVar16) = 0;
      lVar11 = *(long *)(this + 0x38);
      plVar13[5] = (long)this;
      plVar13[9] = lVar11;
      uVar12 = *(long *)(this + 8) - *(long *)this >> 3;
      if (uVar17 < uVar12) {
        plVar13[6] = uVar17;
      }
      else {
        plVar13[7] = uVar12;
      }
      *(long *)((long)pvVar7 + lVar16) = plVar13[3];
      if (uVar10 == 1) {
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
        plVar6 = plVar13;
        if (uVar14 < 2) goto LAB_014f89a4;
      }
      else {
        plVar8 = (long *)V8::GetCurrentPlatform();
        local_a0 = plVar13 + 4;
        (**(code **)(*plVar8 + 0x40))(plVar8,&local_a0);
        plVar13 = local_a0;
        local_a0 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        plVar13 = plVar6;
        if (uVar14 <= uVar10) goto LAB_014f89a4;
      }
      lVar11 = *(long *)(this + 0x18);
      uVar17 = uVar17 + uVar9;
      lVar16 = lVar16 + 8;
      if (uVar10 < local_a8) {
        uVar17 = uVar17 + 1;
      }
      uVar10 = uVar10 + 1;
    } while( true );
  }
  plVar13 = (long *)0x0;
LAB_014f89a4:
  plVar6 = plVar13 + 2;
  *(undefined4 *)(plVar13 + 8) = 0;
  do {
    if ((int)*plVar6 != 0) {
      ClearExclusiveLocal();
      if (lVar15 == 0) goto LAB_014f8a14;
      goto LAB_014f89e0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *(int *)plVar6 = 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  (**(code **)(*plVar13 + 0x18))(plVar13);
  if (lVar15 != 0) {
LAB_014f89e0:
    uVar10 = 0;
    do {
      iVar5 = CancelableTaskManager::TryAbort
                        (*(CancelableTaskManager **)(this + 0x30),
                         *(ulong *)((long)pvVar7 + uVar10 * 8));
      if (iVar5 != 2) {
        base::Semaphore::Wait(*(Semaphore **)(this + 0x38));
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar14);
  }
LAB_014f8a14:
  operator_delete__(pvVar7);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  return;
}

