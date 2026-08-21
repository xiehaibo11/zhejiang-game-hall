
/* v8::internal::StatisticsExtension::GetCounters(v8::FunctionCallbackInfo<v8::Value> const&) */

void v8::internal::StatisticsExtension::GetCounters(FunctionCallbackInfo *param_1)

{
  undefined8 *puVar1;
  Object *pOVar2;
  StatsCounterBase *this;
  uint uVar3;
  char cVar4;
  ulong uVar5;
  Value *this_00;
  Object *pOVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  Isolate *pIVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  double dVar19;
  HeapObjectIterator aHStack_600 [40];
  char *local_5d8 [32];
  long local_4d8;
  char *local_4d0;
  long local_4c8;
  char *local_4c0;
  long local_4b8;
  char *local_4b0;
  long local_4a8;
  char *local_4a0;
  long local_498;
  char *local_490;
  long local_488;
  char *local_480;
  long local_478;
  char *local_470;
  long local_468;
  char *local_460;
  long local_458;
  char *local_450;
  long local_448;
  char *local_440;
  long local_438;
  char *local_430;
  long local_428;
  char *local_420;
  long local_418;
  char *local_410;
  long local_408;
  char *local_400;
  long local_3f8;
  char *local_3f0;
  long local_3e8;
  char *local_3e0;
  long local_3d8;
  char *local_3d0;
  long local_3c8;
  char *local_3c0;
  long local_3b8;
  char *local_3b0;
  long local_3a8;
  char *local_3a0;
  long local_398;
  char *local_390;
  long local_388;
  char *local_380;
  long local_378;
  char *local_370;
  long local_368;
  char *local_360;
  long local_358;
  char *local_350;
  long local_348;
  char *local_340;
  long local_338;
  char *local_330;
  long local_328;
  char *local_320;
  long local_318;
  char *local_310;
  long local_308;
  char *local_300;
  long local_2f8;
  char *local_2f0;
  long local_2e8;
  char *local_2e0;
  long local_2d8;
  char *local_2d0;
  long local_2c8;
  char *local_2c0;
  long local_2b8;
  char *local_2b0;
  long local_2a8;
  char *local_2a0;
  long local_298;
  char *local_290;
  long local_288;
  char *local_280;
  long local_278;
  char *local_270;
  long local_268;
  char *local_260;
  long local_258;
  char *local_250;
  long local_248;
  char *local_240;
  long local_238;
  char *local_230;
  long local_228;
  char *local_220;
  long local_218;
  char *local_210;
  long local_208;
  char *local_200;
  long local_1f8;
  char *local_1f0;
  long local_1e8;
  char *local_1e0;
  long local_1d8;
  char *local_1d0;
  long local_1c8;
  char *local_1c0;
  long local_1b8;
  char *local_1b0;
  long local_1a8;
  char *local_1a0;
  long local_198;
  char *local_190;
  long local_188;
  char *local_180;
  long local_178;
  char *local_170;
  long local_168;
  char *local_160;
  long local_158;
  char *local_150;
  long local_148;
  char *local_140;
  long local_138;
  char *local_130;
  long local_128;
  char *local_120;
  long local_118;
  char *local_110;
  long local_108;
  char *local_100;
  long local_f8;
  char *local_f0;
  long local_e8;
  char *local_e0;
  long local_d8;
  char *local_d0;
  long local_c8;
  char *local_c0;
  long local_b8;
  char *local_b0;
  long local_a8;
  char *local_a0;
  long local_98;
  char *local_90;
  long local_88;
  char *local_80;
  
  lVar9 = *(long *)(*(long *)param_1 + 8);
  puVar1 = (undefined8 *)(lVar9 + 0x8938);
  if ((0 < *(int *)(param_1 + 0x10)) &&
     (uVar5 = v8::Value::IsBoolean(*(Value **)(param_1 + 8)), (uVar5 & 1) != 0)) {
    if (*(int *)(param_1 + 0x10) < 1) {
      lVar18 = *(long *)param_1;
      this_00 = (Value *)(*(long *)(lVar18 + 8) + 0xa0);
    }
    else {
      lVar18 = *(long *)param_1;
      this_00 = *(Value **)(param_1 + 8);
    }
    uVar5 = v8::Value::BooleanValue(this_00,*(Isolate **)(lVar18 + 8));
    if ((uVar5 & 1) != 0) {
      Heap::CollectAllGarbage(lVar9 + 0x8850,0,4,0);
    }
  }
  lVar14 = *(long *)(lVar9 + 0x9520);
  pOVar6 = (Object *)v8::Object::New(*(Isolate **)(*(long *)param_1 + 8));
  local_2d0 = "constructed_objects_runtime";
  local_2c0 = "megamorphic_stub_cache_updates";
  local_2b0 = "enum_cache_hits";
  local_2a0 = "enum_cache_misses";
  local_290 = "string_add_runtime";
  local_280 = "sub_string_runtime";
  local_270 = "regexp_entry_runtime";
  local_260 = "stack_interrupts";
  local_250 = "runtime_profiler_ticks";
  local_240 = "soft_deopts_executed";
  local_230 = "new_space_bytes_available";
  local_220 = "new_space_bytes_committed";
  local_210 = "new_space_bytes_used";
  local_200 = "old_space_bytes_available";
  local_1f0 = "old_space_bytes_committed";
  local_1e0 = "old_space_bytes_used";
  local_1d0 = "code_space_bytes_available";
  local_1c0 = "code_space_bytes_committed";
  local_1b0 = "code_space_bytes_used";
  local_1a0 = "map_space_bytes_available";
  local_190 = "map_space_bytes_committed";
  local_180 = "map_space_bytes_used";
  local_170 = "lo_space_bytes_available";
  local_160 = "lo_space_bytes_committed";
  local_4d8 = lVar14 + 0x1760;
  local_150 = "lo_space_bytes_used";
  local_4c0 = "memory_allocated";
  local_140 = "total_baseline_code_size";
  local_4b0 = "maps_normalized";
  local_130 = "total_baseline_compile_count";
  local_4a0 = "maps_created";
  local_120 = "write_barriers";
  local_490 = "elements_transitions";
  local_110 = "constructed_objects";
  local_480 = "props_to_dictionary";
  local_100 = "fast_new_closure_total";
  local_470 = "elements_to_dictionary";
  local_f0 = "regexp_entry_native";
  local_460 = "alive_after_last_gc";
  local_e0 = "string_add_native";
  local_450 = "objs_since_last_young";
  local_d0 = "sub_string_native";
  local_440 = "objs_since_last_full";
  local_c0 = "ic_keyed_load_generic_smi";
  local_430 = "string_table_capacity";
  local_b0 = "ic_keyed_load_generic_symbol";
  local_420 = "number_of_symbols";
  local_a0 = "ic_keyed_load_generic_slow";
  local_410 = "inlined_copied_elements";
  local_90 = "megamorphic_stub_cache_probes";
  local_400 = "compilation_cache_hits";
  local_3f0 = "compilation_cache_misses";
  local_3e0 = "total_eval_size";
  local_3e8 = lVar14 + 0x1940;
  local_3d0 = "total_load_size";
  local_3d8 = lVar14 + 0x1960;
  local_3c0 = "total_parse_size";
  local_3c8 = lVar14 + 0x1980;
  local_3b0 = "total_preparse_skipped";
  local_3b8 = lVar14 + 0x19a0;
  local_3a0 = "total_compile_size";
  local_3a8 = lVar14 + 0x19c0;
  local_390 = "contexts_created_from_scratch";
  local_398 = lVar14 + 0x19e0;
  local_380 = "contexts_created_by_snapshot";
  local_388 = lVar14 + 0x1a00;
  local_370 = "pc_to_code";
  local_378 = lVar14 + 0x1a20;
  local_360 = "pc_to_code_cached";
  local_368 = lVar14 + 0x1a40;
  local_350 = "store_buffer_overflows";
  local_358 = lVar14 + 0x1a60;
  local_340 = "total_compiled_code_size";
  local_348 = lVar14 + 0x1a80;
  local_330 = "gc_compactor_caused_by_request";
  local_338 = lVar14 + 0x1aa0;
  local_320 = "gc_compactor_caused_by_promoted_data";
  local_328 = lVar14 + 0x1ac0;
  local_310 = "gc_compactor_caused_by_oldspace_exhaustion";
  local_318 = lVar14 + 0x1ae0;
  local_300 = "gc_last_resort_from_js";
  local_308 = lVar14 + 0x1b00;
  local_2f0 = "gc_last_resort_from_handles";
  local_2f8 = lVar14 + 0x1b20;
  local_2e0 = "cow_arrays_converted";
  local_2e8 = lVar14 + 0x1b40;
  local_2d8 = lVar14 + 0x1b60;
  local_2c8 = lVar14 + 0x1b80;
  local_2b8 = lVar14 + 0x1ba0;
  local_2a8 = lVar14 + 0x1bc0;
  local_298 = lVar14 + 0x1be0;
  local_288 = lVar14 + 0x1c00;
  local_278 = lVar14 + 0x1c20;
  local_268 = lVar14 + 0x1c40;
  local_258 = lVar14 + 0x1c60;
  local_248 = lVar14 + 0x1c80;
  local_238 = lVar14 + 0x1ca0;
  local_228 = lVar14 + 0x1cc0;
  local_218 = lVar14 + 0x1ce0;
  local_208 = lVar14 + 0x1d00;
  local_1f8 = lVar14 + 0x1d20;
  local_1e8 = lVar14 + 0x1d40;
  local_1d8 = lVar14 + 0x1d60;
  local_1c8 = lVar14 + 0x1d80;
  local_1b8 = lVar14 + 0x1da0;
  local_1a8 = lVar14 + 0x1dc0;
  local_198 = lVar14 + 0x1de0;
  local_188 = lVar14 + 0x1e00;
  local_178 = lVar14 + 0x1e20;
  local_168 = lVar14 + 0x1e40;
  local_158 = lVar14 + 0x1e60;
  local_148 = lVar14 + 0x1e80;
  local_88 = lVar14 + 0x2000;
  local_138 = lVar14 + 0x1ea0;
  local_80 = "megamorphic_stub_cache_misses";
  lVar18 = 0;
  local_418 = lVar14 + 0x18e0;
  local_118 = lVar14 + 0x1ee0;
  local_4d0 = "global_handles";
  local_4c8 = lVar14 + 0x1780;
  local_4b8 = lVar14 + 0x17a0;
  local_4a8 = lVar14 + 0x17c0;
  local_498 = lVar14 + 0x17e0;
  local_488 = lVar14 + 0x1800;
  local_478 = lVar14 + 0x1820;
  local_468 = lVar14 + 0x1840;
  local_458 = lVar14 + 0x1860;
  local_448 = lVar14 + 0x1880;
  local_438 = lVar14 + 0x18a0;
  local_428 = lVar14 + 0x18c0;
  local_408 = lVar14 + 0x1900;
  local_3f8 = lVar14 + 0x1920;
  local_128 = lVar14 + 0x1ec0;
  local_108 = lVar14 + 0x1f00;
  local_f8 = lVar14 + 0x1f20;
  local_e8 = lVar14 + 8000;
  local_d8 = lVar14 + 0x1f60;
  local_c8 = lVar14 + 0x1f80;
  local_b8 = lVar14 + 0x1fa0;
  local_a8 = lVar14 + 0x1fc0;
  local_98 = lVar14 + 0x1fe0;
  do {
    this = *(StatsCounterBase **)((long)&local_4d8 + lVar18);
    uVar8 = *(undefined8 *)((long)&local_4d0 + lVar18);
    pIVar15 = *(Isolate **)(*(long *)param_1 + 8);
    if (this[0x18] == (StatsCounterBase)0x0) {
      this[0x18] = (StatsCounterBase)0x1;
      lVar14 = StatsCounterBase::FindLocationInStatsTable(this);
      *(long *)(this + 0x10) = lVar14;
    }
    else {
      lVar14 = *(long *)(this + 0x10);
    }
    if (lVar14 != 0) {
      uVar17 = v8::Isolate::GetCurrentContext(pIVar15);
      lVar14 = v8::String::NewFromUtf8(pIVar15,uVar8,0,0xffffffff);
      if (lVar14 == 0) {
        v8::V8::ToLocalEmpty();
        if (this[0x18] == (StatsCounterBase)0x0) goto LAB_014eec4c;
LAB_014eed00:
        piVar7 = *(int **)(this + 0x10);
      }
      else {
        if (this[0x18] != (StatsCounterBase)0x0) goto LAB_014eed00;
LAB_014eec4c:
        this[0x18] = (StatsCounterBase)0x1;
        piVar7 = (int *)StatsCounterBase::FindLocationInStatsTable(this);
        *(int **)(this + 0x10) = piVar7;
      }
      uVar8 = Number::New(pIVar15,(double)(long)*piVar7);
      cVar4 = v8::Object::Set(pOVar6,uVar17,lVar14,uVar8);
      if (cVar4 == '\0') {
        v8::V8::FromJustIsNothing();
      }
    }
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x460);
  local_5d8[0] = *(char **)(*(long *)(lVar9 + 0x9070) + 0x50);
  local_5d8[1] = "total_committed_bytes";
  local_5d8[2] = (char *)(**(code **)(*(long *)*puVar1 + 0x48))();
  local_5d8[3] = "new_space_live_bytes";
  local_5d8[4] = (char *)(**(code **)(*(long *)*puVar1 + 0x60))();
  local_5d8[5] = "new_space_available_bytes";
  local_5d8[6] = (char *)(**(code **)(*(long *)*puVar1 + 0x38))();
  local_5d8[7] = "new_space_commited_bytes";
  local_5d8[8] = (char *)(**(code **)(**(long **)(lVar9 + 0x8940) + 0x48))();
  local_5d8[9] = "old_space_live_bytes";
  local_5d8[10] = (char *)(**(code **)(**(long **)(lVar9 + 0x8940) + 0x60))();
  local_5d8[0xb] = "old_space_available_bytes";
  local_5d8[0xc] = (char *)(**(code **)(**(long **)(lVar9 + 0x8940) + 0x38))();
  local_5d8[0xd] = "old_space_commited_bytes";
  local_5d8[0xe] = (char *)(**(code **)(**(long **)(lVar9 + 0x8948) + 0x48))();
  local_5d8[0xf] = "code_space_live_bytes";
  local_5d8[0x10] = (char *)(**(code **)(**(long **)(lVar9 + 0x8948) + 0x60))();
  local_5d8[0x11] = "code_space_available_bytes";
  local_5d8[0x12] = (char *)(**(code **)(**(long **)(lVar9 + 0x8948) + 0x38))();
  local_5d8[0x13] = "code_space_commited_bytes";
  local_5d8[0x14] = (char *)(**(code **)(**(long **)(lVar9 + 0x8958) + 0x48))();
  local_5d8[0x15] = "lo_space_live_bytes";
  local_5d8[0x16] = (char *)(**(code **)(**(long **)(lVar9 + 0x8958) + 0x60))();
  local_5d8[0x17] = "lo_space_available_bytes";
  local_5d8[0x18] = (char *)(**(code **)(**(long **)(lVar9 + 0x8958) + 0x38))();
  local_5d8[0x19] = "lo_space_commited_bytes";
  local_5d8[0x1a] = (char *)(**(code **)(**(long **)(lVar9 + 0x8960) + 0x48))();
  local_5d8[0x1b] = "code_lo_space_live_bytes";
  local_5d8[0x1c] = (char *)(**(code **)(**(long **)(lVar9 + 0x8960) + 0x60))();
  local_5d8[0x1d] = "code_lo_space_available_bytes";
  local_5d8[0x1e] = (char *)(**(code **)(**(long **)(lVar9 + 0x8960) + 0x38))();
  local_5d8[0x1f] = "code_lo_space_commited_bytes";
  lVar18 = 0;
  pIVar15 = *(Isolate **)(*(long *)param_1 + 8);
  do {
    uVar17 = *(undefined8 *)((long)local_5d8 + lVar18 + 8);
    dVar19 = (double)NEON_ucvtf(*(undefined8 *)((long)local_5d8 + lVar18));
    uVar8 = v8::Isolate::GetCurrentContext(pIVar15);
    lVar14 = v8::String::NewFromUtf8(pIVar15,uVar17,0,0xffffffff);
    if (lVar14 == 0) {
      v8::V8::ToLocalEmpty();
    }
    uVar17 = Number::New(pIVar15,dVar19);
    cVar4 = v8::Object::Set(pOVar6,uVar8,lVar14,uVar17);
    if (cVar4 == '\0') {
      v8::V8::FromJustIsNothing();
    }
    lVar18 = lVar18 + 0x10;
    pIVar15 = *(Isolate **)(*(long *)param_1 + 8);
  } while (lVar18 != 0x100);
  lVar18 = *(long *)(lVar9 + 0x20);
  uVar8 = v8::Isolate::GetCurrentContext(pIVar15);
  lVar9 = v8::String::NewFromUtf8(pIVar15,"amount_of_external_allocated_memory",0,0xffffffff);
  if (lVar9 == 0) {
    v8::V8::ToLocalEmpty();
  }
  uVar17 = Number::New(pIVar15,(double)lVar18);
  cVar4 = v8::Object::Set(pOVar6,uVar8,lVar9,uVar17);
  if (cVar4 == '\0') {
    v8::V8::FromJustIsNothing();
  }
  pOVar2 = (Object *)(*(long *)param_1 + 0x10);
  if (pOVar6 != (Object *)0x0) {
    pOVar2 = pOVar6;
  }
  *(undefined8 *)(*(long *)param_1 + 0x18) = *(undefined8 *)pOVar2;
  HeapObjectIterator::HeapObjectIterator(aHStack_600,*(long *)(*(long *)param_1 + 8) + 0x8850,0);
  uVar5 = HeapObjectIterator::Next(aHStack_600);
  if ((int)uVar5 == 0) {
    iVar16 = 0;
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    iVar16 = 0;
    do {
      uVar10 = uVar5 & 0xffffffff00000000;
      uVar11 = uVar10 | 7;
      if (*(short *)(uVar11 + *(uint *)(uVar5 - 1)) == 0x9a) {
        uVar3 = *(uint *)(uVar5 + 0xb);
        iVar13 = ((*(int *)((uVar10 | *(uint *)(uVar5 + 3)) + 3) >> 1) + 0xbU & 0xfffffffc) + iVar13
        ;
        uVar5 = uVar10 | uVar3;
        if (((uVar3 & 1) == 0) ||
           (uVar12 = uVar5, *(short *)(uVar11 + *(uint *)(uVar5 - 1)) != 0x85)) {
          uVar12 = uVar10 | *(uint *)(uVar5 + 3);
        }
        if (1 < *(int *)(uVar12 + 3)) {
          if (((uVar3 & 1) == 0) || (*(short *)(uVar11 + *(uint *)(uVar5 - 1)) != 0x85)) {
LAB_014ef044:
            uVar5 = uVar10 | *(uint *)(uVar5 + 3);
          }
LAB_014ef04c:
          iVar16 = ((*(int *)(uVar5 + 3) >> 1) + 0xbU & 0xfffffffc) + iVar16;
        }
      }
      else if (*(short *)(uVar11 + *(uint *)(uVar5 - 1)) == 0x86) {
        uVar3 = *(uint *)(uVar5 + 0xf);
        uVar5 = uVar10 | uVar3;
        if (((uVar3 & 1) == 0) || (*(short *)(uVar11 + *(uint *)(uVar5 - 1)) != 0x85)) {
          if (uVar3 != *(uint *)(uVar10 + 0x180)) goto LAB_014ef044;
          uVar5 = *(ulong *)(uVar10 + 0x3c0);
        }
        goto LAB_014ef04c;
      }
      uVar5 = HeapObjectIterator::Next(aHStack_600);
    } while ((int)uVar5 != 0);
  }
  pIVar15 = *(Isolate **)(*(long *)param_1 + 8);
  uVar8 = v8::Isolate::GetCurrentContext(pIVar15);
  lVar9 = v8::String::NewFromUtf8(pIVar15,"reloc_info_total_size",0,0xffffffff);
  if (lVar9 == 0) {
    v8::V8::ToLocalEmpty();
  }
  uVar17 = Number::New(pIVar15,(double)iVar13);
  cVar4 = v8::Object::Set(pOVar6,uVar8,lVar9,uVar17);
  if (cVar4 == '\0') {
    v8::V8::FromJustIsNothing();
  }
  pIVar15 = *(Isolate **)(*(long *)param_1 + 8);
  uVar8 = v8::Isolate::GetCurrentContext(pIVar15);
  lVar9 = v8::String::NewFromUtf8(pIVar15,"source_position_table_total_size",0,0xffffffff);
  if (lVar9 == 0) {
    v8::V8::ToLocalEmpty();
  }
  uVar17 = Number::New(pIVar15,(double)iVar16);
  cVar4 = v8::Object::Set(pOVar6,uVar8,lVar9,uVar17);
  if (cVar4 == '\0') {
    v8::V8::FromJustIsNothing();
  }
  HeapObjectIterator::~HeapObjectIterator(aHStack_600);
  return;
}

