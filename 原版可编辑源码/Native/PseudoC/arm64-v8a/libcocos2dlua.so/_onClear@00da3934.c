
/* dragonBones::PolygonBoundingBoxData::_onClear() */

void __thiscall dragonBones::PolygonBoundingBoxData::_onClear(PolygonBoundingBoxData *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  if (*(BaseObject **)(this + 0x40) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x40));
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x10) = 2;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(this + 0x40) = 0;
  return;
}

