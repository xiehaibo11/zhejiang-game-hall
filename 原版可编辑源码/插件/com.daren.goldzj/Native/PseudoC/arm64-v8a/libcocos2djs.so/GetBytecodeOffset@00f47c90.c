
/* v8::internal::InterpretedFrame::GetBytecodeOffset(unsigned long) */

int v8::internal::InterpretedFrame::GetBytecodeOffset(ulong param_1)

{
  return (*(int *)(param_1 - 0x20) >> 1) + -0x21;
}

