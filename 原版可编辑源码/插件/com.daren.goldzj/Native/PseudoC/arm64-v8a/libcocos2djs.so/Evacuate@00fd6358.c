
/* v8::internal::MinorMarkCompactCollector::Evacuate() */

void __thiscall v8::internal::MinorMarkCompactCollector::Evacuate(MinorMarkCompactCollector *this)

{
  long *plVar1;
  byte *pbVar2;
  Page *pPVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte **local_110;
  byte *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  Scope aSStack_f0 [64];
  byte **local_b0;
  byte *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Scope aSStack_90 [64];
  Page *local_50;
  long *local_48;
  
  GCTracer::Scope::Scope(aSStack_90,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x43);
  if (DAT_01d3f320 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f320 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f320;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d3f320 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x43);
    local_50 = (Page *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar2,uVar5,0,0,0,0,0,0,0,&local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pPVar3 = local_50;
    local_50 = (Page *)0x0;
    if (pPVar3 != (Page *)0x0) {
      (**(code **)(*(long *)pPVar3 + 8))();
    }
    local_a0 = GCTracer::Scope::Name(0x43);
    local_b0 = &local_a8;
    local_a8 = pbVar2;
    local_98 = uVar5;
  }
  lVar7 = *(long *)(this + 8);
  base::Mutex::Lock((Mutex *)(lVar7 + 0xb18));
  GCTracer::Scope::Scope(aSStack_f0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x48);
  if (DAT_01d3f328 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f328 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f328;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f328 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x48);
    local_50 = (Page *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar2,uVar5,0,0,0,0,0,0,0,&local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pPVar3 = local_50;
    local_50 = (Page *)0x0;
    if (pPVar3 != (Page *)0x0) {
      (**(code **)(*(long *)pPVar3 + 8))();
    }
    local_100 = GCTracer::Scope::Name(0x48);
    local_110 = &local_108;
    local_108 = pbVar2;
    local_f8 = uVar5;
  }
  EvacuatePrologue(this);
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_108,local_100,local_f8);
  }
  GCTracer::Scope::~Scope(aSStack_f0);
  GCTracer::Scope::Scope(aSStack_f0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x45);
  if (DAT_01d3f330 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f330 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f330;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f330 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x45);
    local_50 = (Page *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar2,uVar5,0,0,0,0,0,0,0,&local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pPVar3 = local_50;
    local_50 = (Page *)0x0;
    if (pPVar3 != (Page *)0x0) {
      (**(code **)(*(long *)pPVar3 + 8))();
    }
    local_100 = GCTracer::Scope::Name(0x45);
    local_110 = &local_108;
    local_108 = pbVar2;
    local_f8 = uVar5;
  }
  EvacuatePagesInParallel(this);
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_108,local_100,local_f8);
  }
  GCTracer::Scope::~Scope(aSStack_f0);
  UpdatePointersAfterEvacuation(this);
  GCTracer::Scope::Scope(aSStack_f0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x49);
  if (DAT_01d3f338 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f338 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f338;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f338 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x49);
    local_50 = (Page *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar2,uVar5,0,0,0,0,0,0,0,&local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pPVar3 = local_50;
    local_50 = (Page *)0x0;
    if (pPVar3 != (Page *)0x0) {
      (**(code **)(*(long *)pPVar3 + 8))();
    }
    local_100 = GCTracer::Scope::Name(0x49);
    local_110 = &local_108;
    local_108 = pbVar2;
    local_f8 = uVar5;
  }
  uVar6 = NewSpace::Rebalance(*(NewSpace **)(*(long *)(this + 8) + 0xe8));
  if ((uVar6 & 1) != 0) {
    if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_108,local_100,local_f8);
    }
    GCTracer::Scope::~Scope(aSStack_f0);
    GCTracer::Scope::Scope(aSStack_f0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x44);
    if (DAT_01d3f340 == (byte *)0x0) {
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f340 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
    }
    pbVar2 = DAT_01d3f340;
    local_110 = (byte **)0x0;
    if ((*DAT_01d3f340 & 5) != 0) {
      uVar5 = GCTracer::Scope::Name(0x44);
      local_50 = (Page *)0x0;
      local_48 = (long *)0x0;
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar2,uVar5,0,0,0,0,0,0,0,&local_50,0);
      plVar4 = local_48;
      local_48 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      pPVar3 = local_50;
      local_50 = (Page *)0x0;
      if (pPVar3 != (Page *)0x0) {
        (**(code **)(*(long *)pPVar3 + 8))();
      }
      local_100 = GCTracer::Scope::Name(0x44);
      local_110 = &local_108;
      local_108 = pbVar2;
      local_f8 = uVar5;
    }
    plVar4 = *(long **)(this + 0x38);
    plVar1 = *(long **)(this + 0x40);
    if (plVar4 != plVar1) {
      do {
        local_50 = (Page *)*plVar4;
        if ((*(ulong *)(local_50 + 8) & 0x600) != 0) {
          *(ulong *)(local_50 + 8) = *(ulong *)(local_50 + 8) & 0xfffffffffffff9ff | 0x20000;
          if (*(long **)(this + 0x58) == *(long **)(this + 0x60)) {
            std::__ndk1::vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>>::
            __push_back_slow_path<v8::internal::Page*const&>
                      ((vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>> *)
                       (this + 0x50),&local_50);
          }
          else {
            **(long **)(this + 0x58) = (long)local_50;
            *(long *)(this + 0x58) = *(long *)(this + 0x58) + 8;
          }
        }
        plVar4 = plVar4 + 1;
      } while (plVar1 != plVar4);
      plVar4 = *(long **)(this + 0x38);
    }
    *(long **)(this + 0x40) = plVar4;
    if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_108,local_100,local_f8);
    }
    GCTracer::Scope::~Scope(aSStack_f0);
    GCTracer::Scope::Scope(aSStack_f0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x47);
    if (DAT_01d3f348 == (byte *)0x0) {
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f348 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
    }
    pbVar2 = DAT_01d3f348;
    local_110 = (byte **)0x0;
    if ((*DAT_01d3f348 & 5) != 0) {
      uVar5 = GCTracer::Scope::Name(0x47);
      local_50 = (Page *)0x0;
      local_48 = (long *)0x0;
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar2,uVar5,0,0,0,0,0,0,0,&local_50,0);
      plVar4 = local_48;
      local_48 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      pPVar3 = local_50;
      local_50 = (Page *)0x0;
      if (pPVar3 != (Page *)0x0) {
        (**(code **)(*(long *)pPVar3 + 8))();
      }
      local_100 = GCTracer::Scope::Name(0x47);
      local_110 = &local_108;
      local_108 = pbVar2;
      local_f8 = uVar5;
    }
    SemiSpace::set_age_mark
              ((SemiSpace *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0xd0),
               *(ulong *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x68));
    MemoryAllocator::Unmapper::FreeQueuedChunks
              ((Unmapper *)(*(long *)(*(long *)(this + 8) + 0x820) + 0x88));
    if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_108,local_100,local_f8);
    }
    GCTracer::Scope::~Scope(aSStack_f0);
    base::Mutex::Unlock((Mutex *)(lVar7 + 0xb18));
    if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
    }
    GCTracer::Scope::~Scope(aSStack_90);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Heap::FatalProcessOutOfMemory(*(Heap **)(this + 8),"NewSpace::Rebalance");
}

