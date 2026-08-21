
/* v8::internal::Runtime_IsLiftoffFunction(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_IsLiftoffFunction(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  Isolate *pIVar7;
  NativeModule *this;
  undefined8 uVar8;
  ulong local_88 [6];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (TracingFlags::runtime_stats == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar5 = *param_2;
    if (((uVar5 & 1) == 0) ||
       (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
    }
    uVar5 = WasmExportedFunction::IsWasmExportedFunction();
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","WasmExportedFunction::IsWasmExportedFunction(*function)");
    }
    local_88[0] = *param_2;
    uVar5 = WasmExportedFunction::instance((WasmExportedFunction *)local_88);
    local_88[0] = *param_2;
    this = (NativeModule *)
           **(undefined8 **)
             (*(long *)((uVar5 & 0xffffffff00000000 |
                        (ulong)*(uint *)((uVar5 & 0xffffffff00000000 |
                                         (ulong)*(uint *)(uVar5 + 0x6f)) + 0xb)) + 3) + 0x18);
    uVar4 = WasmExportedFunction::function_index((WasmExportedFunction *)local_88);
    wasm::WasmCodeRefScope::WasmCodeRefScope((WasmCodeRefScope *)local_88);
    lVar6 = wasm::NativeModule::GetCode(this,uVar4);
    if (lVar6 == 0) {
      pIVar7 = param_3 + 0xc0;
    }
    else {
      pIVar7 = param_3 + 0xb8;
      if (*(char *)(lVar6 + 0x88) != '\x02') {
        pIVar7 = param_3 + 0xc0;
      }
    }
    uVar8 = *(undefined8 *)pIVar7;
    wasm::WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)local_88);
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    if (*(long *)(lVar3 + 0x28) != local_58) {
LAB_015ae3b4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar8 = FUN_015ae3e0(param_1,param_2,param_3);
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_015ae3b4;
  }
  return uVar8;
}

