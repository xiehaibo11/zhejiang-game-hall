
/* dragonBones::PolygonBoundingBoxData::~PolygonBoundingBoxData() */

void __thiscall
dragonBones::PolygonBoundingBoxData::~PolygonBoundingBoxData(PolygonBoundingBoxData *this)

{
  void *pvVar1;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__PolygonBoundingBoxData_016d82b8;
  *(undefined4 *)(this + 0x14) = 0;
  if (*(BaseObject **)(this + 0x40) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x40));
  }
  pvVar1 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x10) = 2;
  *(void **)(this + 0x30) = pvVar1;
  *(undefined8 *)(this + 0x40) = 0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

