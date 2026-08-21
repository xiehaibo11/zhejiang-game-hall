
/* btDbvtNodeEnumerator::~btDbvtNodeEnumerator() */

void __thiscall btDbvtNodeEnumerator::~btDbvtNodeEnumerator(btDbvtNodeEnumerator *this)

{
  *(undefined ***)this = &PTR__btDbvtNodeEnumerator_01733f80;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    if (this[0x20] != (btDbvtNodeEnumerator)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x18));
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (btDbvtNodeEnumerator)0x1;
  *(undefined8 *)(this + 0xc) = 0;
  return;
}

