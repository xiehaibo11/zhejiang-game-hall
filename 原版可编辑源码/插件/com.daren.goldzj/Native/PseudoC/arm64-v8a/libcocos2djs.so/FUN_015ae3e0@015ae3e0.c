
undefined8 FUN_015ae3e0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  Isolate *pIVar9;
  NativeModule *this;
  undefined8 uVar10;
  byte **local_d0;
  byte *local_c8;
  char *local_c0;
  undefined8 local_b8;
  RuntimeCallStats *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = (RuntimeCallStats *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_b0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_b0,(ulong)&local_b0 | 8,0x253);
  }
  if (DAT_01d47748 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47748 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47748;
  local_d0 = (byte **)0x0;
  if ((*DAT_01d47748 & 5) != 0) {
    local_88 = (long *)0x0;
    local_80 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_IsLiftoffFunction",0,0,0,0,0,0,0,
                       &local_88,0);
    plVar5 = local_80;
    local_80 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_88;
    local_88 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_d0 = &local_c8;
    local_c0 = "V8.Runtime_Runtime_IsLiftoffFunction";
    local_c8 = pbVar3;
    local_b8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) == 0) ||
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  uVar7 = v8::internal::WasmExportedFunction::IsWasmExportedFunction();
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","WasmExportedFunction::IsWasmExportedFunction(*function)");
  }
  local_88 = (long *)*param_2;
  uVar7 = v8::internal::WasmExportedFunction::instance((WasmExportedFunction *)&local_88);
  local_88 = (long *)*param_2;
  this = (NativeModule *)
         **(undefined8 **)
           (*(long *)((uVar7 & 0xffffffff00000000 |
                      (ulong)*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x6f))
                                      + 0xb)) + 3) + 0x18);
  uVar4 = v8::internal::WasmExportedFunction::function_index((WasmExportedFunction *)&local_88);
  v8::internal::wasm::WasmCodeRefScope::WasmCodeRefScope((WasmCodeRefScope *)&local_88);
  lVar8 = v8::internal::wasm::NativeModule::GetCode(this,uVar4);
  if (lVar8 == 0) {
    pIVar9 = param_3 + 0xc0;
  }
  else {
    pIVar9 = param_3 + 0xb8;
    if (*(char *)(lVar8 + 0x88) != '\x02') {
      pIVar9 = param_3 + 0xc0;
    }
  }
  uVar10 = *(undefined8 *)pIVar9;
  v8::internal::wasm::WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)&local_88);
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_c8,local_c0,local_b8);
  }
  if (local_b0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_b0,(RuntimeCallTimer *)((ulong)&local_b0 | 8));
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

