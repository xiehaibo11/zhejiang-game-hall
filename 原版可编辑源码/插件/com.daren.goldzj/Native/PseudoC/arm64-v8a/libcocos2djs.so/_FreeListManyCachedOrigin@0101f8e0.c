
/* v8::internal::FreeListManyCachedOrigin::~FreeListManyCachedOrigin() */

void __thiscall
v8::internal::FreeListManyCachedOrigin::~FreeListManyCachedOrigin(FreeListManyCachedOrigin *this)

{
  *(undefined ***)this = &PTR__FreeListMany_01ca9778;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  operator_delete(this);
  return;
}

