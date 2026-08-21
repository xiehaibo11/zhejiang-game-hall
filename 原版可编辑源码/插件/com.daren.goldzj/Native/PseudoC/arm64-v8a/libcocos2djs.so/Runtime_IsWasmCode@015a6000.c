
/* v8::internal::Runtime_IsWasmCode(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_IsWasmCode(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_015a6080(param_1);
    return uVar2;
  }
  uVar3 = *param_2;
  if (((uVar3 & 1) != 0) &&
     (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x439)) {
    lVar1 = 0xb8;
    if ((*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17)) + 0x17) & 0x3e) !=
        0x10) {
      lVar1 = 0xc0;
    }
    return *(undefined8 *)(param_3 + lVar1);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

