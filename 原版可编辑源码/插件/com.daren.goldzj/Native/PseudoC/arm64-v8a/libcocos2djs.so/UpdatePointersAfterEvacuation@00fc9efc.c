
/* v8::internal::MarkCompactCollector::UpdatePointersAfterEvacuation() */

void __thiscall
v8::internal::MarkCompactCollector::UpdatePointersAfterEvacuation(MarkCompactCollector *this)

{
  byte *pbVar1;
  Item *pIVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  Task *pTVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  byte **local_198;
  byte *local_190;
  byte *local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined8 *puStack_170;
  byte **local_158;
  byte *local_150;
  undefined8 local_148;
  undefined8 local_140;
  Scope aSStack_138 [64];
  undefined **local_f8;
  undefined **ppuStack_f0;
  byte **local_e8;
  byte *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  Scope aSStack_c8 [64];
  Item *local_88;
  long *local_80;
  
  GCTracer::Scope::Scope(aSStack_c8,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x29);
  if (DAT_01d3f278 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f278 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f278;
  local_e8 = (byte **)0x0;
  if ((*DAT_01d3f278 & 5) != 0) {
    uVar9 = GCTracer::Scope::Name(0x29);
    local_88 = (Item *)0x0;
    local_80 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x58,pbVar1,uVar9,0,0,0,0,0,0,0,&local_88,0);
    plVar8 = local_80;
    local_80 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    pIVar2 = local_88;
    local_88 = (Item *)0x0;
    if (pIVar2 != (Item *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    local_d8 = GCTracer::Scope::Name(0x29);
    local_e8 = &local_e0;
    local_e0 = pbVar1;
    local_d0 = uVar9;
  }
  local_f8 = &PTR__PointersUpdatingVisitor_01ca8690;
  ppuStack_f0 = &PTR__PointersUpdatingVisitor_01ca8738;
  GCTracer::Scope::Scope(aSStack_138,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x2d);
  if (DAT_01d3f280 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f280 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f280;
  local_198 = (byte **)0x0;
  if ((*DAT_01d3f280 & 5) != 0) {
    uVar9 = GCTracer::Scope::Name(0x2d);
    local_88 = (Item *)0x0;
    local_80 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x58,pbVar1,uVar9,0,0,0,0,0,0,0,&local_88,0);
    plVar8 = local_80;
    local_80 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    pIVar2 = local_88;
    local_88 = (Item *)0x0;
    if (pIVar2 != (Item *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    local_188 = (byte *)GCTracer::Scope::Name(0x2d);
    local_198 = &local_190;
    local_190 = pbVar1;
    local_180 = uVar9;
  }
  Heap::IterateRoots(*(Heap **)(this + 8),&ppuStack_f0,4);
  if ((local_198 != (byte **)0x0) && (*local_190 != 0)) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_190,local_188,local_180);
  }
  GCTracer::Scope::~Scope(aSStack_138);
  GCTracer::Scope::Scope(aSStack_138,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x2b);
  if (DAT_01d3f288 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f288 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f288;
  local_158 = (byte **)0x0;
  if ((*DAT_01d3f288 & 5) != 0) {
    uVar9 = GCTracer::Scope::Name(0x2b);
    local_88 = (Item *)0x0;
    local_80 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x58,pbVar1,uVar9,0,0,0,0,0,0,0,&local_88,0);
    plVar8 = local_80;
    local_80 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    pIVar2 = local_88;
    local_88 = (Item *)0x0;
    if (pIVar2 != (Item *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    local_148 = GCTracer::Scope::Name(0x2b);
    local_158 = &local_150;
    local_150 = pbVar1;
    local_140 = uVar9;
  }
  ItemParallelJob::ItemParallelJob
            ((ItemParallelJob *)&local_198,*(CancelableTaskManager **)(*(long *)(this + 8) + 0x3eb0)
             ,(Semaphore *)(this + 0x3c));
  lVar13 = *(long *)(this + 8);
  lVar14 = *(long *)(*(long *)(lVar13 + 0xf0) + 0x20);
  if (lVar14 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      if (*(long *)(lVar14 + 0x38) == 0) {
        bVar3 = *(long *)(lVar14 + 0x80) != 0;
      }
      else {
        bVar3 = true;
      }
      if (*(long *)(lVar14 + 0x30) == 0) {
        bVar4 = *(long *)(lVar14 + 0x78) != 0;
      }
      else {
        bVar4 = true;
      }
      if (((*(long *)(lVar14 + 0x88) != 0) || (*(long *)(lVar14 + 0x90) != 0)) ||
         (bVar3 || (bVar4 || *(long *)(lVar14 + 0x70) != 0))) {
        local_88 = (Item *)(**(code **)(*(long *)this + 0x70))(this,lVar14,0);
        if (local_190 == local_188) {
          std::__ndk1::
          vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
          ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                    ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                      *)&local_198,&local_88);
        }
        else {
          *(Item **)local_190 = local_88;
          local_190 = local_190 + 8;
        }
        iVar6 = iVar6 + 1;
      }
      lVar14 = *(long *)(lVar14 + 0xe0);
    } while (lVar14 != 0);
    lVar13 = *(long *)(this + 8);
  }
  lVar14 = *(long *)(*(long *)(lVar13 + 0xf8) + 0x20);
  if (lVar14 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      if (*(long *)(lVar14 + 0x38) == 0) {
        bVar3 = *(long *)(lVar14 + 0x80) != 0;
      }
      else {
        bVar3 = true;
      }
      if (*(long *)(lVar14 + 0x30) == 0) {
        bVar4 = *(long *)(lVar14 + 0x78) != 0;
      }
      else {
        bVar4 = true;
      }
      if (((*(long *)(lVar14 + 0x88) != 0) || (*(long *)(lVar14 + 0x90) != 0)) ||
         (bVar3 || (bVar4 || *(long *)(lVar14 + 0x70) != 0))) {
        local_88 = (Item *)(**(code **)(*(long *)this + 0x70))(this,lVar14,0);
        if (local_190 == local_188) {
          std::__ndk1::
          vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
          ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                    ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                      *)&local_198,&local_88);
        }
        else {
          *(Item **)local_190 = local_88;
          local_190 = local_190 + 8;
        }
        iVar5 = iVar5 + 1;
      }
      lVar14 = *(long *)(lVar14 + 0xe0);
    } while (lVar14 != 0);
    lVar13 = *(long *)(this + 8);
  }
  iVar7 = 0;
  lVar14 = *(long *)(*(long *)(lVar13 + 0x108) + 0x20);
  if (lVar14 != 0) {
    do {
      if (*(long *)(lVar14 + 0x38) == 0) {
        bVar3 = *(long *)(lVar14 + 0x80) != 0;
      }
      else {
        bVar3 = true;
      }
      if (*(long *)(lVar14 + 0x30) == 0) {
        bVar4 = *(long *)(lVar14 + 0x78) != 0;
      }
      else {
        bVar4 = true;
      }
      if (((*(long *)(lVar14 + 0x88) != 0) || (*(long *)(lVar14 + 0x90) != 0)) ||
         (bVar3 || (bVar4 || *(long *)(lVar14 + 0x70) != 0))) {
        local_88 = (Item *)(**(code **)(*(long *)this + 0x70))(this,lVar14,0);
        if (local_190 == local_188) {
          std::__ndk1::
          vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
          ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                    ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                      *)&local_198,&local_88);
        }
        else {
          *(Item **)local_190 = local_88;
          local_190 = local_190 + 8;
        }
        iVar7 = iVar7 + 1;
      }
      lVar14 = *(long *)(lVar14 + 0xe0);
    } while (lVar14 != 0);
    lVar13 = *(long *)(this + 8);
  }
  iVar16 = 0;
  for (lVar13 = *(long *)(*(long *)(lVar13 + 0x110) + 0x20); lVar13 != 0;
      lVar13 = *(long *)(lVar13 + 0xe0)) {
    if (*(long *)(lVar13 + 0x38) == 0) {
      bVar3 = *(long *)(lVar13 + 0x80) != 0;
    }
    else {
      bVar3 = true;
    }
    if (*(long *)(lVar13 + 0x30) == 0) {
      bVar4 = *(long *)(lVar13 + 0x78) != 0;
    }
    else {
      bVar4 = true;
    }
    if (((*(long *)(lVar13 + 0x88) != 0) || (*(long *)(lVar13 + 0x90) != 0)) ||
       (bVar3 || (bVar4 || *(long *)(lVar13 + 0x70) != 0))) {
      local_88 = (Item *)(**(code **)(*(long *)this + 0x70))(this,lVar13,0);
      if (local_190 == local_188) {
        std::__ndk1::
        vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
        ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                  ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                    *)&local_198,&local_88);
      }
      else {
        *(Item **)local_190 = local_88;
        local_190 = local_190 + 8;
      }
      iVar16 = iVar16 + 1;
    }
  }
  uVar11 = iVar5 + iVar6 + iVar7 + iVar16;
  if (uVar11 == 0) {
    iVar6 = 1;
  }
  else {
    uVar12 = *(uint *)(this + 0x10);
    if (-1 < (int)uVar12) {
      if ((int)(uVar12 / 600) <= (int)uVar11) {
        uVar11 = uVar12 / 600;
      }
      if ((int)uVar11 < 2) {
        uVar11 = 1;
      }
    }
    if (FLAG_parallel_pointer_update == '\0') {
      uVar12 = 1;
    }
    else {
      if (((DAT_01d3f358 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_01d3f358), iVar6 != 0)) {
        plVar8 = (long *)V8::GetCurrentPlatform();
        iVar6 = (**(code **)(*plVar8 + 0x28))();
        DAT_01d3f350 = iVar6 + 1;
        __cxa_guard_release(&DAT_01d3f358);
      }
      uVar12 = DAT_01d3f350;
      if ((int)uVar11 <= (int)DAT_01d3f350) {
        uVar12 = uVar11;
      }
      if (7 < (int)uVar12) {
        uVar12 = 8;
      }
    }
    iVar6 = uVar12 + 1;
  }
  iVar5 = MarkCompactCollectorBase::CollectToSpaceUpdatingItems
                    ((MarkCompactCollectorBase *)this,(ItemParallelJob *)&local_198);
  if (iVar6 <= iVar5) {
    iVar6 = iVar5;
  }
  if (0 < iVar6) {
    iVar5 = 0;
    do {
      pTVar10 = operator_new(0x60);
      lVar13 = *(long *)(this + 8);
      ItemParallelJob::Task::Task(pTVar10,(Isolate *)(lVar13 + -0x8850));
      *(undefined ***)pTVar10 = &PTR__CancelableTask_01ca8770;
      *(undefined ***)(pTVar10 + 0x20) = &PTR__PointersUpdatingTask_01ca87a8;
      uVar9 = *(undefined8 *)(lVar13 + 0x7f8);
      *(undefined8 *)(pTVar10 + 0x58) = 0x40000002a;
      *(undefined8 *)(pTVar10 + 0x50) = uVar9;
      if (local_178 < puStack_170) {
        local_88 = (Item *)0x0;
        *local_178 = pTVar10;
        local_178 = local_178 + 1;
      }
      else {
        local_88 = (Item *)pTVar10;
        std::__ndk1::
        vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
        ::
        __push_back_slow_path<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>
                  ((vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
                    *)&local_180,(unique_ptr *)&local_88);
      }
      pIVar2 = local_88;
      local_88 = (Item *)0x0;
      if (pIVar2 != (Item *)0x0) {
        (**(code **)(*(long *)pIVar2 + 8))();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  local_88 = operator_new(0x18);
  *(undefined8 *)(local_88 + 0x10) = *(undefined8 *)(this + 8);
  *(undefined ***)local_88 = &PTR__Item_01ca87d0;
  *(undefined8 *)(local_88 + 8) = 0;
  if (local_190 == local_188) {
    std::__ndk1::
    vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
    ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
              ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                *)&local_198,&local_88);
  }
  else {
    *(Item **)local_190 = local_88;
    local_190 = local_190 + 8;
  }
  ItemParallelJob::Run((ItemParallelJob *)&local_198);
  ItemParallelJob::~ItemParallelJob((ItemParallelJob *)&local_198);
  if ((local_158 != (byte **)0x0) && (*local_150 != 0)) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_150,local_148,local_140);
  }
  GCTracer::Scope::~Scope(aSStack_138);
  GCTracer::Scope::Scope(aSStack_138,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x2c);
  if (DAT_01d3f290 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f290 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f290;
  local_158 = (byte **)0x0;
  if ((*DAT_01d3f290 & 5) != 0) {
    uVar9 = GCTracer::Scope::Name(0x2c);
    local_88 = (Item *)0x0;
    local_80 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x58,pbVar1,uVar9,0,0,0,0,0,0,0,&local_88,0);
    plVar8 = local_80;
    local_80 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    pIVar2 = local_88;
    local_88 = (Item *)0x0;
    if (pIVar2 != (Item *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    local_148 = GCTracer::Scope::Name(0x2c);
    local_158 = &local_150;
    local_150 = pbVar1;
    local_140 = uVar9;
  }
  ItemParallelJob::ItemParallelJob
            ((ItemParallelJob *)&local_198,*(CancelableTaskManager **)(*(long *)(this + 8) + 0x3eb0)
             ,(Semaphore *)(this + 0x3c));
  plVar8 = *(long **)(this + 0x26c8);
  plVar15 = *(long **)(this + 0x26d0);
  if (plVar8 == plVar15) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      lVar13 = *plVar8;
      if (((*(ulong *)(lVar13 + 8) & 0x600) == 0 && (*(ulong *)(lVar13 + 8) & 0x18) != 0) &&
         (*(long *)(lVar13 + 0xf8) != 0)) {
        iVar6 = iVar6 + 1;
        local_88 = operator_new(0x20);
        *(undefined ***)local_88 = &PTR__Item_01ca8668;
        *(undefined8 *)(local_88 + 8) = 0;
        *(long *)(local_88 + 0x10) = lVar13;
        *(undefined4 *)(local_88 + 0x18) = 0;
        if (local_190 == local_188) {
          std::__ndk1::
          vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
          ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                    ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                      *)&local_198,&local_88);
        }
        else {
          *(Item **)local_190 = local_88;
          local_190 = local_190 + 8;
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar15 != plVar8);
  }
  iVar5 = CollectOldSpaceArrayBufferTrackerItems(this,(ItemParallelJob *)&local_198);
  lVar13 = *(long *)(*(long *)(*(long *)(this + 8) + 0x100) + 0x20);
  if (lVar13 != 0) {
    uVar11 = 0;
    do {
      if (*(long *)(lVar13 + 0x38) == 0) {
        bVar3 = *(long *)(lVar13 + 0x80) != 0;
      }
      else {
        bVar3 = true;
      }
      if (*(long *)(lVar13 + 0x30) == 0) {
        bVar4 = *(long *)(lVar13 + 0x78) != 0;
      }
      else {
        bVar4 = true;
      }
      if (((*(long *)(lVar13 + 0x88) != 0) || (*(long *)(lVar13 + 0x90) != 0)) ||
         (bVar3 || (bVar4 || *(long *)(lVar13 + 0x70) != 0))) {
        local_88 = (Item *)(**(code **)(*(long *)this + 0x70))(this,lVar13,0);
        if (local_190 == local_188) {
          std::__ndk1::
          vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
          ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                    ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                      *)&local_198,&local_88);
        }
        else {
          *(Item **)local_190 = local_88;
          local_190 = local_190 + 8;
        }
        uVar11 = uVar11 + 1;
      }
      lVar13 = *(long *)(lVar13 + 0xe0);
    } while (lVar13 != 0);
    if (uVar11 != 0) {
      uVar12 = *(uint *)(this + 0x10);
      if (-1 < (int)uVar12) {
        if ((int)(uVar12 / 600) <= (int)uVar11) {
          uVar11 = uVar12 / 600;
        }
        if ((int)uVar11 < 2) {
          uVar11 = 1;
        }
      }
      if (FLAG_parallel_pointer_update == '\0') {
        uVar12 = 1;
      }
      else {
        if (((DAT_01d3f358 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_01d3f358), iVar7 != 0)) {
          plVar8 = (long *)V8::GetCurrentPlatform();
          iVar7 = (**(code **)(*plVar8 + 0x28))();
          DAT_01d3f350 = iVar7 + 1;
          __cxa_guard_release(&DAT_01d3f358);
        }
        uVar12 = DAT_01d3f350;
        if ((int)uVar11 <= (int)DAT_01d3f350) {
          uVar12 = uVar11;
        }
        if (7 < (int)uVar12) {
          uVar12 = 8;
        }
      }
      goto LAB_00fcaae0;
    }
  }
  uVar12 = 0;
