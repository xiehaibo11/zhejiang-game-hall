
/* v8::V8::DisposeTracedGlobal(unsigned long*) */

void v8::V8::DisposeTracedGlobal(ulong *param_1)

{
  internal::GlobalHandles::DestroyTraced(param_1);
  return;
}

