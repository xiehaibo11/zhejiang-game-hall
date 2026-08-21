
/* v8::internal::TurboAssembler::IsNearCallOffset(long) */

bool v8::internal::TurboAssembler::IsNearCallOffset(long param_1)

{
  return param_1 + 0x2000000U >> 0x1a == 0;
}

