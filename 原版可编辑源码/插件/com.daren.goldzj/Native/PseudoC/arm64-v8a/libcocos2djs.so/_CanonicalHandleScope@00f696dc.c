
/* v8::internal::CanonicalHandleScope::~CanonicalHandleScope() */

void __thiscall
v8::internal::CanonicalHandleScope::~CanonicalHandleScope(CanonicalHandleScope *this)

{
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x48));
  }
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  *(undefined8 *)(*(long *)this + 0x95b8) = *(undefined8 *)(this + 0x60);
  Zone::~Zone((Zone *)(this + 8));
  return;
}

