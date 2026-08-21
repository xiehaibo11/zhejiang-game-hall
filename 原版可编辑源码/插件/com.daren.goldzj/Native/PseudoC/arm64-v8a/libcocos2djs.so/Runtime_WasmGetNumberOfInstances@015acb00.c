
/* v8::internal::Runtime_WasmGetNumberOfInstances(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_WasmGetNumberOfInstances(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_015acbcc(param_1);
    return uVar4;
  }
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (uVar6 = uVar4 & 0xffffffff00000000,
     *(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x436)) {
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(uVar4 + 0x13)) + 0x2b);
    uVar1 = *(uint *)(uVar6 + 7);
    if (1 < (int)uVar1) {
      iVar5 = 0;
      uVar4 = 0;
      iVar3 = 0;
      do {
        uVar2 = *(uint *)(uVar6 + 0xb + (long)iVar5);
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + (uint)(uVar2 != 3 && ((uVar2 ^ 0xffffffff) & 3) == 0);
      } while (uVar4 < uVar1 >> 1);
      return (ulong)(uint)(iVar3 * 2);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsWasmModuleObject()");
}

