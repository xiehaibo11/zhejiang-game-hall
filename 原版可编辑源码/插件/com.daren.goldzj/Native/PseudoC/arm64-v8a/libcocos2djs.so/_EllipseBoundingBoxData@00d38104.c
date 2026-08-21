
/* dragonBones::EllipseBoundingBoxData::~EllipseBoundingBoxData() */

void __thiscall
dragonBones::EllipseBoundingBoxData::~EllipseBoundingBoxData(EllipseBoundingBoxData *this)

{
  *(undefined ***)this = &PTR__EllipseBoundingBoxData_01c90da0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 1;
  BaseObject::~BaseObject((BaseObject *)this);
  operator_delete(this);
  return;
}

