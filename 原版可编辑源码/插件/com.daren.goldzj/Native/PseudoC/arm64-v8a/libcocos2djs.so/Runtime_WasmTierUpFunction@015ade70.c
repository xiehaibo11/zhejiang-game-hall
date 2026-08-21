
/* v8::internal::Runtime_WasmTierUpFunction(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmTierUpFunction(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_015adfb0(param_1,param_2,param_3);
    return uVar2;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar3 = *param_2;
  if (((uVar3 & 1) == 0) ||
     (uVar4 = uVar3 & 0xffffffff00000000,
     *(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x434)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
  }
  if ((param_2[-1] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
  lVar5 = **(long **)(*(long *)((uVar4 | *(uint *)((uVar4 | *(uint *)(uVar3 + 0x6f)) + 0xb)) + 3) +
                     0x18);
  wasm::WasmEngine::CompileFunction
            (*(undefined8 *)(param_3 + 0xc770),param_3,lVar5,(int)param_2[-1] >> 1,3);
  uVar3 = wasm::CompilationState::failed(*(CompilationState **)(lVar5 + 0x100));
  if ((uVar3 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!native_module->compilation_state()->failed()");
}

