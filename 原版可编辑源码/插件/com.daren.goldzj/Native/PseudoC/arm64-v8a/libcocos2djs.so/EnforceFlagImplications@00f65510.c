
/* v8::internal::FlagList::EnforceFlagImplications() */

void v8::internal::FlagList::EnforceFlagImplications(void)

{
  bool bVar1;
  
  if (FLAG_es_staging != '\0') {
    FLAG_harmony = '\x01';
  }
  if (FLAG_harmony_import_meta != '\0') {
    FLAG_harmony_dynamic_import = 1;
  }
  if (FLAG_harmony != '\0') {
    FLAG_harmony_private_methods = 1;
  }
  if (FLAG_harmony_shipping == '\0') {
    FLAG_harmony_import_meta = '\0';
    FLAG_harmony_dynamic_import = 0;
    FLAG_harmony_namespace_exports = 0;
    FLAG_harmony_sharedarraybuffer = 0;
    FLAG_harmony_promise_all_settled = 0;
    FLAG_harmony_nullish = 0;
    FLAG_harmony_optional_chaining = 0;
  }
  if (FLAG_lite_mode != '\0') {
    FLAG_jitless = '\x01';
    FLAG_optimize_for_size = '\x01';
    FLAG_lazy_feedback_allocation = 1;
  }
  if (FLAG_future != '\0') {
    FLAG_write_protect_code_memory = 1;
  }
  if (FLAG_track_double_fields != '\0') {
    FLAG_track_fields = 1;
  }
  if (FLAG_track_heap_object_fields != '\0') {
    FLAG_track_fields = 1;
  }
  if (FLAG_track_computed_fields != '\0') {
    FLAG_track_fields = 1;
  }
  if (FLAG_track_field_types != '\0') {
    FLAG_track_fields = 1;
    FLAG_track_heap_object_fields = '\x01';
  }
  if (FLAG_jitless != '\0') {
    FLAG_track_field_types = '\0';
    FLAG_track_heap_object_fields = '\0';
    FLAG_validate_asm = '\0';
    FLAG_asm_wasm_lazy_compilation = 0;
    FLAG_opt = 0;
    FLAG_regexp_interpret_all = 1;
    FLAG_wasm_interpret_all = '\x01';
    FLAG_wasm_lazy_compilation = 0;
  }
  if (FLAG_turboprop != '\0') {
    FLAG_turbo_inlining = 0;
    FLAG_concurrent_inlining = 1;
    FLAG_interrupt_budget = 0x2800;
  }
  if (FLAG_future != '\0') {
    FLAG_concurrent_inlining = 1;
  }
  if (FLAG_trace_heap_broker_verbose != '\0') {
    FLAG_trace_heap_broker = 1;
  }
  if (FLAG_trace_heap_broker_memory != '\0') {
    FLAG_trace_heap_broker = 1;
  }
  if (FLAG_trace_turbo_scheduled != '\0') {
    FLAG_trace_turbo_graph = 1;
  }
  if (FLAG_stress_inline != '\0') {
    FLAG_max_inlined_bytecode_size = 999999;
    FLAG_max_inlined_bytecode_size_cumulative = 999999;
    FLAG_max_inlined_bytecode_size_absolute = 999999;
    FLAG_min_inlining_frequency = 0;
    FLAG_polymorphic_inlining = 1;
  }
  if (FLAG_turbo_stress_instruction_scheduling != '\0') {
    FLAG_turbo_instruction_scheduling = 1;
  }
  if (FLAG_optimize_for_size != '\0') {
    FLAG_max_semi_space_size = 1;
  }
  if (FLAG_future == '\0') {
    if (FLAG_wasm_tier_up != '\0') goto LAB_00f6582c;
  }
  else {
    FLAG_wasm_tier_up = '\x01';
LAB_00f6582c:
    FLAG_liftoff = 1;
  }
  if (FLAG_wasm_staging != '\0') {
    FLAG_experimental_wasm_anyref = 1;
    FLAG_experimental_wasm_bigint = 1;
    FLAG_experimental_wasm_mv = 1;
    FLAG_experimental_wasm_type_reflection = 1;
  }
  if (FLAG_wasm_fuzzer_gen_test != '\0') {
    FLAG_single_threaded = '\x01';
  }
  if (FLAG_validate_asm != '\0') {
    FLAG_asm_wasm_lazy_compilation = 1;
  }
  if (FLAG_wasm_interpret_all != '\0') {
    FLAG_asm_wasm_lazy_compilation = 0;
    FLAG_wasm_lazy_compilation = 0;
    FLAG_wasm_tier_up = '\0';
  }
  if (FLAG_trace_gc_verbose != '\0') {
    FLAG_trace_gc = 1;
  }
  if (FLAG_trace_gc_freelists_verbose != '\0') {
    FLAG_trace_gc_freelists = 1;
  }
  if (FLAG_trace_gc_object_stats == '\0') {
    if (FLAG_track_gc_object_stats != '\0') goto LAB_00f65944;
  }
  else {
    FLAG_track_gc_object_stats = '\x01';
LAB_00f65944:
    TracingFlags::gc_stats = 1;
    if (FLAG_trace_gc_object_stats != '\0') {
      FLAG_incremental_marking = 0;
    }
  }
  if (FLAG_track_retaining_path != '\0') {
    FLAG_incremental_marking = 0;
    FLAG_parallel_marking = 0;
    FLAG_concurrent_marking = 0;
  }
  if (FLAG_trace_detached_contexts != '\0') {
    FLAG_track_detached_contexts = 1;
  }
  if (FLAG_stress_flush_bytecode != '\0') {
    FLAG_flush_bytecode = 1;
  }
  if (FLAG_fuzzer_gc_analysis != '\0') {
    FLAG_stress_marking = 1;
    FLAG_stress_scavenge = 1;
  }
  if (FLAG_expose_gc_as != 0) {
    FLAG_expose_gc = 1;
  }
  if (FLAG_inline_new == '\0') {
    FLAG_turbo_allocation_folding = 0;
  }
  if (FLAG_max_lazy != '\0') {
    FLAG_lazy = 1;
  }
  if (FLAG_trace_opt_verbose != '\0') {
    FLAG_trace_opt = 1;
  }
  if (FLAG_parallel_compile_tasks != '\0') {
    FLAG_compiler_dispatcher = 1;
  }
  if (FLAG_trace_ic != '\0') {
    FLAG_log_code = 1;
    TracingFlags::ic_stats = 1;
  }
  if (FLAG_trace_maps != '\0') {
    FLAG_log_code = 1;
  }
  if (FLAG_runtime_call_stats != '\0') {
    TracingFlags::runtime_stats = 1;
  }
  if (FLAG_prof != '\0') {
    FLAG_prof_cpp = 1;
  }
  if (FLAG_perf_basic_prof != '\0') {
    FLAG_compact_code_space = 0;
  }
  if (FLAG_perf_basic_prof_only_functions != '\0') {
    FLAG_perf_basic_prof = '\x01';
  }
  if (FLAG_perf_prof != '\0') {
    FLAG_compact_code_space = 0;
    FLAG_write_protect_code_memory = 0;
    FLAG_wasm_write_protect_code_memory = 0;
    FLAG_perf_prof_unwinding_info = 1;
  }
  if (FLAG_log_internal_timer_events != '\0') {
    FLAG_prof = '\x01';
  }
  if (FLAG_sodium != '\0') {
    FLAG_print_code = 1;
    FLAG_print_opt_code = 1;
    FLAG_code_comments = 1;
  }
  if (FLAG_print_all_code != '\0') {
    FLAG_print_code = 1;
    FLAG_print_opt_code = 1;
    FLAG_print_code_verbose = 1;
    FLAG_print_builtin_code = 1;
    FLAG_print_regexp_code = 1;
    FLAG_code_comments = 1;
  }
  if (FLAG_predictable == '\0') {
    if (FLAG_single_threaded == '\0') {
      bVar1 = true;
      goto LAB_00f65c58;
    }
  }
  else {
    FLAG_single_threaded = '\x01';
    FLAG_memory_reducer = 0;
  }
  bVar1 = false;
  FLAG_wasm_num_compilation_tasks = 0;
  FLAG_wasm_async_compilation = 0;
LAB_00f65c58:
  if (FLAG_predictable_gc_schedule != '\0') {
    FLAG_min_semi_space_size = 4;
    FLAG_max_semi_space_size = 4;
    FLAG_heap_growing_percent = 0x1e;
    FLAG_idle_time_scavenge = 0;
    FLAG_memory_reducer = 0;
  }
  if (bVar1) {
    if (FLAG_single_threaded_gc == '\0') {
      ComputeFlagListHash();
      return;
    }
  }
  else {
    FLAG_single_threaded_gc = '\x01';
    FLAG_compiler_dispatcher = 0;
    FLAG_concurrent_recompilation = 0;
  }
  FLAG_concurrent_marking = 0;
  FLAG_parallel_marking = 0;
  FLAG_concurrent_sweeping = 0;
  FLAG_parallel_compaction = 0;
  FLAG_parallel_pointer_update = 0;
  FLAG_parallel_scavenge = 0;
  FLAG_concurrent_store_buffer = 0;
  FLAG_minor_mc_parallel_marking = 0;
  FLAG_concurrent_array_buffer_freeing = 0;
  ComputeFlagListHash();
  return;
}

