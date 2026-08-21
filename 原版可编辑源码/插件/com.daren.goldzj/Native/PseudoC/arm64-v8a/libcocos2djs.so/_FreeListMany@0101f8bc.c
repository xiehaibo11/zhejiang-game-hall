
/* v8::internal::FreeListMany::~FreeListMany() */

void __thiscall v8::internal::FreeListMany::~FreeListMany(FreeListMany *this)

{
  *(undefined ***)this = &PTR__FreeListMany_01ca9778;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
    return;
  }
  return;
}

