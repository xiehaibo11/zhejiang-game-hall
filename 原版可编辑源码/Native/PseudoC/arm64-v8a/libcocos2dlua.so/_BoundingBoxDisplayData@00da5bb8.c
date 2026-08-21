
/* dragonBones::BoundingBoxDisplayData::~BoundingBoxDisplayData() */

void __thiscall
dragonBones::BoundingBoxDisplayData::~BoundingBoxDisplayData(BoundingBoxDisplayData *this)

{
  ~BoundingBoxDisplayData(this);
  operator_delete(this);
  return;
}

