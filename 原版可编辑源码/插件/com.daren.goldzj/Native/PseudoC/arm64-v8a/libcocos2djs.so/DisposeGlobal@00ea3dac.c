
/* v8::V8::DisposeGlobal(unsigned long*) */

void v8::V8::DisposeGlobal(ulong *param_1)

{
  internal::GlobalHandles::Destroy(param_1);
  return;
}

