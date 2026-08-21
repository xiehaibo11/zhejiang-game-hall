
/* v8::internal::MinorMarkCompactCollector::UpdatePointersAfterEvacuation() */

void __thiscall
v8::internal::MinorMarkCompactCollector::UpdatePointersAfterEvacuation
          (MinorMarkCompactCollector *this)

{
  long *plVar1;
  byte *pbVar2;
  Item *pIVar3;
  undefined **ppuVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  Task *this_00;
  uint uVar13;
  uint uVar14;
  long lVar15;
  byte **local_180;
  byte *local_178;
  undefined8 local_170;
  undefined8 local_168;
  Item *local_160 [8];
  ItemParallelJob aIStack_120 [8];
  undefined8 *local_118;
  undefined8 *puStack_110;
  vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
  avStack_108 [8];
  undefined8 *local_100;
  undefined8 *puStack_f8;
  undefined **local_e0;
  undefined **ppuStack_d8;
  byte **local_d0;
  byte *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  Scope aSStack_b0 [64];
  undefined **local_70;
  long *local_68;
  
  GCTracer::Scope::Scope(aSStack_b0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x4a);
  if (DAT_01d3f2a8 == (byte *)0x0) {
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f2a8 = (byte *)(**(code **)(*plVar11 + 0x10))(plVar11,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f2a8;
  local_d0 = (byte **)0x0;
  if ((*DAT_01d3f2a8 & 5) != 0) {
    uVar12 = GCTracer::Scope::Name(0x4a);
    local_70 = (undefined **)0x0;
    local_68 = (long *)0x0;
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar12 = (**(code **)(*plVar11 + 0x18))(plVar11,0x58,pbVar2,uVar12,0,0,0,0,0,0,0,&local_70,0);
    plVar11 = local_68;
    local_68 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    ppuVar4 = local_70;
    local_70 = (undefined **)0x0;
    if (ppuVar4 != (undefined **)0x0) {
      (**(code **)(*ppuVar4 + 8))();
    }
    local_c0 = GCTracer::Scope::Name(0x4a);
    local_d0 = &local_c8;
    local_c8 = pbVar2;
    local_b8 = uVar12;
  }
  local_e0 = &PTR__PointersUpdatingVisitor_01ca8690;
  ppuStack_d8 = &PTR__PointersUpdatingVisitor_01ca8738;
  ItemParallelJob::ItemParallelJob
            (aIStack_120,*(CancelableTaskManager **)(*(long *)(this + 8) + 0x3eb0),
             (Semaphore *)(this + 0x28));
  plVar1 = *(long **)(this + 0x40);
  for (plVar11 = *(long **)(this + 0x38); plVar11 != plVar1; plVar11 = plVar11 + 1) {
    lVar15 = *plVar11;
    if (((*(ulong *)(lVar15 + 8) & 0x600) == 0 && (*(ulong *)(lVar15 + 8) & 0x18) != 0) &&
       (*(long *)(lVar15 + 0xf8) != 0)) {
      local_160[0] = operator_new(0x20);
      *(undefined ***)local_160[0] = &PTR__Item_01ca8668;
      *(undefined8 *)(local_160[0] + 8) = 0;
      *(long *)(local_160[0] + 0x10) = lVar15;
      *(undefined4 *)(local_160[0] + 0x18) = 0;
      if (local_118 == puStack_110) {
        std::__ndk1::
        vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
        ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                  ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                    *)aIStack_120,local_160);
      }
      else {
        *local_118 = local_160[0];
        local_118 = local_118 + 1;
      }
    }
  }
  uVar5 = MarkCompactCollectorBase::CollectToSpaceUpdatingItems
                    ((MarkCompactCollectorBase *)this,aIStack_120);
  iVar6 = MarkCompactCollectorBase::CollectRememberedSetUpdatingItems<v8::internal::OldSpace>
                    ((MarkCompactCollectorBase *)this,aIStack_120,
                     *(undefined8 *)(*(long *)(this + 8) + 0xf0),1);
  iVar7 = MarkCompactCollectorBase::CollectRememberedSetUpdatingItems<v8::internal::CodeSpace>
                    ((MarkCompactCollectorBase *)this,aIStack_120,
                     *(undefined8 *)(*(long *)(this + 8) + 0xf8),1);
  iVar8 = MarkCompactCollectorBase::CollectRememberedSetUpdatingItems<v8::internal::MapSpace>
                    ((MarkCompactCollectorBase *)this,aIStack_120,
                     *(undefined8 *)(*(long *)(this + 8) + 0x100),1);
  iVar9 = MarkCompactCollectorBase::
          CollectRememberedSetUpdatingItems<v8::internal::OldLargeObjectSpace>
                    ((MarkCompactCollectorBase *)this,aIStack_120,
                     *(undefined8 *)(*(long *)(this + 8) + 0x108),1);
  iVar10 = MarkCompactCollectorBase::
           CollectRememberedSetUpdatingItems<v8::internal::CodeLargeObjectSpace>
                     ((MarkCompactCollectorBase *)this,aIStack_120,
                      *(undefined8 *)(*(long *)(this + 8) + 0x110),1);
  uVar13 = iVar7 + iVar6 + iVar8 + iVar9 + iVar10;
  if (uVar13 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(uint *)(this + 0x10);
    if (-1 < (int)uVar14) {
      if ((int)(uVar14 / 600) <= (int)uVar13) {
        uVar13 = uVar14 / 600;
      }
      if ((int)uVar13 < 2) {
        uVar13 = 1;
      }
    }
    if (FLAG_parallel_pointer_update == '\0') {
      uVar14 = 1;
    }
    else {
      if (((DAT_01d3f358 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_01d3f358), iVar6 != 0)) {
        plVar11 = (long *)V8::GetCurrentPlatform();
        iVar6 = (**(code **)(*plVar11 + 0x28))();
        DAT_01d3f350 = iVar6 + 1;
        __cxa_guard_release(&DAT_01d3f358);
      }
      uVar14 = DAT_01d3f350;
      if ((int)uVar13 <= (int)DAT_01d3f350) {
        uVar14 = uVar13;
      }
      if (7 < (int)uVar14) {
        uVar14 = 8;
      }
    }
  }
  if ((int)uVar14 <= (int)uVar5) {
    uVar14 = uVar5;
  }
  if (0 < (int)uVar14) {
    iVar6 = 0;
    do {
      this_00 = operator_new(0x60);
      lVar15 = *(long *)(this + 8);
      ItemParallelJob::Task::Task(this_00,(Isolate *)(lVar15 + -0x8850));
      *(undefined ***)this_00 = &PTR__CancelableTask_01ca8770;
      *(undefined ***)(this_00 + 0x20) = &PTR__PointersUpdatingTask_01ca87a8;
      uVar12 = *(undefined8 *)(lVar15 + 0x7f8);
      *(undefined8 *)(this_00 + 0x58) = 0x80000004b;
      *(undefined8 *)(this_00 + 0x50) = uVar12;
      if (local_100 < puStack_f8) {
        local_160[0] = (Item *)0x0;
        *local_100 = this_00;
        local_100 = local_100 + 1;
      }
      else {
        local_160[0] = (Item *)this_00;
        std::__ndk1::
        vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
        ::
        __push_back_slow_path<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>
                  (avStack_108,(unique_ptr *)local_160);
      }
      pIVar3 = local_160[0];
      local_160[0] = (Item *)0x0;
      if (pIVar3 != (Item *)0x0) {
        (**(code **)(*(long *)pIVar3 + 8))();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar14);
  }
  GCTracer::Scope::Scope((Scope *)local_160,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x4d);
  if (DAT_01d3f2b0 == (byte *)0x0) {
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f2b0 = (byte *)(**(code **)(*plVar11 + 0x10))(plVar11,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f2b0;
  local_180 = (byte **)0x0;
  if ((*DAT_01d3f2b0 & 5) != 0) {
    uVar12 = GCTracer::Scope::Name(0x4d);
    local_70 = (undefined **)0x0;
    local_68 = (long *)0x0;
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar12 = (**(code **)(*plVar11 + 0x18))(plVar11,0x58,pbVar2,uVar12,0,0,0,0,0,0,0,&local_70,0);
    plVar11 = local_68;
    local_68 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    ppuVar4 = local_70;
    local_70 = (undefined **)0x0;
    if (ppuVar4 != (undefined **)0x0) {
      (**(code **)(*ppuVar4 + 8))();
    }
    local_170 = GCTracer::Scope::Name(0x4d);
    local_180 = &local_178;
    local_178 = pbVar2;
    local_168 = uVar12;
  }
  Heap::IterateRoots(*(Heap **)(this + 8),&ppuStack_d8,2);
  if ((local_180 != (byte **)0x0) && (*local_178 != 0)) {
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar11 + 0x28))(plVar11,local_178,local_170,local_168);
  }
  GCTracer::Scope::~Scope((Scope *)local_160);
  GCTracer::Scope::Scope((Scope *)local_160,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x4c);
  if (DAT_01d3f2b8 == (byte *)0x0) {
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f2b8 = (byte *)(**(code **)(*plVar11 + 0x10))(plVar11,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f2b8;
  local_180 = (byte **)0x0;
  if ((*DAT_01d3f2b8 & 5) != 0) {
    uVar12 = GCTracer::Scope::Name(0x4c);
    local_70 = (undefined **)0x0;
    local_68 = (long *)0x0;
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar12 = (**(code **)(*plVar11 + 0x18))(plVar11,0x58,pbVar2,uVar12,0,0,0,0,0,0,0,&local_70,0);
    plVar11 = local_68;
    local_68 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    ppuVar4 = local_70;
    local_70 = (undefined **)0x0;
    if (ppuVar4 != (undefined **)0x0) {
      (**(code **)(*ppuVar4 + 8))();
    }
    local_170 = GCTracer::Scope::Name(0x4c);
    local_180 = &local_178;
    local_178 = pbVar2;
    local_168 = uVar12;
  }
  ItemParallelJob::Run(aIStack_120);
  ArrayBufferCollector::FreeAllocations(*(ArrayBufferCollector **)(*(long *)(this + 8) + 0x818));
  if ((local_180 != (byte **)0x0) && (*local_178 != 0)) {
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar11 + 0x28))(plVar11,local_178,local_170,local_168);
  }
  GCTracer::Scope::~Scope((Scope *)local_160);
  GCTracer::Scope::Scope((Scope *)local_160,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x4e);
  if (DAT_01d3f2c0 == (byte *)0x0) {
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f2c0 = (byte *)(**(code **)(*plVar11 + 0x10))(plVar11,"disabled-by-default-v8.gc");
  }
  pbVar2 = DAT_01d3f2c0;
  local_180 = (byte **)0x0;
  if ((*DAT_01d3f2c0 & 5) != 0) {
    uVar12 = GCTracer::Scope::Name(0x4e);
    local_70 = (undefined **)0x0;
    local_68 = (long *)0x0;
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar12 = (**(code **)(*plVar11 + 0x18))(plVar11,0x58,pbVar2,uVar12,0,0,0,0,0,0,0,&local_70,0);
    plVar11 = local_68;
    local_68 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    ppuVar4 = local_70;
    local_70 = (undefined **)0x0;
    if (ppuVar4 != (undefined **)0x0) {
      (**(code **)(*ppuVar4 + 8))();
    }
    local_170 = GCTracer::Scope::Name(0x4e);
    local_180 = &local_178;
    local_178 = pbVar2;
    local_168 = uVar12;
  }
  local_70 = &PTR__WeakObjectRetainer_01ca87f8;
  Heap::ProcessWeakListRoots(*(Heap **)(this + 8),(WeakObjectRetainer *)&local_70);
  Heap::UpdateYoungReferencesInExternalStringTable(*(Heap **)(this + 8),FUN_00fcb84c);
  if ((local_180 != (byte **)0x0) && (*local_178 != 0)) {
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar11 + 0x28))(plVar11,local_178,local_170,local_168);
  }
  GCTracer::Scope::~Scope((Scope *)local_160);
  ItemParallelJob::~ItemParallelJob(aIStack_120);
  if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
    plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar11 + 0x28))(plVar11,local_c8,local_c0,local_b8);
  }
  GCTracer::Scope::~Scope(aSStack_b0);
  return;
}

