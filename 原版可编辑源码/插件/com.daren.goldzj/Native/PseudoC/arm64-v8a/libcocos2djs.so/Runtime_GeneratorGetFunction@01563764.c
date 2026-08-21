
/* v8::internal::Runtime_GeneratorGetFunction(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_GeneratorGetFunction(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_015637ec(param_1);
    return uVar3;
  }
  iVar1 = *(int *)(param_3 + 0x95b0);
  *(int *)(param_3 + 0x95b0) = iVar1 + 1;
  uVar3 = *param_2;
  if (((uVar3 & 1) != 0) &&
     (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x417 < 3)) {
    uVar2 = *(uint *)(uVar3 + 0xb);
    *(undefined8 *)(param_3 + 0x95a0) = *(undefined8 *)(param_3 + 0x95a0);
    *(int *)(param_3 + 0x95b0) = iVar1;
    return uVar3 & 0xffffffff00000000 | (ulong)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSGeneratorObject()");
}

