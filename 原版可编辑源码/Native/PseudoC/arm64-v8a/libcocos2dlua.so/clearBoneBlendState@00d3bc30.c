
/* cocos2d::Bone3D::clearBoneBlendState() */

void __thiscall cocos2d::Bone3D::clearBoneBlendState(Bone3D *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(this + 0x168);
  for (lVar3 = *(long *)(this + 0x170); lVar3 != lVar1; lVar3 = lVar3 + -0x38) {
    Quaternion::~Quaternion((Quaternion *)(lVar3 + -0x2c));
  }
  puVar4 = *(undefined8 **)(this + 200);
  puVar2 = *(undefined8 **)(this + 0xd0);
  *(long *)(this + 0x170) = lVar1;
  for (; puVar4 != puVar2; puVar4 = puVar4 + 1) {
    clearBoneBlendState((Bone3D *)*puVar4);
  }
  return;
}

