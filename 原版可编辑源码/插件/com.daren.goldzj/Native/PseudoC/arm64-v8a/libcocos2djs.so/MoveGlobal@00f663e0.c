
/* v8::internal::GlobalHandles::MoveGlobal(unsigned long**, unsigned long**) */

void v8::internal::GlobalHandles::MoveGlobal(ulong **param_1,ulong **param_2)

{
  if ((*(byte *)((long)*param_1 + 0xb) & 0x37) == 0x32) {
    (*param_1)[2] = (ulong)param_2;
  }
  return;
}

