
/* v8::internal::GlobalHandles::InRecursiveGC(unsigned int) */

bool __thiscall v8::internal::GlobalHandles::InRecursiveGC(GlobalHandles *this,uint param_1)

{
  return *(uint *)(this + 0xa4) != param_1;
}

