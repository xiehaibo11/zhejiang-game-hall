
/* v8::V8::ClearWeak(unsigned long*) */

void v8::V8::ClearWeak(ulong *param_1)

{
  internal::GlobalHandles::ClearWeakness(param_1);
  return;
}

