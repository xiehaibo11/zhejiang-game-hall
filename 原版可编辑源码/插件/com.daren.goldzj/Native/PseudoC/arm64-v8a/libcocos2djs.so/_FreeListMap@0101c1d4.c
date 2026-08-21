
/* v8::internal::FreeListMap::~FreeListMap() */

void __thiscall v8::internal::FreeListMap::~FreeListMap(FreeListMap *this)

{
  *(undefined ***)this = &PTR__FreeListMap_01ca9838;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  operator_delete(this);
  return;
}

