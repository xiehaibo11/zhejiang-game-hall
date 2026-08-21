
/* v8::internal::WasmDebugInfo::GetInterpretedFrame(unsigned long, int) */

void v8::internal::WasmDebugInfo::GetInterpretedFrame(ulong param_1,int param_2)

{
  FUN_01206948(**(undefined8 **)
                 (*(long *)((*(ulong *)param_1 & 0xffffffff00000000 |
                            (ulong)*(uint *)(*(ulong *)param_1 + 7)) + 3) + 0x18),param_2);
  return;
}

