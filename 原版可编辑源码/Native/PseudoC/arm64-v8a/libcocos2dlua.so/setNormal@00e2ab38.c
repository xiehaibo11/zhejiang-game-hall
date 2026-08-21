
/* cocos2d::PUPlaneCollider::setNormal(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUPlaneCollider::setNormal(PUPlaneCollider *this,Vec3 *param_1)

{
  Vec3 *pVVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc0) = uVar2;
  pVVar1 = (Vec3 *)PUAffector::getDerivedPosition();
  PUPlane::redefine((PUPlane *)(this + 0xd8),(Vec3 *)(this + 0xc0),pVVar1);
  return;
}

