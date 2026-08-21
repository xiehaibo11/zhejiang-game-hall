
/* void 
   v8::internal::MarkCompactCollectorBase::CreateAndExecuteEvacuationTasks<v8::internal::FullEvacuator,
   v8::internal::MarkCompactCollector>(v8::internal::MarkCompactCollector*,
   v8::internal::ItemParallelJob*, v8::internal::MigrationObserver*, long) */

void __thiscall
v8::internal::MarkCompactCollectorBase::
CreateAndExecuteEvacuationTasks<v8::internal::FullEvacuator,v8::internal::MarkCompactCollector>
          (MarkCompactCollectorBase *this,MarkCompactCollector *param_1,ItemParallelJob *param_2,
          MigrationObserver *param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  MigrationObserver *pMVar4;
  uint uVar5;
  int iVar6;
  Heap *this_00;
  ulong uVar7;
  long *plVar8;
  FullEvacuator *this_01;
  Task *this_02;
  ulong extraout_x1;
  ulong uVar9;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined **local_88;
  Heap *pHStack_80;
  MigrationObserver *local_78;
  
  if (FLAG_trace_evacuation == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = GCTracer::CompactionSpeedInBytesPerMillisecond
                       (*(GCTracer **)(*(long *)(this + 8) + 0x7f8));
  }
  uVar5 = Isolate::LogObjectRelocation((Isolate *)(*(long *)(this + 8) + -0x8850));
  this_00 = *(Heap **)(this + 8);
  local_88 = &PTR__MigrationObserver_01ca8e20;
  pHStack_80 = this_00;
  if (FLAG_parallel_compaction == '\0') {
    uVar11 = 1;
  }
  else {
    lVar16 = *(long *)param_2;
    lVar15 = *(long *)(param_2 + 8);
    if (((DAT_01d3f358 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_01d3f358), iVar6 != 0)) {
      plVar8 = (long *)V8::GetCurrentPlatform();
      iVar6 = (**(code **)(*plVar8 + 0x28))();
      DAT_01d3f350 = iVar6 + 1;
      __cxa_guard_release(&DAT_01d3f358);
    }
    this_00 = *(Heap **)(this + 8);
    uVar10 = (uint)((ulong)(lVar15 - lVar16) >> 3);
    uVar11 = DAT_01d3f350;
    if ((int)uVar10 <= (int)DAT_01d3f350) {
      uVar11 = uVar10;
    }
  }
  uVar7 = Heap::CanExpandOldGeneration(this_00,(long)(int)(uVar11 << 0x12));
  if ((uVar7 & 1) == 0) {
    uVar11 = 1;
  }
  uVar7 = -(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3;
  if ((ulong)(long)(int)uVar11 >> 0x3d != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  plVar8 = operator_new__(uVar7);
  if ((int)uVar11 < 1) {
    ItemParallelJob::Run(param_2);
  }
  else {
    uVar14 = (ulong)uVar11;
    uVar9 = extraout_x1;
    uVar7 = uVar14;
    plVar12 = plVar8;
    do {
      this_01 = Malloced::operator_new((Malloced *)0x3a8,uVar9);
      FullEvacuator::FullEvacuator(this_01,param_1);
      *plVar12 = (long)this_01;
      if ((uVar5 & 1) != 0) {
        *(code **)(this_01 + 0x70) =
             EvacuateVisitorBase::
             RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)1>;
        if (*(undefined8 **)(this_01 + 0x60) == *(undefined8 **)(this_01 + 0x68)) {
          local_78 = (MigrationObserver *)&local_88;
          std::__ndk1::
          vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
          ::__push_back_slow_path<v8::internal::MigrationObserver*const&>
                    ((vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
                      *)(this_01 + 0x58),&local_78);
        }
        else {
          **(undefined8 **)(this_01 + 0x60) = (MigrationObserver *)&local_88;
          *(long *)(this_01 + 0x60) = *(long *)(this_01 + 0x60) + 8;
        }
        *(code **)(this_01 + 0x138) =
             EvacuateVisitorBase::
             RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)1>;
        if (*(undefined8 **)(this_01 + 0x128) == *(undefined8 **)(this_01 + 0x130)) {
          local_78 = (MigrationObserver *)&local_88;
          std::__ndk1::
          vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
          ::__push_back_slow_path<v8::internal::MigrationObserver*const&>
                    ((vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
                      *)(this_01 + 0x120),&local_78);
        }
        else {
          **(undefined8 **)(this_01 + 0x128) = (MigrationObserver *)&local_88;
          *(long *)(this_01 + 0x128) = *(long *)(this_01 + 0x128) + 8;
          local_78 = (MigrationObserver *)&local_88;
        }
      }
      if (param_3 != (MigrationObserver *)0x0) {
        lVar16 = *plVar12;
        *(code **)(lVar16 + 0x70) =
             EvacuateVisitorBase::
             RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)1>;
        if (*(undefined8 **)(lVar16 + 0x60) == *(undefined8 **)(lVar16 + 0x68)) {
          local_78 = param_3;
          std::__ndk1::
          vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
          ::__push_back_slow_path<v8::internal::MigrationObserver*const&>
                    ((vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
                      *)(lVar16 + 0x58),&local_78);
        }
        else {
          **(undefined8 **)(lVar16 + 0x60) = param_3;
          *(long *)(lVar16 + 0x60) = *(long *)(lVar16 + 0x60) + 8;
        }
        *(code **)(lVar16 + 0x138) =
             EvacuateVisitorBase::
             RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)1>;
        if (*(undefined8 **)(lVar16 + 0x128) == *(undefined8 **)(lVar16 + 0x130)) {
          local_78 = param_3;
          std::__ndk1::
          vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
          ::__push_back_slow_path<v8::internal::MigrationObserver*const&>
                    ((vector<v8::internal::MigrationObserver*,std::__ndk1::allocator<v8::internal::MigrationObserver*>>
                      *)(lVar16 + 0x120),&local_78);
        }
        else {
          **(undefined8 **)(lVar16 + 0x128) = param_3;
          *(long *)(lVar16 + 0x128) = *(long *)(lVar16 + 0x128) + 8;
          local_78 = param_3;
        }
      }
      this_02 = operator_new(0x60);
      lVar16 = *(long *)(this + 8);
      lVar15 = *plVar12;
      ItemParallelJob::Task::Task(this_02,(Isolate *)(lVar16 + -0x8850));
      *(long *)(this_02 + 0x50) = lVar15;
      *(undefined ***)this_02 = &PTR__CancelableTask_01ca8ec0;
      *(undefined ***)(this_02 + 0x20) = &PTR__PageEvacuationTask_01ca8ef8;
      *(undefined8 *)(this_02 + 0x58) = *(undefined8 *)(lVar16 + 0x7f8);
      if (*(undefined8 **)(param_2 + 0x20) < *(undefined8 **)(param_2 + 0x28)) {
        local_78 = (MigrationObserver *)0x0;
        **(undefined8 **)(param_2 + 0x20) = this_02;
        *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 8;
        uVar9 = extraout_x1_00;
      }
      else {
        local_78 = (MigrationObserver *)this_02;
        std::__ndk1::
        vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
        ::
        __push_back_slow_path<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>
                  ((vector<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::ItemParallelJob::Task,std::__ndk1::default_delete<v8::internal::ItemParallelJob::Task>>>>
                    *)(param_2 + 0x18),(unique_ptr *)&local_78);
        uVar9 = extraout_x1_01;
      }
      pMVar4 = local_78;
      local_78 = (MigrationObserver *)0x0;
      if (pMVar4 != (MigrationObserver *)0x0) {
        (**(code **)(*(long *)pMVar4 + 8))();
        uVar9 = extraout_x1_02;
      }
      uVar7 = uVar7 - 1;
      plVar12 = plVar12 + 1;
    } while (uVar7 != 0);
    ItemParallelJob::Run(param_2);
    plVar12 = plVar8;
    if (0 < (int)uVar11) {
      do {
        FullEvacuator::Finalize((FullEvacuator *)*plVar12);
        if ((long *)*plVar12 != (long *)0x0) {
          (**(code **)(*(long *)*plVar12 + 8))();
        }
        uVar14 = uVar14 - 1;
        plVar12 = plVar12 + 1;
      } while (uVar14 != 0);
    }
  }
  operator_delete__(plVar8);
  if (FLAG_trace_evacuation != '\0') {
    lVar13 = *(long *)(this + 8);
    dVar18 = (double)Heap::MonotonicallyIncreasingTimeInMs();
    dVar19 = *(double *)(lVar13 + 0x2e70);
    lVar16 = *(long *)param_2;
    lVar2 = *(long *)(param_2 + 8);
    lVar15 = *(long *)(param_2 + 0x18);
    lVar3 = *(long *)(param_2 + 0x20);
    puVar1 = &DAT_019b5a08;
    if (FLAG_parallel_compaction != '\0') {
      puVar1 = &DAT_018c0c05;
    }
    plVar8 = (long *)V8::GetCurrentPlatform();
    iVar6 = (**(code **)(*plVar8 + 0x28))();
    PrintIsolate((void *)(lVar13 + -0x8850),
                 "%8.0f ms: evacuation-summary: parallel=%s pages=%d wanted_tasks=%d tasks=%d cores=%d live_bytes=%ld compaction_speed=%.f\n"
                 ,dVar18 - dVar19,uVar17,puVar1,(ulong)(lVar2 - lVar16) >> 3 & 0xffffffff,
                 (ulong)uVar11,(ulong)(lVar3 - lVar15) >> 3 & 0xffffffff,(ulong)(iVar6 + 1),param_4)
    ;
  }
  return;
}

