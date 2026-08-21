
/* WARNING: Removing unreachable block (ram,0x00fd72fc) */
/* WARNING: Switch with 1 destination removed at 0x00fd7324 */
/* WARNING: Exceeded maximum restarts with more pending */
/* v8::internal::MinorMarkCompactCollector::MarkRootSetInParallel(v8::internal::MinorMarkCompactCollector::RootMarkingVisitor*)
    */

void __thiscall
v8::internal::MinorMarkCompactCollector::MarkRootSetInParallel
          (MinorMarkCompactCollector *this,RootMarkingVisitor *param_1)

{
  byte *pbVar1;
  Item *pIVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  Task *this_00;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  byte **local_120;
  byte *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  Scope aSStack_100 [64];
  ItemParallelJob aIStack_c0 [8];
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
  avStack_a8 [8];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined4 auStack_80 [2];
  Item *local_78;
  long *local_70;
  
  ItemParallelJob::ItemParallelJob
            (aIStack_c0,*(CancelableTaskManager **)(*(long *)(this + 8) + 0x3eb0),
             (Semaphore *)(this + 0x28));
  GCTracer::Scope::Scope(aSStack_100,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x52);
  if (DAT_01d3f2f8 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f2f8 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f2f8;
  local_120 = (byte **)0x0;
  if ((*DAT_01d3f2f8 & 5) != 0) {
    uVar7 = GCTracer::Scope::Name(0x52);
    local_78 = (Item *)0x0;
    local_70 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x58,pbVar1,uVar7,0,0,0,0,0,0,0,&local_78,0);
    plVar6 = local_70;
    local_70 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    pIVar2 = local_78;
    local_78 = (Item *)0x0;
    if (pIVar2 != (Item *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    local_110 = GCTracer::Scope::Name(0x52);
    local_120 = &local_118;
    local_118 = pbVar1;
    uStack_108 = uVar7;
  }
  GlobalHandles::IdentifyWeakUnmodifiedObjects
            (*(GlobalHandles **)(*(long *)(this + 8) + 0xd90),JSObject::IsUnmodifiedApiObject);
  Heap::IterateRoots(*(Heap **)(this + 8),param_1,1);
  lVar8 = *(long *)(this + 8);
  lVar12 = *(long *)(*(long *)(lVar8 + 0xf0) + 0x20);
  lVar11 = *(long *)(*(long *)(lVar8 + 0xf8) + 0x20);
  lVar15 = *(long *)(*(long *)(lVar8 + 0x110) + 0x20);
  lVar9 = *(long *)(*(long *)(lVar8 + 0x100) + 0x20);
  lVar8 = *(long *)(*(long *)(lVar8 + 0x108) + 0x20);
                    /* WARNING (jumptable): Second-stage recovery error */
                    /* WARNING: This code block may not be properly labeled as switch case */
  while (lVar3 = lVar11, lVar12 != 0) {
    uVar16 = 0;
    lVar4 = *(long *)(lVar12 + 0xe0);
    lVar14 = lVar12;
joined_r0x00fd733c:
    lVar11 = lVar3;
    lVar12 = lVar4;
    if (lVar14 == 0) goto code_r0x00fd7428;
code_r0x00fd73b0:
    if (((*(long *)(lVar14 + 0x70) != 0 || *(long *)(lVar14 + 0x30) != 0) ||
         *(long *)(lVar14 + 0x78) != 0) || (*(long *)(lVar14 + 0x88) != 0)) {
      local_78 = operator_new(0x28);
      *(undefined ***)local_78 = &PTR__PageMarkingItem_01ca9008;
      *(undefined8 *)(local_78 + 8) = 0;
      *(long *)(local_78 + 0x10) = lVar14;
      *(undefined4 **)(local_78 + 0x18) = auStack_80;
      *(undefined4 *)(local_78 + 0x20) = 0;
      if (puStack_b8 == puStack_b0) {
        std::__ndk1::
        vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
        ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>
                  ((vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
                    *)aIStack_c0,&local_78);
      }
      else {
        *puStack_b8 = local_78;
        puStack_b8 = puStack_b8 + 1;
      }
    }
    if (5 < uVar16) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  if (lVar9 == 0) {
    lVar4 = lVar12;
    if (lVar11 == 0) {
      if (lVar8 == 0) {
        if (lVar15 != 0) {
          uVar16 = 4;
          lVar3 = *(long *)(lVar15 + 0xe0);
          lVar4 = lVar9;
          lVar14 = lVar15;
          goto joined_r0x00fd73ac;
        }
        goto code_r0x00fd7428;
      }
      uVar16 = 3;
      lVar14 = lVar8;
      lVar8 = *(long *)(lVar8 + 0xe0);
    }
    else {
      uVar16 = 2;
      lVar3 = *(long *)(lVar11 + 0xe0);
      lVar14 = lVar11;
    }
    goto joined_r0x00fd733c;
  }
  uVar16 = 1;
  lVar3 = lVar15;
  lVar4 = *(long *)(lVar9 + 0xe0);
  lVar14 = lVar9;
joined_r0x00fd73ac:
  lVar9 = lVar4;
  lVar15 = lVar3;
  if (lVar14 != 0) goto code_r0x00fd73b0;
code_r0x00fd7428:
  if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_118,local_110,uStack_108);
  }
  GCTracer::Scope::~Scope(aSStack_100);
  GCTracer::Scope::Scope(aSStack_100,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x53);
  if (pbRam0000000001d3f300 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    pbRam0000000001d3f300 =
         (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.gc");
  }
  pbVar1 = pbRam0000000001d3f300;
  local_120 = (byte **)0x0;
  if ((*pbRam0000000001d3f300 & 5) != 0) {
    uVar7 = GCTracer::Scope::Name(0x53);
    local_78 = (Item *)0x0;
    local_70 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x58,pbVar1,uVar7,0,0,0,0,0,0,0,&local_78,0);
    plVar6 = local_70;
    local_70 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    pIVar2 = local_78;
    local_78 = (Item *)0x0;
    if (pIVar2 != (Item *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    local_110 = GCTracer::Scope::Name(0x53);
    local_120 = &local_118;
    local_118 = pbVar1;
    uStack_108 = uVar7;
  }
  uVar10 = *(ulong *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x138);
  iVar5 = MemoryChunkLayout::AllocatableMemoryInDataPage();
  if (FLAG_minor_mc_parallel_marking == '\0') {
    iVar13 = 1;
  }
  else {
    iVar5 = (int)(uVar10 >> 0x12) * iVar5;
    iVar13 = iVar5 + 0x7ffff;
    if (-1 < iVar5) {
      iVar13 = iVar5;
    }
    iVar13 = iVar13 >> 0x13;
    if (iVar13 < 2) {
      iVar13 = 1;
    }
    if (((DAT_01d3f358 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_01d3f358), iVar5 != 0)) {
      plVar6 = (long *)V8::GetCurrentPlatform();
      iVar5 = (**(code **)(*plVar6 + 0x28))();
      DAT_01d3f350 = iVar5 + 1;
      __cxa_guard_release(&DAT_01d3f358);
    }
    if (7 < iVar13) {
      iVar13 = 8;
    }
    if ((DAT_01d3f350 < iVar13) && (iVar13 = DAT_01d3f350, DAT_01d3f350 < 1)) goto code_r0x00fd76e4;
  }
  iVar5 = 0;
  do {
    this_00 = operator_new(0xb8);
    lVar15 = *(long *)(this + 8);
    uVar7 = *(undefined8 *)(this + 0x18);
    ItemParallelJob::Task::Task(this_00,(Isolate *)(lVar15 + -0x8850));
    *(MinorMarkCompactCollector **)(this_00 + 0x50) = this;
    *(undefined8 *)(this_00 + 0x58) = uVar7;
    *(undefined ***)(this_00 + 0x70) = &PTR__ObjectVisitor_01ca8820;
    *(undefined8 *)(this_00 + 0x78) = uVar7;
    *(undefined ***)this_00 = &PTR__YoungGenerationMarkingTask_01ca8b20;
    *(int *)(this_00 + 0x60) = iVar5;
    *(MinorMarkCompactCollector **)(this_00 + 0x68) = this + 0x68;
    *(int *)(this_00 + 0x80) = iVar5;
    *(MinorMarkCompactCollector **)(this_00 + 0x88) = this + 0x68;
    *(undefined8 *)(this_00 + 0xa8) = 0;
    *(undefined8 *)(this_00 + 0xa0) = 0;
    *(undefined ***)(this_00 + 0x20) = &PTR__YoungGenerationMarkingTask_01ca8b58;
    *(undefined8 *)(this_00 + 0x98) = 0;
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined4 *)(this_00 + 0xb0) = 0x3f800000;
    uVar10 = *(ulong *)(*(long *)(lVar15 + 0xe8) + 0x138);
    lVar15 = MemoryChunkLayout::AllocatableMemoryInDataPage();
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<v8::internal::Page*,long>,std::__ndk1::__unordered_map_hasher<v8::internal::Page*,std::__ndk1::__hash_value_type<v8::internal::Page*,long>,v8::internal::MemoryChunk::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Page*,std::__ndk1::__hash_value_type<v8::internal::Page*,long>,std::__ndk1::equal_to<v8::internal::Page*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Page*,long>>>
    ::rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Page*,long>,std::__ndk1::__unordered_map_hasher<v8::internal::Page*,std::__ndk1::__hash_value_type<v8::internal::Page*,long>,v8::internal::MemoryChunk::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Page*,std::__ndk1::__hash_value_type<v8::internal::Page*,long>,std::__ndk1::equal_to<v8::internal::Page*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Page*,long>>>
              *)(this_00 + 0x90),
             (long)((float)((uVar10 >> 0x12) * lVar15 >> 0x12) / *(float *)(this_00 + 0xb0)));
    if (puStack_a0 < puStack_98) {
      local_78 = (Item *)0x0;
      *puStack_a0 = this_00;
      puStack_a0 = puStack_a0 + 1;
    }
    else {
      local_78 = (Item *)this_00;
      std::__ndk1::
      vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
      ::
      __push_back_slow_path<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>
                (avStack_a8,(unique_ptr *)&local_78);
    }
    pIVar2 = local_78;
    local_78 = (Item *)0x0;
    if (pIVar2 != (Item *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    iVar5 = iVar5 + 1;
  } while (iVar13 != iVar5);
code_r0x00fd76e4:
  ItemParallelJob::Run(aIStack_c0);
  if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_118,local_110,uStack_108);
  }
  GCTracer::Scope::~Scope(aSStack_100);
  ItemParallelJob::~ItemParallelJob(aIStack_c0);
  *(undefined4 *)(this + 0x10) = auStack_80[0];
  return;
}

