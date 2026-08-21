
/* cocos2d::PUParticleFollower::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUParticleFollower::copyAttributesTo(PUParticleFollower *this,PUAffector *param_1)

{
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(this + 0xac);
  return;
}

