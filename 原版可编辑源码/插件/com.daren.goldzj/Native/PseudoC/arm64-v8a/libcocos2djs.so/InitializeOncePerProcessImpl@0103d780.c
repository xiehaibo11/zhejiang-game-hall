
/* v8::internal::V8::InitializeOncePerProcessImpl() */

void v8::internal::V8::InitializeOncePerProcessImpl(void)

{
  char *__filename;
  long lVar1;
  byte bVar2;
  char *pcVar3;
  Isolate *extraout_x1;
  byte local_1c8 [16];
  char *local_1b8;
  undefined **local_1b0;
  basic_filebuf<char,std::__ndk1::char_traits<char>> abStack_1a8 [24];
  uint auStack_190 [24];
  FILE *local_130;
  undefined4 local_110;
  undefined **local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FlagList::EnforceFlagImplications();
  if ((FLAG_predictable != '\0') && (FLAG_random_seed == 0)) {
    FLAG_random_seed = 0x303b;
  }
  if (FLAG_stress_compaction != '\0') {
    FLAG_force_marking_deque_overflows = 1;
    FLAG_gc_global = 1;
    FLAG_max_semi_space_size = 1;
  }
  if (FLAG_trace_turbo == '\0') goto LAB_0103d910;
  Isolate::GetTurboCfgFileName((Isolate *)0x0,extraout_x1);
  pcVar3 = local_1b8;
  bVar2 = local_1c8[0];
  local_1b0 = (undefined **)0x1c6e608;
  local_100[0] = (undefined **)0x1c6e630;
  std::__ndk1::ios_base::init((ios_base *)local_100,abStack_1a8);
  local_70 = 0xffffffff;
  local_1b0 = &PTR__basic_ofstream_01c6e5b8;
  local_100[0] = &PTR__basic_ofstream_01c6e5e0;
  local_78 = 0;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf(abStack_1a8);
  if (local_130 == (FILE *)0x0) {
    __filename = (char *)((ulong)local_1c8 | 1);
    if ((bVar2 & 1) != 0) {
      __filename = pcVar3;
    }
    local_130 = fopen(__filename,"w");
    if (local_130 == (FILE *)0x0) goto LAB_0103d89c;
    local_110 = 0x30;
  }
  else {
LAB_0103d89c:
    std::__ndk1::ios_base::clear
              ((ios_base *)(abStack_1a8 + (long)(local_1b0[-3] + -8)),
               *(uint *)((long)auStack_190 + (long)local_1b0[-3]) | 4);
  }
  local_1b0 = &PTR__basic_ofstream_01c6e5b8;
  local_100[0] = &PTR__basic_ofstream_01c6e5e0;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf(abStack_1a8);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
  if ((local_1c8[0] & 1) != 0) {
    operator_delete(local_1b8);
  }
LAB_0103d910:
  if ((FLAG_jitless != '\0') && (FLAG_correctness_fuzzer_suppressions == '\0')) {
    FLAG_expose_wasm = 0;
  }
  if ((FLAG_regexp_interpret_all != '\0') && (FLAG_regexp_tier_up != '\0')) {
    FLAG_regexp_tier_up = '\0';
  }
  if ((FLAG_jitless != '\0') && (FLAG_interpreted_frames_native_stack != '\0')) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "The --jitless and --interpreted-frames-native-stack flags are incompatible.");
  }
  base::OS::Initialize((bool)FLAG_hard_abort,FLAG_gc_fake_mmap);
  if (FLAG_random_seed != 0) {
    SetRandomMmapSeed((long)FLAG_random_seed);
  }
  Isolate::InitializeOncePerProcess();
  if (CpuFeatures::initialized_ == '\0') {
    CpuFeatures::initialized_ = '\x01';
    CpuFeatures::ProbeImpl(false);
  }
  ElementsAccessor::InitializeOncePerProcess();
  Bootstrapper::InitializeOncePerProcess();
  CallDescriptors::InitializeOncePerProcess();
  wasm::WasmEngine::InitializeOncePerProcess();
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

