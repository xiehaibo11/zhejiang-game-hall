
/* btDbvtNodeEnumerator::~btDbvtNodeEnumerator() */

void __thiscall btDbvtNodeEnumerator::~btDbvtNodeEnumerator(btDbvtNodeEnumerator *this)

{
  *(undefined ***)this = &PTR__btDbvtNodeEnumerator_01733f80;
  if ((*(void **)(this + 0x18) != (void *)0x0) && (this[0x20] != (btDbvtNodeEnumerator)0x0)) {
    btAlignedFreeInternal(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}

