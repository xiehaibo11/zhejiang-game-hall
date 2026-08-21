
/* v8::internal::FreeListLegacy::~FreeListLegacy() */

void __thiscall v8::internal::FreeListLegacy::~FreeListLegacy(FreeListLegacy *this)

{
  *(undefined ***)this = &PTR__FreeListLegacy_01ca96b8;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
    return;
  }
  return;
}

