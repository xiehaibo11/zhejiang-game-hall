
/* cocos2d::Skeleton3D::removeAllBones() */

void __thiscall cocos2d::Skeleton3D::removeAllBones(Skeleton3D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(this + 0x28);
  puVar3 = *(undefined8 **)(this + 0x30);
  if (puVar2 != puVar3) {
    do {
      puVar1 = puVar2 + 1;
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar1;
    } while (puVar3 != puVar1);
    puVar2 = *(undefined8 **)(this + 0x28);
  }
  puVar3 = *(undefined8 **)(this + 0x40);
  puVar1 = *(undefined8 **)(this + 0x48);
  *(undefined8 **)(this + 0x30) = puVar2;
  if (puVar3 != puVar1) {
    do {
      puVar2 = puVar3 + 1;
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar2;
    } while (puVar1 != puVar2);
    puVar3 = *(undefined8 **)(this + 0x40);
  }
  *(undefined8 **)(this + 0x48) = puVar3;
  return;
}

