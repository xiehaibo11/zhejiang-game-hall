
/* v8::internal::GlobalHandles::MarkTraced(unsigned long*) */

void v8::internal::GlobalHandles::MarkTraced(ulong *param_1)

{
  *(byte *)((long)param_1 + 0xb) = *(byte *)((long)param_1 + 0xb) | 0x20;
  return;
}

