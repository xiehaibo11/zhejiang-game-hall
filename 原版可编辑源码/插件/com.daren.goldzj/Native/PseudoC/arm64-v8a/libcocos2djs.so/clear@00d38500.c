
/* dragonBones::VerticesData::clear() */

void __thiscall dragonBones::VerticesData::clear(VerticesData *this)

{
  if ((*this == (VerticesData)0x0) && (*(BaseObject **)(this + 0x10) != (BaseObject *)0x0)) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x10));
  }
  *(undefined2 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

