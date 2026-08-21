
/* v8::internal::interpreter::IntrinsicsHelper::IsSupported(v8::internal::Runtime::FunctionId) */

uint v8::internal::interpreter::IntrinsicsHelper::IsSupported(int param_1)

{
  if (param_1 - 0x1dbU < 0x1c) {
    return 0xdeffffdU >> (ulong)(param_1 - 0x1dbU & 0x1f) & 1;
  }
  return 0;
}

