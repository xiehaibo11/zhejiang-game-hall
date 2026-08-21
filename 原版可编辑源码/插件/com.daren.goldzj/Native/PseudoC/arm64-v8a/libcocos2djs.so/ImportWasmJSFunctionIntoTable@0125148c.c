
/* v8::internal::WasmInstanceObject::ImportWasmJSFunctionIntoTable(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, int, int,
   v8::internal::Handle<v8::internal::WasmJSFunction>) */

void v8::internal::WasmInstanceObject::ImportWasmJSFunctionIntoTable
               (Isolate *param_1,ulong *param_2,int param_3,undefined4 param_4,ulong *param_5)

{
  long lVar1;
  WasmCode *pWVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  Signature *pSVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  Isolate *pIVar9;
  ulong uVar10;
  undefined8 uVar11;
  NativeModule *pNVar12;
  undefined1 auVar13 [16];
  WasmCode *local_1c8;
  void *local_1c0;
  undefined8 uStack_1b8;
  void *local_1b0;
  undefined8 uStack_1a8;
  WasmCode *local_1a0;
  undefined4 local_198 [2];
  ulong *local_190;
  ulong *local_188;
  undefined4 local_180;
  void *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  void *local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined1 auStack_108 [40];
  WasmCodeRefScope aWStack_e0 [48];
  Zone aZStack_b0 [64];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  Zone::Zone(aZStack_b0,*(AccountingAllocator **)(param_1 + 0x95d0),
             "../../src/wasm/wasm-objects.cc:1548");
  local_190 = (ulong *)*param_5;
  pSVar6 = (Signature *)WasmJSFunction::GetSignature((WasmJSFunction *)&local_190,aZStack_b0);
  uVar10 = *param_2 & 0xffffffff00000000;
  iVar4 = wasm::SignatureMap::Find
                    ((SignatureMap *)
                     (*(long *)(**(long **)(*(long *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*
                                                  param_2 + 0x6f)) + 0xb)) + 3) + 0x18) + 200) +
                     0x148),pSVar6);
  local_190 = (ulong *)(*param_5 & 0xffffffff00000000 | (ulong)*(uint *)(*param_5 + 0xb));
  uVar10 = SharedFunctionInfo::wasm_js_function_data((SharedFunctionInfo *)&local_190);
  uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(param_1 + 0x95a0);
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar10;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
  }
  wasm::WasmCodeRefScope::WasmCodeRefScope(aWStack_e0);
  if (iVar4 < 0) {
    uVar11 = 0;
  }
  else {
    uVar10 = *param_2 & 0xffffffff00000000;
    pNVar12 = (NativeModule *)
              **(undefined8 **)
                (*(long *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*param_2 + 0x6f)) + 0xb)) + 3) +
                0x18);
    local_198[0] = *(undefined4 *)(pNVar12 + 0xc0);
    auVar13 = compiler::ResolveWasmImportCall(puVar7,pSVar6,local_198);
    puVar7 = auVar13._8_8_;
    wasm::NativeModule::CreateCompilationEnv();
    compiler::CompileWasmImportCallWrapper
              ((compiler *)&local_190,*(undefined8 *)(param_1 + 0xc770),auStack_108,
               auVar13._0_8_ & 0xffffffff,pSVar6,0);
    local_1b0 = local_120;
    uStack_1b8 = uStack_128;
    local_1c0 = local_130;
    uStack_128 = 0;
    local_120 = (void *)0x0;
    local_130 = (void *)0x0;
    uStack_1a8 = uStack_118;
    uVar5 = wasm::GetCodeKind((WasmCompilationResult *)&local_190);
    wasm::NativeModule::AddCode
              (&local_1a0,pNVar12,local_110,&local_190,local_138,uStack_134,&local_1b0,&local_1c0,
               uVar5,0);
    pvVar3 = local_1c0;
    local_1c0 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    pvVar3 = local_1b0;
    local_1b0 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    local_1c8 = local_1a0;
    local_1a0 = (WasmCode *)0x0;
    puVar8 = (undefined8 *)wasm::NativeModule::PublishCode(pNVar12,&local_1c8);
    pWVar2 = local_1c8;
    local_1c8 = (WasmCode *)0x0;
    if (pWVar2 != (WasmCode *)0x0) {
      wasm::WasmCode::~WasmCode(pWVar2);
      operator_delete(pWVar2);
    }
    StatsCounterThreadSafe::Increment
              ((StatsCounterThreadSafe *)(*(long *)(param_1 + 0x9520) + 0x2020),*(int *)(puVar8 + 1)
              );
    StatsCounterThreadSafe::Increment
              ((StatsCounterThreadSafe *)(*(long *)(param_1 + 0x9520) + 0x2060),*(int *)(puVar8 + 3)
              );
    pWVar2 = local_1a0;
    uVar11 = *puVar8;
    local_1a0 = (WasmCode *)0x0;
    if (pWVar2 != (WasmCode *)0x0) {
      wasm::WasmCode::~WasmCode(pWVar2);
      operator_delete(pWVar2);
    }
    pvVar3 = local_120;
    local_120 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    pvVar3 = local_130;
    local_130 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    pvVar3 = local_140;
    local_140 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
  }
  puVar8 = (undefined8 *)Factory::NewTuple2((Factory *)param_1,param_2,puVar7,1);
  if (param_3 == 0) {
    local_188 = (ulong *)0x0;
    local_190 = param_2;
  }
  else {
    local_190 = (ulong *)0x0;
    pIVar9 = (Isolate *)(*param_2 & 0xffffffff00000000);
    uVar10 = (ulong)pIVar9 |
             (ulong)*(uint *)(((ulong)pIVar9 | (ulong)*(uint *)(*param_2 + 0x93)) +
                              (long)(param_3 << 2) + 7);
    if (*(CanonicalHandleScope **)((ulong)pIVar9 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      local_188 = *(ulong **)(pIVar9 + 0x95a0);
      if (local_188 == *(ulong **)(pIVar9 + 0x95a8)) {
        local_188 = (ulong *)HandleScope::Extend(pIVar9);
      }
      *(ulong **)(pIVar9 + 0x95a0) = local_188 + 1;
      *local_188 = uVar10;
    }
    else {
      local_188 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)((ulong)pIVar9 | 0x95b8),uVar10);
    }
  }
  local_180 = param_4;
  IndirectFunctionTableEntry::Set((IndirectFunctionTableEntry *)&local_190,iVar4,uVar11,*puVar8);
  wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_e0);
  Zone::~Zone(aZStack_b0);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

