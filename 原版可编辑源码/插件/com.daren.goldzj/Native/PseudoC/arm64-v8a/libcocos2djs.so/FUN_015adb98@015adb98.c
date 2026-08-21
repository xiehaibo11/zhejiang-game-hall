
undefined8 FUN_015adb98(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  byte **local_690;
  byte *local_688;
  char *local_680;
  undefined8 local_678;
  RuntimeCallStats *local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 local_648;
  long *local_640;
  long *local_638;
  WasmCompiledFrame *local_b8;
  WasmCodeRefScope aWStack_a0 [48];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_650 = 0;
  uStack_668 = 0;
  local_670 = (RuntimeCallStats *)0x0;
  uStack_658 = 0;
  uStack_660 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_670 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_670,(ulong)&local_670 | 8,0x276);
  }
  if (DAT_01d47738 == (byte *)0x0) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47738 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d47738;
  local_690 = (byte **)0x0;
  if ((*DAT_01d47738 & 5) != 0) {
    local_640 = (long *)0x0;
    local_638 = (long *)0x0;
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar4,"V8.Runtime_Runtime_WasmTraceMemory",0,0,0,0,0,0,0,
                       &local_640,0);
    plVar7 = local_638;
    local_638 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_640;
    local_640 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_690 = &local_688;
    local_680 = "V8.Runtime_Runtime_WasmTraceMemory";
    local_688 = pbVar4;
    local_678 = uVar8;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = *param_2;
  if ((uVar12 & 1) == 0) {
    v8::internal::wasm::WasmCodeRefScope::WasmCodeRefScope(aWStack_a0);
    v8::internal::StackTraceFrameIterator::StackTraceFrameIterator
              ((StackTraceFrameIterator *)&local_640,param_3);
    uVar9 = v8::internal::WasmCompiledFrame::wasm_instance(local_b8);
    uVar13 = *(undefined8 *)
              ((uVar9 & 0xffffffff00000000 |
               (ulong)*(uint *)((uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0x7b)) + 0xb)
               ) + 0x13);
    iVar5 = v8::internal::WasmCompiledFrame::function_index(local_b8);
    iVar6 = (**(code **)(*(long *)local_b8 + 0x68))(local_b8);
    local_648 = v8::internal::WasmCompiledFrame::wasm_instance(local_b8);
    lVar10 = v8::internal::WasmInstanceObject::module((WasmInstanceObject *)&local_648);
    iVar2 = *(int *)(*(long *)(lVar10 + 0x88) + (long)iVar5 * 0x20 + 0x10);
    lVar10 = v8::internal::WasmCompiledFrame::wasm_code(local_b8);
    uVar11 = 2;
    if (*(char *)(lVar10 + 0x88) != '\x02') {
      uVar11 = 3;
    }
    v8::internal::wasm::TraceMemoryOperation(uVar11,uVar12,iVar5,iVar6 - iVar2,uVar13);
    uVar13 = *(undefined8 *)(param_3 + 0xa0);
    v8::internal::wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_a0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar8;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_690 != (byte **)0x0) && (*local_688 != 0)) {
      plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar7 + 0x28))(plVar7,local_688,local_680,local_678);
    }
    if (local_670 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_670,(RuntimeCallTimer *)((ulong)&local_670 | 8));
    }
    if (*(long *)(lVar3 + 0x28) == local_70) {
      return uVar13;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsSmi()");
}

