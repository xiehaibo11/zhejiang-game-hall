
/* v8::internal::GlobalHandles::DestroyTraced(unsigned long*) */

void v8::internal::GlobalHandles::DestroyTraced(ulong *param_1)

{
  if (param_1 != (ulong *)0x0) {
    NodeSpace<v8::internal::GlobalHandles::TracedNode>::Release((TracedNode *)param_1);
    return;
  }
  return;
}

