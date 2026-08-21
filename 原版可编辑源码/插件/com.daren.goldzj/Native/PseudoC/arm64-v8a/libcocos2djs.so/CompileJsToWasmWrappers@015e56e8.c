
/* v8::internal::wasm::CompileJsToWasmWrappers(v8::internal::Isolate*,
   v8::internal::wasm::WasmModule const*, v8::internal::Handle<v8::internal::FixedArray>*) */

void v8::internal::wasm::CompileJsToWasmWrappers
               (Isolate *param_1,WasmModule *param_2,Handle *param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  piecewise_construct_t *ppVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  JSToWasmWrapperCompilationUnit *pJVar8;
  long *plVar9;
  CancelableTask *pCVar10;
  long lVar11;
  ulong *puVar12;
  ulong extraout_x1;
  undefined8 *puVar13;
  ulong uVar14;
  void *pvVar15;
  void *pvVar16;
  WasmEngine *pWVar17;
  ulong uVar18;
  ulong uVar19;
  JSToWasmWrapperCompilationUnit *local_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  CancelableTask *local_1b8;
  undefined4 local_1b0 [4];
  pair local_1a0 [8];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  void *local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  Mutex aMStack_e0 [40];
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  piecewise_construct_t *local_90 [3];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  uVar5 = MaxNumExportWrappers(param_2);
  uVar7 = Factory::NewFixedArray((Factory *)param_1,uVar5,1);
  *(undefined8 *)param_3 = uVar7;
  base::Mutex::Mutex(aMStack_e0);
  uStack_a0 = 0;
  local_a8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_98 = 0x3f800000;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_f8 = 0;
  local_100 = (undefined8 *)0x0;
  local_f0 = 0x3f800000;
  local_1b0[0] = WasmFeatures::FromIsolate(param_1);
  lVar11 = *(long *)(param_2 + 0xe8);
  lVar1 = *(long *)(param_2 + 0xf0);
  if (lVar11 != lVar1) {
    cVar2 = *(char *)(lVar11 + 8);
    while( true ) {
      if (cVar2 == '\0') {
        plVar9 = (long *)(*(long *)(param_2 + 0x88) + (ulong)*(uint *)(lVar11 + 0xc) * 0x20);
        local_1a0[0] = *(pair *)(plVar9 + 3);
        puVar13 = (undefined8 *)*plVar9;
        local_188 = puVar13[2];
        uStack_190 = puVar13[1];
        local_198 = *puVar13;
        std::__ndk1::
        __hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
        ::
        __emplace_unique_key_args<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>const&>
                  ((__hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
                    *)&local_b8,local_1a0,local_1a0);
        if ((extraout_x1 & 1) != 0) {
          pWVar17 = *(WasmEngine **)(param_1 + 0xc770);
          pJVar8 = operator_new(0x18);
          JSToWasmWrapperCompilationUnit::JSToWasmWrapperCompilationUnit
                    (pJVar8,param_1,pWVar17,(Signature *)*plVar9,(bool)*(pair *)(plVar9 + 3),
                     (WasmFeatures *)local_1b0);
          local_1e0 = pJVar8;
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>&,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>>>
                      *)&local_110,local_1a0,local_1a0,(unique_ptr *)&local_1e0);
          pJVar8 = local_1e0;
          local_1e0 = (JSToWasmWrapperCompilationUnit *)0x0;
          if (pJVar8 != (JSToWasmWrapperCompilationUnit *)0x0) {
            JSToWasmWrapperCompilationUnit::~JSToWasmWrapperCompilationUnit(pJVar8);
            operator_delete(pJVar8);
          }
        }
      }
      if (lVar1 == lVar11 + 0x10) break;
      cVar2 = *(char *)(lVar11 + 0x18);
      lVar11 = lVar11 + 0x10;
    }
  }
  CancelableTaskManager::CancelableTaskManager((CancelableTaskManager *)local_1a0);
  if (1 < FLAG_wasm_num_compilation_tasks) {
    plVar9 = (long *)V8::GetCurrentPlatform();
    iVar6 = (**(code **)(*plVar9 + 0x28))();
    if (FLAG_wasm_num_compilation_tasks <= iVar6) {
      iVar6 = FLAG_wasm_num_compilation_tasks;
    }
    if (0 < iVar6) {
      do {
        pCVar10 = operator_new(0x38);
        CancelableTask::CancelableTask(pCVar10,(CancelableTaskManager *)local_1a0);
        *(undefined ***)pCVar10 = &PTR__CancelableTask_01cc9dd0;
        *(undefined ***)(pCVar10 + 0x20) = &PTR_FUN_01cc9e00;
        *(Mutex **)(pCVar10 + 0x28) = aMStack_e0;
        *(void ***)(pCVar10 + 0x30) = &local_110;
        plVar9 = (long *)V8::GetCurrentPlatform();
        local_1b8 = pCVar10 + 0x20;
        (**(code **)(*plVar9 + 0x38))(plVar9,&local_1b8);
        pCVar10 = local_1b8;
        local_1b8 = (CancelableTask *)0x0;
        if (pCVar10 != (CancelableTask *)0x0) {
          (**(code **)(*(long *)pCVar10 + 8))();
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  while( true ) {
    local_1e0 = (JSToWasmWrapperCompilationUnit *)((ulong)local_1e0 & 0xffffffffffffff00);
    uStack_1d8 = uStack_1d8 & 0xffffffffffffff00;
    base::Mutex::Lock(aMStack_e0);
    if (local_a8 != (undefined8 *)0x0) {
      uStack_1d0 = local_a8[3];
      uStack_1d8 = local_a8[2];
      uStack_1c0 = local_a8[5];
      uStack_1c8 = local_a8[4];
      local_1e0 = (JSToWasmWrapperCompilationUnit *)CONCAT71(local_1e0._1_7_,1);
      std::__ndk1::
      __hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
      ::remove(local_90,&local_b8);
      ppVar4 = local_90[0];
      local_90[0] = (piecewise_construct_t *)0x0;
      if (ppVar4 != (piecewise_construct_t *)0x0) {
        operator_delete(ppVar4);
      }
    }
    base::Mutex::Unlock(aMStack_e0);
    if ((char)local_1e0 == '\0') break;
    local_90[0] = (piecewise_construct_t *)&uStack_1d8;
    lVar11 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>>>
             ::
             __emplace_unique_key_args<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>const&>,std::__ndk1::tuple<>>
                       ((pair *)&local_110,(piecewise_construct_t *)&uStack_1d8,
                        (tuple *)&DAT_01a5456b,(tuple *)local_90);
    JSToWasmWrapperCompilationUnit::Execute(*(JSToWasmWrapperCompilationUnit **)(lVar11 + 0x30));
  }
  CancelableTaskManager::CancelAndWait((CancelableTaskManager *)local_1a0);
  CodeSpaceMemoryModificationScope::CodeSpaceMemoryModificationScope
            ((CodeSpaceMemoryModificationScope *)local_90,(Heap *)(param_1 + 0x8850));
  if (local_100 != (undefined8 *)0x0) {
    puVar13 = local_100;
    do {
      uStack_1d8 = puVar13[3];
      local_1e0 = (JSToWasmWrapperCompilationUnit *)puVar13[2];
      uStack_1c8 = puVar13[5];
      uStack_1d0 = puVar13[4];
      puVar12 = (ulong *)JSToWasmWrapperCompilationUnit::Finalize((Isolate *)puVar13[6]);
      iVar6 = GetExportWrapperIndex(param_2,(Signature *)&uStack_1d8,(bool)(char)local_1e0);
      uVar18 = *puVar12;
      uVar19 = **(ulong **)param_3;
      lVar11 = uVar19 + (long)(iVar6 << 2);
      *(int *)(lVar11 + 7) = (int)uVar18;
      if ((uVar18 & 1) != 0) {
        uVar14 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
        lVar11 = lVar11 + 7;
        if (((uint)uVar14 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar19,lVar11,uVar18);
          uVar14 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar19,lVar11,uVar18);
        }
      }
      uVar18 = *puVar12;
      lVar11 = *(long *)(param_1 + 0x9520);
      iVar6 = *(int *)(uVar18 + 0x13);
      if ((*(byte *)(uVar18 + 0x17) & 1) != 0) {
        uVar19 = (long)(iVar6 + 0x47) & 0xfffffffffffffff8;
        iVar6 = (int)uVar19 + *(int *)(uVar18 + uVar19 + -1) + -0x38;
      }
      StatsCounterThreadSafe::Increment
                ((StatsCounterThreadSafe *)(lVar11 + 0x2020),iVar6 + 3U & 0xfffffffc);
      StatsCounterThreadSafe::Increment
                ((StatsCounterThreadSafe *)(lVar11 + 0x2060),
                 *(int *)((uVar18 & 0xffffffff00000000 | (ulong)*(uint *)(uVar18 + 3)) + 3) >> 1);
      puVar13 = (undefined8 *)*puVar13;
    } while (puVar13 != (undefined8 *)0x0);
  }
  CodeSpaceMemoryModificationScope::~CodeSpaceMemoryModificationScope
            ((CodeSpaceMemoryModificationScope *)local_90);
  CancelableTaskManager::~CancelableTaskManager((CancelableTaskManager *)local_1a0);
  pvVar15 = local_110;
  puVar13 = local_100;
  while (puVar13 != (void *)0x0) {
    pJVar8 = (JSToWasmWrapperCompilationUnit *)puVar13[6];
    pvVar16 = (void *)*puVar13;
    puVar13[6] = 0;
    local_110 = pvVar15;
    if (pJVar8 != (JSToWasmWrapperCompilationUnit *)0x0) {
      JSToWasmWrapperCompilationUnit::~JSToWasmWrapperCompilationUnit(pJVar8);
      operator_delete(pJVar8);
    }
    operator_delete(puVar13);
    pvVar15 = local_110;
    puVar13 = pvVar16;
  }
  local_110 = (void *)0x0;
  pvVar16 = local_b8;
  puVar13 = local_a8;
  if (pvVar15 != (void *)0x0) {
    operator_delete(pvVar15);
    pvVar16 = local_b8;
    puVar13 = local_a8;
  }
  while (puVar13 != (void *)0x0) {
    pvVar15 = (void *)*puVar13;
    local_b8 = pvVar16;
    operator_delete(puVar13);
    pvVar16 = local_b8;
    puVar13 = pvVar15;
  }
  local_b8 = (void *)0x0;
  if (pvVar16 != (void *)0x0) {
    operator_delete(pvVar16);
  }
  base::Mutex::~Mutex(aMStack_e0);
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

