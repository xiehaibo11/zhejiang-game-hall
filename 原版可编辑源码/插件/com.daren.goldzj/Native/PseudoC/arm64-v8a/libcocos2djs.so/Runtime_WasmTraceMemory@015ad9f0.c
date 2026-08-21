
/* v8::internal::Runtime_WasmTraceMemory(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmTraceMemory(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 local_648;
  StackTraceFrameIterator aSStack_640 [1416];
  WasmCompiledFrame *local_b8;
  WasmCodeRefScope aWStack_a0 [48];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (TracingFlags::runtime_stats == 0) {
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar10 = *param_2;
    uVar1 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    if ((uVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsSmi()");
    }
    wasm::WasmCodeRefScope::WasmCodeRefScope(aWStack_a0);
    StackTraceFrameIterator::StackTraceFrameIterator(aSStack_640,param_3);
    uVar7 = WasmCompiledFrame::wasm_instance(local_b8);
    uVar11 = *(undefined8 *)
              ((uVar7 & 0xffffffff00000000 |
               (ulong)*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x7b)) + 0xb)
               ) + 0x13);
    iVar5 = WasmCompiledFrame::function_index(local_b8);
    iVar6 = (**(code **)(*(long *)local_b8 + 0x68))(local_b8);
    local_648 = WasmCompiledFrame::wasm_instance(local_b8);
    lVar8 = WasmInstanceObject::module((WasmInstanceObject *)&local_648);
    iVar3 = *(int *)(*(long *)(lVar8 + 0x88) + (long)iVar5 * 0x20 + 0x10);
    lVar8 = WasmCompiledFrame::wasm_code(local_b8);
    uVar9 = 2;
    if (*(char *)(lVar8 + 0x88) != '\x02') {
      uVar9 = 3;
    }
    wasm::TraceMemoryOperation(uVar9,uVar10,iVar5,iVar6 - iVar3,uVar11);
    uVar11 = *(undefined8 *)(param_3 + 0xa0);
    wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_a0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    if (*(long *)(lVar4 + 0x28) != local_70) {
LAB_015adb80:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar11 = FUN_015adb98(param_1,param_2,param_3);
    if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_015adb80;
  }
  return uVar11;
}

