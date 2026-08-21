
/* v8::internal::Runtime_RedirectToWasmInterpreter(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_RedirectToWasmInterpreter(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int local_24;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_015ad7b0(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x434)) {
    if ((param_2[-1] & 1) == 0) {
      local_24 = (int)param_2[-1] >> 1;
      uVar2 = WasmInstanceObject::GetOrCreateDebugInfo(param_2);
      WasmDebugInfo::RedirectToInterpreter(uVar2,&local_24,1);
      uVar2 = *(undefined8 *)(param_3 + 0xa0);
      *(undefined8 *)(param_3 + 0x95a0) = uVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
}

