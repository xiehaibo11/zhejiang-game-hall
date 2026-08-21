
/* dragonBones::VerticesData::shareFrom(dragonBones::VerticesData const&) */

void __thiscall dragonBones::VerticesData::shareFrom(VerticesData *this,VerticesData *param_1)

{
  *this = (VerticesData)0x1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}

