
/* v8::V8::CopyTracedGlobalReference(unsigned long const* const*, unsigned long**) */

void v8::V8::CopyTracedGlobalReference(ulong **param_1,ulong **param_2)

{
  internal::GlobalHandles::CopyTracedGlobal(param_1,param_2);
  return;
}

