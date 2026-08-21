
/* v8::internal::GlobalHandles::MoveTracedGlobal(unsigned long**, unsigned long**) */

void v8::internal::GlobalHandles::MoveTracedGlobal(ulong **param_1,ulong **param_2)

{
  if ((*param_1)[3] != 0) {
    return;
  }
  (*param_1)[2] = (ulong)param_2;
  return;
}

