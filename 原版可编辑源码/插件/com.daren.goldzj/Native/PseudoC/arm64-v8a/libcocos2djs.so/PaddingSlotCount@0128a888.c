
/* v8::internal::BuiltinContinuationFrameConstants::PaddingSlotCount(int) */

int v8::internal::BuiltinContinuationFrameConstants::PaddingSlotCount(int param_1)

{
  return ((param_1 + 8U & 0xfffffffe) - param_1) + -7;
}

