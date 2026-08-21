
/* v8::V8::MoveGlobalReference(unsigned long**, unsigned long**) */

void v8::V8::MoveGlobalReference(ulong **param_1,ulong **param_2)

{
  internal::GlobalHandles::MoveGlobal(param_1,param_2);
  return;
}

