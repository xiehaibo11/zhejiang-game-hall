
/* v8::V8::CopyGlobalReference(unsigned long*) */

void v8::V8::CopyGlobalReference(ulong *param_1)

{
  internal::GlobalHandles::CopyGlobal(param_1);
  return;
}

