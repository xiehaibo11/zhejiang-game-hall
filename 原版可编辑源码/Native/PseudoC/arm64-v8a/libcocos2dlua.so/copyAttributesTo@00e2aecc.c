
/* cocos2d::PUPlaneCollider::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUPlaneCollider::copyAttributesTo(PUPlaneCollider *this,PUAffector *param_1)

{
  Vec3 *pVVar1;
  undefined8 uVar2;
  
  PUBaseCollider::copyAttributesTo((PUBaseCollider *)this,param_1);
  uVar2 = *(undefined8 *)(this + 0xc0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(this + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  pVVar1 = (Vec3 *)PUAffector::getDerivedPosition();
  PUPlane::redefine((PUPlane *)(param_1 + 0xd8),(Vec3 *)(param_1 + 0xc0),pVVar1);
  return;
}

