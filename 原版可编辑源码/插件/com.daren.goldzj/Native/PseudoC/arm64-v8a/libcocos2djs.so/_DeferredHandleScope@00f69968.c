
/* v8::internal::DeferredHandleScope::~DeferredHandleScope() */

void __thiscall v8::internal::DeferredHandleScope::~DeferredHandleScope(DeferredHandleScope *this)

{
  *(int *)(**(long **)(this + 0x10) + 0x95b0) = *(int *)(**(long **)(this + 0x10) + 0x95b0) + -1;
  return;
}

