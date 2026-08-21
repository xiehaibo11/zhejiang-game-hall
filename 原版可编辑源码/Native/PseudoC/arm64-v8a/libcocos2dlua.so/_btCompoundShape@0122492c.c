
/* btCompoundShape::~btCompoundShape() */

void __thiscall btCompoundShape::~btCompoundShape(btCompoundShape *this)

{
  ~btCompoundShape(this);
  btAlignedFreeInternal(this);
  return;
}

