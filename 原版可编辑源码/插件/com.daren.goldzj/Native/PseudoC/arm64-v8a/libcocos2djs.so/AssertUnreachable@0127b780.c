
/* v8::internal::TurboAssembler::AssertUnreachable(v8::internal::AbortReason) */

void v8::internal::TurboAssembler::AssertUnreachable(long param_1)

{
  if (*(char *)(param_1 + 0xc0) != '\0') {
    Abort();
    return;
  }
  return;
}

