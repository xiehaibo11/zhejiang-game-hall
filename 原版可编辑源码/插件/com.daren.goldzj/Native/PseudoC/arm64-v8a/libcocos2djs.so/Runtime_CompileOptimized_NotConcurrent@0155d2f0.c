
/* v8::internal::Runtime_CompileOptimized_NotConcurrent(int, unsigned long*, v8::internal::Isolate*)
    */

ulong v8::internal::Runtime_CompileOptimized_NotConcurrent
                (int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  Isolate *local_28;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_0155d410(param_1,param_2,param_3);
    return uVar3;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar3 = *param_2;
  if (((uVar3 & 1) != 0) &&
     (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x439)) {
    local_28 = param_3;
    uVar3 = StackLimitCheck::JsHasOverflowed((StackLimitCheck *)&local_28,0xa000);
    if ((uVar3 & 1) == 0) {
      uVar3 = Compiler::CompileOptimized(param_2,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = *(ulong *)(param_3 + 0x180);
      }
      else {
        uVar3 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
      }
    }
    else {
      uVar3 = Isolate::StackOverflow(param_3);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

