
/* v8::internal::InterpreterFrameConstants::RegisterStackSlotCount(int) */

uint v8::internal::InterpreterFrameConstants::RegisterStackSlotCount(int param_1)

{
  return param_1 + 1U & 0xfffffffe;
}

