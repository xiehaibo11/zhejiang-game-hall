
/* v8::internal::Runtime_DebugToggleBlockCoverage(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_DebugToggleBlockCoverage(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar1 = FUN_011c5548(param_1,param_2,param_3);
    return uVar1;
  }
  uVar3 = *param_2;
  if ((((uVar3 & 1) != 0) &&
      (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x43)) &&
     ((*(uint *)(uVar3 + 0x17) >> 1 & 0xff) < 2)) {
    uVar2 = 3;
    if ((int)uVar3 != *(int *)(param_3 + 0xb8)) {
      uVar2 = 0;
    }
    Coverage::SelectMode(param_3,uVar2);
    return *(undefined8 *)(param_3 + 0xa0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsBoolean()");
}

