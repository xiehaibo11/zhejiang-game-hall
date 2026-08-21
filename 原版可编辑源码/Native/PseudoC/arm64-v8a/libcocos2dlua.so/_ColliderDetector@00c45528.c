
/* cocostudio::ColliderDetector::~ColliderDetector() */

void __thiscall cocostudio::ColliderDetector::~ColliderDetector(ColliderDetector *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__ColliderDetector_016c9d30;
  puVar1 = *(undefined8 **)(this + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x28);
  }
  *(undefined8 **)(this + 0x30) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x30) = puVar1;
    operator_delete(puVar1);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

