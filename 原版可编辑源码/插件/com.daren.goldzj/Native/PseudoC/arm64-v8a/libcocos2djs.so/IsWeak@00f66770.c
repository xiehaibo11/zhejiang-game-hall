
/* v8::internal::GlobalHandles::IsWeak(unsigned long*) */

bool v8::internal::GlobalHandles::IsWeak(ulong *param_1)

{
  return (*(byte *)((long)param_1 + 0xb) & 7) == 2;
}

