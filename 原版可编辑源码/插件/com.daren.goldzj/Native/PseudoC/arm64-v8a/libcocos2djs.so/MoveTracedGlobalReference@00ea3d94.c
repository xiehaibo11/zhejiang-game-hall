
/* v8::V8::MoveTracedGlobalReference(unsigned long**, unsigned long**) */

void v8::V8::MoveTracedGlobalReference(ulong **param_1,ulong **param_2)

{
  internal::GlobalHandles::MoveTracedGlobal(param_1,param_2);
  return;
}

