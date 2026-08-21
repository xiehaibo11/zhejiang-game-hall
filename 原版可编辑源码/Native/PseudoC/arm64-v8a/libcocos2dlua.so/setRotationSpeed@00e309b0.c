
/* cocos2d::PUVortexAffector::setRotationSpeed(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUVortexAffector::setRotationSpeed(PUVortexAffector *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 200) != (long *)0x0) {
                    /* try { // try from 00e309d4 to 00f309d7 has its CatchHandler @ 00e30ab8 */
    (**(code **)(**(long **)(this + 200) + 8))();
                    /* try { // try from 00e309d8 to 00f30ad3 has its CatchHandler @ 00e3098c */
    *(undefined8 *)(this + 200) = 0;
  }
  *(PUDynamicAttribute **)(this + 200) = param_1;
  return;
}

