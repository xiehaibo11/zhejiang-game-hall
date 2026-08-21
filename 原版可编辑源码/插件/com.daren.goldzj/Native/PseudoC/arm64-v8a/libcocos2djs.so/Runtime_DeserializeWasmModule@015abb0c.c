
/* v8::internal::Runtime_DeserializeWasmModule(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DeserializeWasmModule(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long *plVar3;
  Isolate *pIVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong local_28;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_015abc98(param_1,param_2,param_3);
    return uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x424)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSArrayBuffer()");
  }
  local_28 = param_2[-1];
  if (((local_28 & 1) == 0) ||
     (*(short *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) != 0x41b)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSTypedArray()");
  }
  if ((*(uint *)(uVar6 + 0x1b) >> 2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!buffer->was_detached()");
  }
  if ((*(uint *)((local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 + 0xb)) + 0x1b) >> 2 & 1
      ) == 0) {
    plVar3 = (long *)JSTypedArray::GetBuffer((JSTypedArray *)&local_28);
    pIVar4 = (Isolate *)
             wasm::DeserializeNativeModule
                       (param_3,*(undefined8 *)(*param_2 + 0x13),(long)*(int *)(*param_2 + 0xb),
                        *(long *)(*plVar3 + 0x13) + *(long *)(param_2[-1] + 0xf),
                        *(undefined8 *)(param_2[-1] + 0x17));
    pIVar1 = param_3 + 0xa0;
    if (pIVar4 != (Isolate *)0x0) {
      pIVar1 = pIVar4;
    }
    uVar7 = *(undefined8 *)pIVar1;
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!wire_bytes->WasDetached()");
}

