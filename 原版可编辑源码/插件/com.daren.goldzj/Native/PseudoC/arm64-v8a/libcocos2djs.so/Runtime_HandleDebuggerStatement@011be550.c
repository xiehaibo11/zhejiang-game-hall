
/* v8::internal::Runtime_HandleDebuggerStatement(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Runtime_HandleDebuggerStatement(int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    if ((*(Debug **)(param_3 + 0xb6c8))[0xd] != (Debug)0x0) {
      Debug::HandleDebugBreak(*(Debug **)(param_3 + 0xb6c8),1);
    }
    StackGuard::HandleInterrupts((StackGuard *)(param_3 + 0x48));
    return;
  }
  FUN_011be5a8(param_1,param_2,param_3);
  return;
}

