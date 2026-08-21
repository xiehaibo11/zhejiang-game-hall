
/* v8::internal::Isolate::Deinit() */

void __thiscall v8::internal::Isolate::Deinit(Isolate *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  Sampler *this_00;
  long lVar5;
  long lVar6;
  TracingCpuProfilerImpl *this_01;
  OptimizingCompileDispatcher *this_02;
  __shared_weak_count *this_03;
  Zone *pZVar7;
  undefined8 *puVar8;
  long *plVar9;
  DeoptimizerData *this_04;
  CompilerDispatcher *this_05;
  void *pvVar10;
  void *pvVar11;
  
  this_01 = *(TracingCpuProfilerImpl **)(this + 0xc780);
  *(undefined8 *)(this + 0xc780) = 0;
  if (this_01 != (TracingCpuProfilerImpl *)0x0) {
    TracingCpuProfilerImpl::~TracingCpuProfilerImpl(this_01);
    operator_delete(this_01);
  }
  if (0 < FLAG_stress_sampling_allocation_profiler) {
    HeapProfiler::StopSamplingHeapProfiler(*(HeapProfiler **)(this + 0xb6d0));
  }
  Debug::Unload(*(Debug **)(this + 0xb6c8));
  wasm::WasmEngine::DeleteCompileJobsOnIsolate(*(WasmEngine **)(this + 0xc770),this);
  if (*(OptimizingCompileDispatcher **)(this + 0xc610) != (OptimizingCompileDispatcher *)0x0) {
    OptimizingCompileDispatcher::Stop(*(OptimizingCompileDispatcher **)(this + 0xc610));
    this_02 = *(OptimizingCompileDispatcher **)(this + 0xc610);
    if (this_02 != (OptimizingCompileDispatcher *)0x0) {
      OptimizingCompileDispatcher::~OptimizingCompileDispatcher(this_02);
      operator_delete(this_02);
    }
    *(undefined8 *)(this + 0xc610) = 0;
  }
  BackingStore::RemoveSharedWasmMemoryObjects(this);
  MarkCompactCollector::EnsureSweepingCompleted(*(MarkCompactCollector **)(this + 0x9050));
  MemoryAllocator::Unmapper::EnsureUnmappingCompleted((Unmapper *)(*(long *)(this + 0x9070) + 0x88))
  ;
  DumpAndResetStats(this);
  if (FLAG_print_deopt_stress != '\0') {
    PrintF((__sFILE *)waitpid,"=== Stress deopt counter: %u\n",(ulong)*(uint *)(this + 0xc618));
  }
  this_00 = (Sampler *)Logger::sampler(*(Logger **)(this + 0x9558));
  if ((this_00 != (Sampler *)0x0) && (((byte)this_00[0x20] & 1) != 0)) {
    sampler::Sampler::Stop(this_00);
  }
  ThreadLocalTop::Free((ThreadLocalTop *)(this + 0x2bb8));
  Logger::StopProfilerThread(*(Logger **)(this + 0x9558));
  Heap::StartTearDown((Heap *)(this + 0x8850));
  base::Mutex::Lock((Mutex *)(this + 0xc72c));
  while (pvVar10 = *(void **)(this + 0xc758), pvVar10 != (void *)0x0) {
    *(undefined8 *)(this + 0xc758) = 0;
    do {
      (**(code **)((long)pvVar10 + 0x20))(*(undefined8 *)((long)pvVar10 + 0x18));
      pvVar11 = *(void **)((long)pvVar10 + 0x10);
      operator_delete(pvVar10);
      pvVar10 = pvVar11;
    } while (pvVar11 != (void *)0x0);
  }
  base::Mutex::Unlock((Mutex *)(this + 0xc72c));
  this_04 = *(DeoptimizerData **)(this + 0x9570);
  if (this_04 != (DeoptimizerData *)0x0) {
    DeoptimizerData::~DeoptimizerData(this_04);
    operator_delete(this_04);
  }
  *(undefined8 *)(this + 0x9570) = 0;
  Builtins::TearDown((Builtins *)(this + 0x9e00));
  Bootstrapper::TearDown(*(Bootstrapper **)(this + 0x9508));
  if (*(void **)(this + 0x9510) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x9510));
    *(undefined8 *)(this + 0x9510) = 0;
  }
  if (*(long **)(this + 0xb6d0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb6d0) + 0x20))();
  }
  *(undefined8 *)(this + 0xb6d0) = 0;
  CompilerDispatcher::AbortAll(*(CompilerDispatcher **)(this + 0xb700));
  this_05 = *(CompilerDispatcher **)(this + 0xb700);
  if (this_05 != (CompilerDispatcher *)0x0) {
    CompilerDispatcher::~CompilerDispatcher(this_05);
    operator_delete(this_05);
  }
  *(undefined8 *)(this + 0xb700) = 0;
  CancelableTaskManager::CancelAndWait(*(CancelableTaskManager **)(this + 0xc700));
  Heap::TearDown((Heap *)(this + 0x8850));
  Logger::TearDown(*(Logger **)(this + 0x9558));
  if (*(WasmEngine **)(this + 0xc770) != (WasmEngine *)0x0) {
    wasm::WasmEngine::RemoveIsolate(*(WasmEngine **)(this + 0xc770),this);
    this_03 = *(__shared_weak_count **)(this + 0xc778);
    *(undefined8 *)(this + 0xc778) = 0;
    *(undefined8 *)(this + 0xc770) = 0;
    if (this_03 != (__shared_weak_count *)0x0) {
      p_Var1 = this_03 + 8;
      do {
        lVar5 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*(long *)this_03 + 0x10))(this_03);
        std::__ndk1::__shared_weak_count::__release_weak(this_03);
      }
    }
  }
  TearDownEmbeddedBlob(this);
  if (*(long **)(this + 0xb6e8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb6e8) + 8))();
  }
  pZVar7 = *(Zone **)(this + 0xb6e0);
  *(undefined8 *)(this + 0xb6e8) = 0;
  if (pZVar7 != (Zone *)0x0) {
    free(*(void **)(pZVar7 + 0x40));
    Zone::~Zone(pZVar7);
    operator_delete(pZVar7);
  }
  puVar8 = *(undefined8 **)(this + 0xb6d8);
  *(undefined8 *)(this + 0xb6e0) = 0;
  *(undefined8 *)(this + 0xb6d8) = 0;
  if (puVar8 != (undefined8 *)0x0) {
    base::Mutex::~Mutex((Mutex *)(puVar8 + 5));
    puVar4 = (void *)puVar8[2];
    while (puVar4 != (void *)0x0) {
      pvVar10 = (void *)*puVar4;
      operator_delete(puVar4);
      puVar4 = pvVar10;
    }
    pvVar10 = (void *)*puVar8;
    *puVar8 = 0;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
    operator_delete(puVar8);
  }
  puVar8 = *(undefined8 **)(this + 0xb7b8);
  if (puVar8 != (undefined8 *)0x0) {
    free((void *)*puVar8);
    operator_delete(puVar8);
  }
  pZVar7 = *(Zone **)(this + 0xb6f8);
  *(undefined8 *)(this + 0xb7b8) = 0;
  if (pZVar7 != (Zone *)0x0) {
    Zone::~Zone(pZVar7);
    operator_delete(pZVar7);
  }
  *(undefined8 *)(this + 0xb6f8) = 0;
  *(undefined8 *)(this + 0xb6f0) = 0;
  puVar8 = *(undefined8 **)(this + 0xb7b0);
  if (puVar8 != (undefined8 *)0x0) {
    free((void *)*puVar8);
    operator_delete(puVar8);
  }
  *(undefined8 *)(this + 0xb7b0) = 0;
  base::Mutex::Lock((Mutex *)(this + 0xc7a0));
  for (plVar9 = *(long **)(this + 0xc7d8); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    if ((void *)plVar9[3] != (void *)0x0) {
      operator_delete((void *)plVar9[3]);
    }
  }
  if (*(long *)(this + 0xc7e0) != 0) {
    puVar8 = *(void **)(this + 0xc7d8);
    while (puVar8 != (void *)0x0) {
      pvVar10 = (void *)*puVar8;
      operator_delete(puVar8);
      puVar8 = pvVar10;
    }
    lVar5 = *(long *)(this + 0xc7d0);
    *(undefined8 *)(this + 0xc7d8) = 0;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0xc7c8) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    *(undefined8 *)(this + 0xc7e0) = 0;
  }
  base::Mutex::Unlock((Mutex *)(this + 0xc7a0));
  return;
}

