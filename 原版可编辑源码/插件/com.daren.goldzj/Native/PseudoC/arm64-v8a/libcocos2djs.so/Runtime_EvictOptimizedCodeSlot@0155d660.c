
/* v8::internal::Runtime_EvictOptimizedCodeSlot(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_EvictOptimizedCodeSlot(int param_1,ulong *param_2,Isolate *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar1 = FUN_0155d70c(param_1,param_2);
    return uVar1;
  }
  uVar1 = *param_2;
  if (((uVar1 & 1) != 0) &&
     (uVar2 = uVar1 & 0xffffffff00000000,
     *(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x439)) {
    local_8 = uVar2 | *(uint *)((uVar2 | *(uint *)(uVar1 + 0x13)) + 3);
    FeedbackVector::EvictOptimizedCodeMarkedForDeoptimization
              ((FeedbackVector *)&local_8,uVar2 | *(uint *)(uVar1 + 0xb),
               "Runtime_EvictOptimizedCodeSlot");
    return *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

