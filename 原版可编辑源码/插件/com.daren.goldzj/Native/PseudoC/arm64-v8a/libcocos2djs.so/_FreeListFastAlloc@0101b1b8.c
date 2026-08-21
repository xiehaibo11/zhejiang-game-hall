
/* v8::internal::FreeListFastAlloc::~FreeListFastAlloc() */

void __thiscall v8::internal::FreeListFastAlloc::~FreeListFastAlloc(FreeListFastAlloc *this)

{
  *(undefined ***)this = &PTR__FreeListFastAlloc_01ca9718;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
    return;
  }
  return;
}

