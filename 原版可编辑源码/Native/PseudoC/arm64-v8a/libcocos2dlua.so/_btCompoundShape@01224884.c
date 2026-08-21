
/* btCompoundShape::~btCompoundShape() */

void __thiscall btCompoundShape::~btCompoundShape(btCompoundShape *this)

{
  *(undefined ***)this = &PTR__btCompoundShape_01732be0;
  if (*(btDbvt **)(this + 0x58) != (btDbvt *)0x0) {
    btDbvt::~btDbvt(*(btDbvt **)(this + 0x58));
    btAlignedFreeInternal(*(void **)(this + 0x58));
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    if (this[0x30] != (btCompoundShape)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x28));
    }
    *(undefined8 *)(this + 0x28) = 0;
  }
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (btCompoundShape)0x1;
  *(undefined8 *)(this + 0x1c) = 0;
  return;
}

