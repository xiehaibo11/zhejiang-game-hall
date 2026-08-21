
/* cocos2d::PUJetAffector::setDynAcceleration(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUJetAffector::setDynAcceleration(PUJetAffector *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb0) + 8))();
    *(undefined8 *)(this + 0xb0) = 0;
  }
                    /* try { // try from 00e28c6c to 00f28c77 has its CatchHandler @ 00e293a4 */
  *(PUDynamicAttribute **)(this + 0xb0) = param_1;
  return;
}

