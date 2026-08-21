
/* v8::internal::GlobalHandles::Destroy(unsigned long*) */

void v8::internal::GlobalHandles::Destroy(ulong *param_1)

{
  if (param_1 != (ulong *)0x0) {
    NodeSpace<v8::internal::GlobalHandles::Node>::Release((Node *)param_1);
    return;
  }
  return;
}

