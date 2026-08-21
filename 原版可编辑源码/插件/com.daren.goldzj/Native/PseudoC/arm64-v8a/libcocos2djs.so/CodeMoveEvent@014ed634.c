
/* v8::internal::PerfJitLogger::CodeMoveEvent(v8::internal::AbstractCode,
   v8::internal::AbstractCode) */

void v8::internal::PerfJitLogger::CodeMoveEvent(undefined8 param_1,ulong param_2)

{
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x86) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","from.IsBytecodeArray()");
}