LAB_00fcaae0:
  if ((int)uVar12 <= iVar5 + iVar6) {
    uVar12 = iVar5 + iVar6;
  }
  if (0 < (int)uVar12) {
    iVar6 = 0;
    do {
      pTVar10 = operator_new(0x60);
      lVar13 = *(long *)(this + 8);
      ItemParallelJob::Task::Task(pTVar10,(Isolate *)(lVar13 + -0x8850));
      *(undefined ***)pTVar10 = &PTR__CancelableTask_01ca8770;
      *(undefined ***)(pTVar10 + 0x20) = &PTR__PointersUpdatingTask_01ca87a8;
      uVar9 = *(undefined8 *)(lVar13 + 0x7f8);
      *(undefined8 *)(pTVar10 + 0x58) = 0x40000002a;
      *(undefined8 *)(pTVar10 + 0x50) = uVar9;
      if (local_178 < puStack_170) {
        local_88 = (Item *)0x0;
        *local_178 = pTVar10;
        local_178 = local_178 + 1;
      }
      else {
        local_88 = (Item *)pTVar10;
        std::__ndk1::
        vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
        ::
        __push_back_slow_path<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>
                  ((vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
                    *)&local_180,(unique_ptr *)&local_88);
      }
      pIVar2 = local_88;
      local_88 = (Item *)0x0;
      if (pIVar2 != (Item *)0x0) {
        (**(code **)(*(long *)pIVar2 + 8))();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar12);
    ItemParallelJob::Run((ItemParallelJob *)&local_198);
    ArrayBufferCollector::FreeAllocations(*(ArrayBufferCollector **)(*(long *)(this + 8) + 0x818));
  }
  ItemParallelJob::~ItemParallelJob((ItemParallelJob *)&local_198);
  if ((local_158 != (byte **)0x0) && (*local_150 != 0)) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_150,local_148,local_140);
  }
  GCTracer::Scope::~Scope(aSStack_138);
  GCTracer::Scope::Scope(aSStack_138,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x2e);
  if (DAT_01d3f298 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f298 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f298;
  local_198 = (byte **)0x0;
  if ((*DAT_01d3f298 & 5) != 0) {
    uVar9 = GCTracer::Scope::Name(0x2e);
    local_88 = (Item *)0x0;
    local_80 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x58,pbVar1,uVar9,0,0,0,0,0,0,0,&local_88,0);
    plVar8 = local_80;
    local_80 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    pIVar2 = local_88;
    local_88 = (Item *)0x0;
    if (pIVar2 != (Item *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    local_188 = (byte *)GCTracer::Scope::Name(0x2e);
    local_198 = &local_190;
    local_190 = pbVar1;
    local_180 = uVar9;
  }
  Heap::UpdateReferencesInExternalStringTable(*(Heap **)(this + 8),FUN_00fcb84c);
  local_158 = &PTR__WeakObjectRetainer_01ca87f8;
  Heap::ProcessWeakListRoots(*(Heap **)(this + 8),(WeakObjectRetainer *)&local_158);
  if ((local_198 != (byte **)0x0) && (*local_190 != 0)) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_190,local_188,local_180);
  }
  GCTracer::Scope::~Scope(aSStack_138);
  if ((local_e8 != (byte **)0x0) && (*local_e0 != 0)) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_e0,local_d8,local_d0);
  }
  GCTracer::Scope::~Scope(aSStack_c8);
  return;
}

