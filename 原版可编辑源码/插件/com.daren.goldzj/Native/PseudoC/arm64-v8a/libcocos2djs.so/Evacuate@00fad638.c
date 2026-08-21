
/* v8::internal::MarkCompactCollector::Evacuate() */

void __thiscall v8::internal::MarkCompactCollector::Evacuate(MarkCompactCollector *this)

{
  undefined4 uVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  Page *pPVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  byte **local_110;
  byte *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined **local_f0;
  undefined **ppuStack_e8;
  Heap *local_e0;
  byte **local_b0;
  byte *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Scope aSStack_90 [64];
  long *local_50;
  long *local_48;
  
  GCTracer::Scope::Scope(aSStack_90,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x13);
  if (DAT_01d3f248 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f248 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f248;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d3f248 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x13);
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar2,uVar4,0,0,0,0,0,0,0,&local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_a0 = GCTracer::Scope::Name(0x13);
    local_b0 = &local_a8;
    local_a8 = pbVar2;
    local_98 = uVar4;
  }
  lVar8 = *(long *)(this + 8);
  base::Mutex::Lock((Mutex *)(lVar8 + 0xb18));
  GCTracer::Scope::Scope((Scope *)&local_f0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x27);
  if (DAT_01d3f250 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f250 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f250;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f250 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x27);
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar2,uVar4,0,0,0,0,0,0,0,&local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_100 = GCTracer::Scope::Name(0x27);
    local_110 = &local_108;
    local_108 = pbVar2;
    local_f8 = uVar4;
  }
  EvacuatePrologue(this);
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_108,local_100,local_f8);
  }
  GCTracer::Scope::~Scope((Scope *)&local_f0);
  GCTracer::Scope::Scope((Scope *)&local_f0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x24);
  if (DAT_01d3f258 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f258 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f258;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f258 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x24);
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar2,uVar4,0,0,0,0,0,0,0,&local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_100 = GCTracer::Scope::Name(0x24);
    local_110 = &local_108;
    local_108 = pbVar2;
    local_f8 = uVar4;
  }
  this[0x4d] = (MarkCompactCollector)0x1;
  EvacuatePagesInParallel(this);
  this[0x4d] = (MarkCompactCollector)0x0;
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_108,local_100,local_f8);
  }
  GCTracer::Scope::~Scope((Scope *)&local_f0);
  UpdatePointersAfterEvacuation(this);
  GCTracer::Scope::Scope((Scope *)&local_f0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x28);
  if (DAT_01d3f260 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f260 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f260;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f260 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x28);
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar2,uVar4,0,0,0,0,0,0,0,&local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_100 = GCTracer::Scope::Name(0x28);
    local_110 = &local_108;
    local_108 = pbVar2;
    local_f8 = uVar4;
  }
  uVar5 = NewSpace::Rebalance(*(NewSpace **)(*(long *)(this + 8) + 0xe8));
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory(*(Heap **)(this + 8),"NewSpace::Rebalance");
  }
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_108,local_100,local_f8);
  }
  GCTracer::Scope::~Scope((Scope *)&local_f0);
  MemoryAllocator::Unmapper::FreeQueuedChunks
            ((Unmapper *)(*(long *)(*(long *)(this + 8) + 0x820) + 0x88));
  GCTracer::Scope::Scope((Scope *)&local_f0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x23);
  if (DAT_01d3f268 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f268 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f268;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f268 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x23);
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar2,uVar4,0,0,0,0,0,0,0,&local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_100 = GCTracer::Scope::Name(0x23);
    local_110 = &local_108;
    local_108 = pbVar2;
    local_f8 = uVar4;
  }
  puVar9 = *(undefined8 **)(this + 0x26c8);
  puVar11 = *(undefined8 **)(this + 0x26d0);
  if (puVar9 != puVar11) {
    do {
      pPVar6 = (Page *)*puVar9;
      uVar5 = *(ulong *)(pPVar6 + 8);
      if (((uint)uVar5 >> 10 & 1) == 0) {
        if (((uint)uVar5 >> 9 & 1) != 0) {
          *(ulong *)(pPVar6 + 8) = uVar5 & 0xfffffffffffffdff;
          Sweeper::AddPage(*(Sweeper **)(this + 0x26f8),2,pPVar6,0);
        }
      }
      else {
        *(ulong *)(pPVar6 + 8) = uVar5 & 0xfffffffffffffbff;
        Sweeper::AddPageForIterability(*(Sweeper **)(this + 0x26f8),pPVar6);
      }
      puVar9 = puVar9 + 1;
    } while (puVar11 != puVar9);
    puVar9 = *(undefined8 **)(this + 0x26c8);
  }
  plVar3 = *(long **)(this + 0x26b0);
  plVar12 = *(long **)(this + 0x26b8);
  *(undefined8 **)(this + 0x26d0) = puVar9;
  for (; plVar3 != plVar12; plVar3 = plVar3 + 1) {
    lVar10 = *plVar3;
    uVar7 = (uint)*(undefined8 *)(lVar10 + 8);
    if ((uVar7 >> 0xf & 1) != 0) {
      if ((uVar7 >> 0x15 & 1) == 0) {
        uVar1 = *(undefined4 *)(*(long *)(lVar10 + 0x58) + 0x48);
      }
      else {
        uVar1 = 0;
      }
      Sweeper::AddPage(*(Sweeper **)(this + 0x26f8),uVar1,lVar10,0);
      *(ulong *)(lVar10 + 8) = *(ulong *)(lVar10 + 8) & 0xffffffffffff7fff;
    }
  }
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_108,local_100,local_f8);
  }
  GCTracer::Scope::~Scope((Scope *)&local_f0);
  GCTracer::Scope::Scope((Scope *)&local_f0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x26);
  if (DAT_01d3f270 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f270 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f270;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f270 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x26);
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar2,uVar4,0,0,0,0,0,0,0,&local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_100 = GCTracer::Scope::Name(0x26);
    local_110 = &local_108;
    local_108 = pbVar2;
    local_f8 = uVar4;
  }
  EvacuateEpilogue(this);
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_108,local_100,local_f8);
  }
  GCTracer::Scope::~Scope((Scope *)&local_f0);
  if ((FLAG_verify_heap != '\0') && (*(char *)(*(long *)(this + 0x26f8) + 0xf9) == '\0')) {
    local_e0 = *(Heap **)(this + 8);
    local_f0 = &PTR_FUN_01ca81b0;
    ppuStack_e8 = &PTR_FUN_01ca8270;
    Heap::IterateStrongRoots(local_e0,&ppuStack_e8,0);
    FUN_00fdac6c(&local_f0,*(undefined8 *)(local_e0 + 0xe8));
    FUN_00fdad80(&local_f0,*(undefined8 *)(local_e0 + 0xf0));
    FUN_00fdad80(&local_f0,*(undefined8 *)(local_e0 + 0xf8));
    FUN_00fdad80(&local_f0,*(undefined8 *)(local_e0 + 0x100));
  }
  base::Mutex::Unlock((Mutex *)(lVar8 + 0xb18));
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_a8,local_a0,local_98);
  }
  GCTracer::Scope::~Scope(aSStack_90);
  return;
}

