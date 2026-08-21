
/* v8::internal::GlobalObjectsEnumerator::~GlobalObjectsEnumerator() */

void __thiscall
v8::internal::GlobalObjectsEnumerator::~GlobalObjectsEnumerator(GlobalObjectsEnumerator *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  *(undefined ***)this = &PTR__GlobalObjectsEnumerator_01cb75b0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

