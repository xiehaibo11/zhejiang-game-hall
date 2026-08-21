
/* cocos2d::Bone3D::updateWorldMat() */

void __thiscall cocos2d::Bone3D::updateWorldMat(Bone3D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  getWorldMat(this);
  puVar1 = *(undefined8 **)(this + 0xd0);
  for (puVar2 = *(undefined8 **)(this + 200); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    updateWorldMat((Bone3D *)*puVar2);
  }
  return;
}

