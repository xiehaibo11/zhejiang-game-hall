
/* dragonBones::RectangleBoundingBoxData::~RectangleBoundingBoxData() */

void __thiscall
dragonBones::RectangleBoundingBoxData::~RectangleBoundingBoxData(RectangleBoundingBoxData *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__RectangleBoundingBoxData_01c90d48;
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

