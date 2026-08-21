
/* cocostudio::ColliderDetector::removeAll() */

void __thiscall cocostudio::ColliderDetector::removeAll(ColliderDetector *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x28);
  puVar1 = *(undefined8 **)(this + 0x30);
  if (puVar3 != puVar1) {
    do {
      puVar2 = puVar3 + 1;
      cocos2d::Ref::release((Ref *)*puVar3);
      puVar3 = puVar2;
    } while (puVar1 != puVar2);
    puVar3 = *(undefined8 **)(this + 0x28);
  }
  *(undefined8 **)(this + 0x30) = puVar3;
  return;
}

