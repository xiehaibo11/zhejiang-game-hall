
/* cocostudio::BoneData::~BoneData() */

void __thiscall cocostudio::BoneData::~BoneData(BoneData *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__BoneData_016c8db8;
  puVar1 = *(undefined8 **)(this + 0x88);
  puVar2 = *(undefined8 **)(this + 0x90);
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x88);
  }
  *(undefined8 **)(this + 0x90) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x90) = puVar1;
    operator_delete(puVar1);
  }
  if (((byte)this[0x70] & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

