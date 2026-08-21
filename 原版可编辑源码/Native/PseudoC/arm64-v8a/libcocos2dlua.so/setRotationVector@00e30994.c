
/* cocos2d::PUVortexAffector::setRotationVector(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUVortexAffector::setRotationVector(PUVortexAffector *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0xac) = uVar1;
  return;
}

