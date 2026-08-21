
/* v8::internal::Runtime_DebugTogglePreciseCoverage(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_DebugTogglePreciseCoverage(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar1 = FUN_011c52bc(param_1,param_2,param_3);
    return uVar1;
  }
  uVar2 = *param_2;
  if ((((uVar2 & 1) != 0) &&
      (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x43)) &&
     ((*(uint *)(uVar2 + 0x17) >> 1 & 0xff) < 2)) {
    Coverage::SelectMode(param_3,(int)uVar2 == *(int *)(param_3 + 0xb8));
    return *(undefined8 *)(param_3 + 0xa0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsBoolean()");
}

