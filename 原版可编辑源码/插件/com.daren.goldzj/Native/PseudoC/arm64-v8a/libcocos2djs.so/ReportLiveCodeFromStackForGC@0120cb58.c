
/* v8::internal::wasm::WasmEngine::ReportLiveCodeFromStackForGC(v8::internal::Isolate*) */

void __thiscall
v8::internal::wasm::WasmEngine::ReportLiveCodeFromStackForGC(WasmEngine *this,Isolate *param_1)

{
  long lVar1;
  void *pvVar2;
  WasmCompiledFrame *this_00;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  WasmCode *local_658;
  undefined **local_650 [177];
  WasmCompiledFrame *local_c8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  WasmCodeRefScope aWStack_88 [48];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  WasmCodeRefScope::WasmCodeRefScope(aWStack_88);
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  uStack_98 = 0;
  local_a0 = (undefined8 *)0x0;
  local_90 = 0x3f800000;
  StackFrameIterator::StackFrameIterator((StackFrameIterator *)local_650,param_1);
  this_00 = local_c8;
  while (this_00 != (WasmCompiledFrame *)0x0) {
    local_c8 = this_00;
    iVar3 = (**(code **)(*(long *)this_00 + 8))(this_00);
    if (iVar3 == 5) {
      local_658 = (WasmCode *)WasmCompiledFrame::wasm_code(this_00);
      std::__ndk1::
      __hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
      ::__emplace_unique_key_args<v8::internal::wasm::WasmCode*,v8::internal::wasm::WasmCode*>
                ((__hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                  *)&local_b0,&local_658,&local_658);
    }
    StackFrameIterator::Advance((StackFrameIterator *)local_650);
    this_00 = local_c8;
  }
  local_650[0] = &PTR_FUN_01cbc440;
  ThreadManager::IterateArchivedThreads
            (*(ThreadManager **)(param_1 + 0x95f0),(ThreadVisitor *)local_650);
  puVar9 = local_a0;
  if (local_a0 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    puVar4 = local_a0;
    do {
      puVar4 = (undefined8 *)*puVar4;
      uVar8 = uVar8 + 1;
    } while (puVar4 != (undefined8 *)0x0);
    uVar5 = uVar8 * 8;
    if (uVar8 >> 0x3d != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    puVar4 = operator_new__(uVar5);
    puVar6 = puVar4;
    do {
      *puVar6 = puVar9[2];
      puVar9 = (undefined8 *)*puVar9;
      puVar6 = puVar6 + 1;
    } while (puVar9 != (undefined8 *)0x0);
  }
  ReportLiveCodeForGC(this,param_1,puVar4,uVar8);
  pvVar2 = local_b0;
  puVar9 = local_a0;
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete__(puVar4);
    pvVar2 = local_b0;
    puVar9 = local_a0;
  }
  while (puVar9 != (void *)0x0) {
    pvVar7 = (void *)*puVar9;
    local_b0 = pvVar2;
    operator_delete(puVar9);
    pvVar2 = local_b0;
    puVar9 = pvVar7;
  }
  local_b0 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  WasmCodeRefScope::~WasmCodeRefScope(aWStack_88);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

