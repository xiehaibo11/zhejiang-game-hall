
/* v8::internal::IsValidAbortReason(int) */

bool v8::internal::IsValidAbortReason(int param_1)

{
  return (uint)param_1 < 0x38;
}

