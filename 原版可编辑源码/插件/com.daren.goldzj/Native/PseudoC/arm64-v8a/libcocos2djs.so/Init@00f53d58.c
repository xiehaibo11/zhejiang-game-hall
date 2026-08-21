
/* v8::internal::Isolate::Init(v8::internal::ReadOnlyDeserializer*,
   v8::internal::StartupDeserializer*) */

undefined8 __thiscall
v8::internal::Isolate::Init
          (Isolate *this,ReadOnlyDeserializer *param_1,StartupDeserializer *param_2)

{
  long lVar1;
  __shared_weak_count *p_Var2;
  Heap *this_00;
  Isolate *pIVar3;
  char *__filename;
  char cVar4;
  bool bVar5;
  long lVar6;
  char *pcVar7;
  Isolate IVar8;
  long lVar9;
  CompilationCache *this_01;
  void *pvVar10;
  undefined8 *puVar11;
  GlobalHandles *this_02;
  Bootstrapper *this_03;
  StubCache *pSVar12;
  RegExpStack *this_04;
  DateCache *this_05;
  HeapProfiler *this_06;
  Interpreter *this_07;
  CompilerDispatcher *this_08;
  Platform *pPVar13;
  WasmEngine *this_09;
  DeoptimizerData *this_10;
  long *plVar14;
  ulong uVar15;
  TracingCpuProfilerImpl *pTVar16;
  BuiltinsConstantsTableBuilder *this_11;
  OptimizingCompileDispatcher *this_12;
  RuntimeProfiler *this_13;
  AstStringConstants *this_14;
  long lVar17;
  Isolate *extraout_x1;
  Isolate *extraout_x1_00;
  Isolate *extraout_x1_01;
  Isolate *pIVar18;
  TracingCpuProfilerImpl *pTVar19;
  __shared_weak_count *p_Var20;
  IdentityMapBase *this_15;
  undefined8 uVar21;
  Isolate *local_1e0 [2];
  char *local_1d0;
  undefined8 local_1c8;
  __shared_weak_count *local_1c0;
  undefined **local_1b8;
  basic_filebuf<char,std::__ndk1::char_traits<char>> abStack_1b0 [24];
  uint auStack_198 [24];
  FILE *local_138;
  undefined4 local_118;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  IVar8 = (Isolate)(param_1 != (ReadOnlyDeserializer *)0x0);
  lVar9 = 0;
  if ((FLAG_profile_deserialization != '\0') && (!(bool)IVar8)) {
    lVar9 = base::TimeTicks::HighResolutionNow();
  }
  this_00 = (Heap *)(this + 0x8850);
  uVar21 = Heap::MonotonicallyIncreasingTimeInMs();
  *(undefined8 *)(this + 0xb6c0) = uVar21;
  *(undefined4 *)(this + 0xc618) = FLAG_deopt_every_n_times;
  pIVar3 = this + 0x8908;
  this[0xc61c] = FLAG_force_slow_path;
  this[0xb6b9] = (Isolate)0x0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pIVar3,0x10);
    if (bVar5) {
      *(long *)pIVar3 = *(long *)pIVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(Isolate **)(this + 0x94a0) = this + 0x2c30;
  *(Isolate **)(this + 0x94a8) = this + 0x2c28;
  *(Isolate **)(this + 0x94b0) = this + 0x2c38;
  *(Isolate **)(this + 0x94b8) = this + 0x2bc8;
  *(Isolate **)(this + 0x94c0) = this + 0x2bd8;
  *(Isolate **)(this + 0x94c8) = this + 0x2be0;
  *(Isolate **)(this + 0x94d0) = this + 0x2be8;
  *(Isolate **)(this + 0x94d8) = this + 0x2bf0;
  *(Isolate **)(this + 0x94e0) = this + 0x2bf8;
  *(Isolate **)(this + 0x94e8) = this + 0x2c00;
  *(Isolate **)(this + 0x94f0) = this + 0x2c19;
  *(Isolate **)(this + 0x94f8) = this + 0x2c50;
  this_01 = operator_new(0x90);
  CompilationCache::CompilationCache(this_01,this);
  *(CompilationCache **)(this + 0x9518) = this_01;
  pvVar10 = operator_new(0x500);
  memset(pvVar10,0,0x400);
  *(undefined8 *)((long)pvVar10 + 0x408) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x400) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x418) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x410) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x428) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x420) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x438) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x430) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x448) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x440) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x458) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x450) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x468) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x460) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x478) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x470) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x488) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x480) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x498) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x490) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x4a8) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x4a0) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x4b8) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x4b0) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x4c8) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x4c0) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x4d8) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x4d0) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x4e8) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x4e0) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x4f8) = 0xfffffffefffffffe;
  *(undefined8 *)((long)pvVar10 + 0x4f0) = 0xfffffffefffffffe;
  *(void **)(this + 0x9598) = pvVar10;
  puVar11 = operator_new(0xa008);
  *puVar11 = this;
  lVar17 = 0;
  do {
    lVar1 = lVar17 + 0x28;
    *(undefined8 *)((long)puVar11 + lVar17 + 0x10) = 0;
    *(undefined4 *)((long)puVar11 + lVar17 + 0x18) = 0;
    *(undefined8 *)((long)puVar11 + lVar17 + 0x20) = 0;
    *(undefined4 *)((long)puVar11 + lVar17 + 0x28) = 0xffffffff;
    lVar17 = lVar1;
  } while (lVar1 != 0xa000);
  memset(puVar11 + 1,0,0xa000);
  *(undefined8 **)(this + 0x95d8) = puVar11;
  this_02 = operator_new(0xa8);
  GlobalHandles::GlobalHandles(this_02,this);
  *(GlobalHandles **)(this + 0x95e0) = this_02;
  puVar11 = operator_new(0x38);
  puVar11[6] = 0;
  puVar11[1] = 0;
  *puVar11 = 0;
  puVar11[3] = 0;
  puVar11[2] = 0;
  puVar11[5] = 0;
  puVar11[4] = 0;
  *(undefined8 **)(this + 0x95e8) = puVar11;
  this_03 = operator_new(0x20);
  Bootstrapper::Bootstrapper(this_03,this);
  *(Bootstrapper **)(this + 0x9508) = this_03;
  puVar11 = operator_new(0x98);
  *puVar11 = this;
  puVar11[2] = 0;
  puVar11[1] = 0;
  puVar11[4] = 0;
  puVar11[3] = 0;
  puVar11[6] = 0;
  puVar11[5] = 0;
  puVar11[8] = 0;
  puVar11[7] = 0;
  puVar11[10] = 0;
  puVar11[9] = 0;
  puVar11[0xc] = 0;
  puVar11[0xb] = 0;
  puVar11[0xe] = 0;
  puVar11[0xd] = 0;
  *(undefined8 **)(this + 0x95c0) = puVar11;
  pSVar12 = operator_new(0x7808);
  StubCache::StubCache(pSVar12,this);
  *(StubCache **)(this + 0x9560) = pSVar12;
  pSVar12 = operator_new(0x7808);
  StubCache::StubCache(pSVar12,this);
  *(StubCache **)(this + 0x9568) = pSVar12;
  puVar11 = operator_new(0x20);
  *puVar11 = this;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *(undefined8 **)(this + 0x9580) = puVar11;
  this_04 = operator_new(0x230);
  RegExpStack::RegExpStack(this_04);
  *(RegExpStack **)(this + 0xb618) = this_04;
  *(Isolate **)(this_04 + 0x228) = this;
  this_05 = operator_new(600);
  DateCache::DateCache(this_05);
  *(DateCache **)(this + 0xb638) = this_05;
  this_06 = operator_new(0x88);
  HeapProfiler::HeapProfiler(this_06,this_00);
  *(HeapProfiler **)(this + 0xb6d0) = this_06;
  this_07 = operator_new(0x1820);
  interpreter::Interpreter::Interpreter(this_07,this);
  *(Interpreter **)(this + 0xb6e8) = this_07;
  this_08 = operator_new(0x180);
  pPVar13 = (Platform *)V8::GetCurrentPlatform();
  CompilerDispatcher::CompilerDispatcher(this_08,this,pPVar13,(long)FLAG_stack_size);
  *(CompilerDispatcher **)(this + 0xb700) = this_08;
  Logger::SetUp(*(Logger **)(this + 0x9558),this);
  local_1e0[0] = this;
  base::RecursiveMutex::Lock((RecursiveMutex *)(this + 0x9530));
  StackGuard::InitThread((ExecutionAccess *)(this + 0x48));
  base::RecursiveMutex::Unlock((RecursiveMutex *)(local_1e0[0] + 0x9530));
  Heap::SetUp(this_00);
  ReadOnlyHeap::SetUp(this,param_1);
  Heap::SetUpSpaces();
  this_09 = (WasmEngine *)
            ExternalReferenceTable::Init((ExternalReferenceTable *)(this + 0x1010),this);
  if (*(long *)(this + 0xc770) == 0) {
    wasm::WasmEngine::GetWasmEngine(this_09);
    p_Var2 = local_1c0;
    uVar21 = local_1c8;
    local_1c8 = 0;
    local_1c0 = (__shared_weak_count *)0x0;
    p_Var20 = *(__shared_weak_count **)(this + 0xc778);
    *(undefined8 *)(this + 0xc770) = uVar21;
    *(__shared_weak_count **)(this + 0xc778) = p_Var2;
    if (p_Var20 != (__shared_weak_count *)0x0) {
      p_Var2 = p_Var20 + 8;
      do {
        lVar17 = *(long *)p_Var2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*(long *)p_Var20 + 0x10))(p_Var20);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var20);
      }
    }
    wasm::WasmEngine::AddIsolate(*(WasmEngine **)(this + 0xc770),this);
    p_Var2 = local_1c0;
    if (local_1c0 != (__shared_weak_count *)0x0) {
      p_Var20 = local_1c0 + 8;
      do {
        lVar17 = *(long *)p_Var20;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var20,0x10);
        if (bVar5) {
          *(long *)p_Var20 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*(long *)local_1c0 + 0x10))(local_1c0);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
      }
    }
  }
  this_10 = operator_new(0x28);
  DeoptimizerData::DeoptimizerData(this_10,this_00);
  *(DeoptimizerData **)(this + 0x9570) = this_10;
  plVar14 = *(long **)(this + 0x9e10);
  if (plVar14 == (long *)0x0) {
    plVar14 = operator_new(0x10);
    *(bool *)(plVar14 + 1) = param_1 == (ReadOnlyDeserializer *)0x0;
    *plVar14 = (long)&PTR__SetupIsolateDelegate_01cc3e78;
    *(long **)(this + 0x9e10) = plVar14;
  }
  if (FLAG_inline_new == '\0') {
    Heap::DisableInlineAllocation(this_00);
    plVar14 = *(long **)(this + 0x9e10);
  }
  uVar15 = (**(code **)(*plVar14 + 0x18))(plVar14,this_00);
  if ((uVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8::FatalProcessOutOfMemory(this,"heap object creation",false);
  }
  if (param_1 == (ReadOnlyDeserializer *)0x0) {
    local_1e0[0] = *(Isolate **)(this + 0xa0);
    if (*(undefined8 **)(this + 0xc668) < *(undefined8 **)(this + 0xc670)) {
      **(undefined8 **)(this + 0xc668) = local_1e0[0];
      *(long *)(this + 0xc668) = *(long *)(this + 0xc668) + 8;
    }
    else {
      std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>::
      __push_back_slow_path<v8::internal::Object>
                ((vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *)
                 (this + 0xc660),(Object *)local_1e0);
    }
    ThreadLocalTop::Initialize((ThreadLocalTop *)(this + 0x2bb8),this);
    uVar21 = *(undefined8 *)(this + 0xa8);
    *(undefined8 *)(this + 0x2bd8) = uVar21;
    *(undefined8 *)(this + 0x2c10) = uVar21;
    *(undefined8 *)(this + 0x2c20) = uVar21;
    pTVar16 = operator_new(0x48);
    TracingCpuProfilerImpl::TracingCpuProfilerImpl(pTVar16,this);
    pTVar19 = *(TracingCpuProfilerImpl **)(this + 0xc780);
    *(TracingCpuProfilerImpl **)(this + 0xc780) = pTVar16;
    if (pTVar19 != (TracingCpuProfilerImpl *)0x0) {
      TracingCpuProfilerImpl::~TracingCpuProfilerImpl(pTVar19);
      operator_delete(pTVar19);
    }
    Bootstrapper::Initialize(*(Bootstrapper **)(this + 0x9508),true);
    this_11 = operator_new(0x48);
    BuiltinsConstantsTableBuilder::BuiltinsConstantsTableBuilder(this_11,this);
    *(BuiltinsConstantsTableBuilder **)(this + 0xc678) = this_11;
    (**(code **)(**(long **)(this + 0x9e10) + 0x10))(*(long **)(this + 0x9e10),this);
    uVar21 = Heap::builtin(this_00,0x38);
    Heap::SetInterpreterEntryTrampolineForProfiling(this_00,uVar21);
    BuiltinsConstantsTableBuilder::Finalize(*(BuiltinsConstantsTableBuilder **)(this + 0xc678));
    pvVar10 = *(void **)(this + 0xc678);
    if (pvVar10 != (void *)0x0) {
      this_15 = (IdentityMapBase *)((long)pvVar10 + 8);
      *(undefined ***)this_15 = &PTR__IdentityMap_01ca5ee8;
      IdentityMapBase::Clear(this_15);
      IdentityMapBase::~IdentityMapBase(this_15);
      operator_delete(pvVar10);
    }
    *(undefined8 *)(this + 0xc678) = 0;
    CreateAndSetEmbeddedBlob(this);
  }
  else {
    ThreadLocalTop::Initialize((ThreadLocalTop *)(this + 0x2bb8),this);
    uVar21 = *(undefined8 *)(this + 0xa8);
    *(undefined8 *)(this + 0x2bd8) = uVar21;
    *(undefined8 *)(this + 0x2c10) = uVar21;
    *(undefined8 *)(this + 0x2c20) = uVar21;
    pTVar16 = operator_new(0x48);
    TracingCpuProfilerImpl::TracingCpuProfilerImpl(pTVar16,this);
    pTVar19 = *(TracingCpuProfilerImpl **)(this + 0xc780);
    *(TracingCpuProfilerImpl **)(this + 0xc780) = pTVar16;
    if (pTVar19 != (TracingCpuProfilerImpl *)0x0) {
      TracingCpuProfilerImpl::~TracingCpuProfilerImpl(pTVar19);
      operator_delete(pTVar19);
    }
    Bootstrapper::Initialize(*(Bootstrapper **)(this + 0x9508),false);
    (**(code **)(**(long **)(this + 0x9e10) + 0x10))(*(long **)(this + 0x9e10),this);
  }
  init_memcopy_functions();
  if (FLAG_log_internal_timer_events != '\0') {
    *(code **)(this + 0xb748) = Logger::DefaultEventLoggerSentinel;
  }
  if ((FLAG_trace_turbo_graph == '\0' && FLAG_trace_turbo == '\0') && FLAG_turbo_profiling == '\0')
  {
    if (FLAG_concurrent_recompilation != '\0') {
      this_12 = operator_new(0x108);
      OptimizingCompileDispatcher::OptimizingCompileDispatcher(this_12,this);
      *(OptimizingCompileDispatcher **)(this + 0xc610) = this_12;
    }
  }
  else {
    PrintF("Concurrent recompilation has been disabled for tracing.\n");
  }
  this_13 = operator_new(0x10);
  RuntimeProfiler::RuntimeProfiler(this_13,this);
  *(RuntimeProfiler **)(this + 0x9510) = this_13;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pIVar3,0x10);
    if (bVar5) {
      *(long *)pIVar3 = *(long *)pIVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  CodeSpaceMemoryModificationScope::CodeSpaceMemoryModificationScope
            ((CodeSpaceMemoryModificationScope *)local_1e0,this_00);
  if (param_1 == (ReadOnlyDeserializer *)0x0) {
    ReadOnlySpace::ClearStringPaddingIfNeeded(*(ReadOnlySpace **)(this + 0x8970));
    ReadOnlyHeap::OnCreateHeapObjectsComplete(*(Isolate **)(this + 0x9478));
  }
  else {
    StartupDeserializer::DeserializeInto(param_2,this);
  }
  StubCache::Initialize(*(StubCache **)(this + 0x9560));
  StubCache::Initialize(*(StubCache **)(this + 0x9568));
  interpreter::Interpreter::Initialize(*(Interpreter **)(this + 0xb6e8));
  Heap::NotifyDeserializationComplete(this_00);
  CodeSpaceMemoryModificationScope::~CodeSpaceMemoryModificationScope
            ((CodeSpaceMemoryModificationScope *)local_1e0);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pIVar3,0x10);
    if (bVar5) {
      *(long *)pIVar3 = *(long *)pIVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (FLAG_verify_heap != '\0') {
    Heap::VerifyReadOnlyHeap(this_00);
  }
  if (*(long **)(this + 0x9e10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x9e10) + 8))();
  }
  *(undefined8 *)(this + 0x9e10) = 0;
  Builtins::InitializeBuiltinEntryTable(this);
  Builtins::EmitCodeCreateEvents(this);
  pIVar18 = extraout_x1;
  if (FLAG_print_builtin_code != '\0') {
    Builtins::PrintBuiltinCode((Builtins *)(this + 0x9e00));
    pIVar18 = extraout_x1_00;
  }
  if (FLAG_print_builtin_size != '\0') {
    Builtins::PrintBuiltinSize((Builtins *)(this + 0x9e00));
    pIVar18 = extraout_x1_01;
  }
  uVar21 = *(undefined8 *)(this + 0xa8);
  *(undefined8 *)(this + 0x2bd8) = uVar21;
  *(undefined8 *)(this + 0x2c10) = uVar21;
  *(undefined8 *)(this + 0x2c20) = uVar21;
  if (FLAG_trace_turbo == '\0') goto LAB_00f54674;
  GetTurboCfgFileName(this,pIVar18);
  pcVar7 = local_1d0;
  pIVar18 = local_1e0[0];
  local_1b8 = (undefined **)0x1c6e608;
  local_108[0] = (undefined **)0x1c6e630;
  std::__ndk1::ios_base::init((ios_base *)local_108,abStack_1b0);
  local_78 = 0xffffffff;
  local_1b8 = &PTR__basic_ofstream_01c6e5b8;
  local_108[0] = &PTR__basic_ofstream_01c6e5e0;
  local_80 = 0;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf(abStack_1b0);
  if (local_138 == (FILE *)0x0) {
    __filename = (char *)((ulong)local_1e0 | 1);
    if (((ulong)pIVar18 & 1) != 0) {
      __filename = pcVar7;
    }
    local_138 = fopen(__filename,"w");
    if (local_138 == (FILE *)0x0) goto LAB_00f545fc;
    local_118 = 0x30;
  }
  else {
LAB_00f545fc:
    std::__ndk1::ios_base::clear
              ((ios_base *)(abStack_1b0 + (long)(local_1b8[-3] + -8)),
               *(uint *)((long)auStack_198 + (long)local_1b8[-3]) | 4);
  }
  local_1b8 = &PTR__basic_ofstream_01c6e5b8;
  local_108[0] = &PTR__basic_ofstream_01c6e5e0;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf(abStack_1b0);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  if (((ulong)local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
LAB_00f54674:
  uVar21 = *(undefined8 *)(this + 0x95a0);
  lVar17 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  this_14 = operator_new(0x200);
  AstStringConstants::AstStringConstants(this_14,this,*(ulong *)(*(long *)(this + 0x490) + 7));
  *(AstStringConstants **)(this + 0xb6e0) = this_14;
  *(undefined8 *)(this + 0x95a0) = uVar21;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(long *)(this + 0x95a8) != lVar17) {
    *(long *)(this + 0x95a8) = lVar17;
    HandleScope::DeleteExtensions(this);
  }
  this[0xb6ba] = IVar8;
  if (0 < FLAG_stress_sampling_allocation_profiler) {
    HeapProfiler::StartSamplingHeapProfiler
              (*(HeapProfiler **)(this + 0xb6d0),FLAG_stress_sampling_allocation_profiler,0x80,1);
  }
  if (FLAG_profile_deserialization != '\0' && !(bool)IVar8) {
    lVar17 = base::TimeTicks::HighResolutionNow();
    local_1e0[0] = (Isolate *)(lVar17 - lVar9);
    base::TimeDelta::InMillisecondsF((TimeDelta *)local_1e0);
    PrintF("[Initializing isolate from scratch took %0.3f ms]\n");
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pIVar3,0x10);
    if (bVar5) {
      *(long *)pIVar3 = *(long *)pIVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

