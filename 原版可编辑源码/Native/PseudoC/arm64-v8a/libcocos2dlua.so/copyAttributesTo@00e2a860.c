
/* cocos2d::PUPathFollower::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall cocos2d::PUPathFollower::copyAttributesTo(PUPathFollower *this,PUAffector *param_1)

{
  ushort uVar1;
  Vec3 *pVVar2;
  ushort uVar3;
  
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  uVar1 = PUSimpleSpline::getNumPoints((PUSimpleSpline *)(this + 0xb0));
  PUSimpleSpline::clear((PUSimpleSpline *)(param_1 + 0xb0));
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      pVVar2 = (Vec3 *)PUSimpleSpline::getPoint((PUSimpleSpline *)(this + 0xb0),uVar3);
      PUSimpleSpline::addPoint((PUSimpleSpline *)(param_1 + 0xb0),pVVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}

