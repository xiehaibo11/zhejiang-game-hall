
/* cocos2d::Bone3D::removeAllChildBone() */

void __thiscall cocos2d::Bone3D::removeAllChildBone(Bone3D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 200);
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (puVar3 != puVar1) {
    do {
      puVar2 = puVar3 + 1;
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar2;
    } while (puVar1 != puVar2);
    puVar3 = *(undefined8 **)(this + 200);
  }
  *(undefined8 **)(this + 0xd0) = puVar3;
  return;
}

