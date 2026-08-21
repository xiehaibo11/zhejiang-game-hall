
/* cocostudio::MovementBoneData::~MovementBoneData() */

void __thiscall cocostudio::MovementBoneData::~MovementBoneData(MovementBoneData *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__MovementBoneData_016c8e90;
  puVar1 = *(undefined8 **)(this + 0x48);
  puVar2 = *(undefined8 **)(this + 0x50);
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x48);
  }
  *(undefined8 **)(this + 0x50) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x50) = puVar1;
    operator_delete(puVar1);
  }
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

