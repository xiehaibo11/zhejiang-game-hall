
/* v8::internal::Runtime_FunctionGetScriptSourcePosition(int, unsigned long*,
   v8::internal::Isolate*) */

ulong v8::internal::Runtime_FunctionGetScriptSourcePosition
                (int param_1,ulong *param_2,Isolate *param_3)

{
  ulong uVar1;
  ulong local_18;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar1 = FUN_015611dc(param_1);
    return uVar1;
  }
  uVar1 = *param_2;
  if (((uVar1 & 1) != 0) &&
     (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x439)) {
    local_18 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb);
    uVar1 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_18);
    return -(uVar1 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar1 & 0xffffffff) << 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

