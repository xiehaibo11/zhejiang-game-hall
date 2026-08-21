
/* cocos2d::PUScaleAffector::setDynScaleY(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUScaleAffector::setDynScaleY(PUScaleAffector *this,PUDynamicAttribute *param_1)

{
                    /* catch() { ... } // from try @ 00e2bf98 with catch @ 00e2c0b4 */
  if (*(long **)(this + 0xb8) != (long *)0x0) {
                    /* catch() { ... } // from try @ 00e2bdf4 with catch @ 00e2c0b8 */
    (**(code **)(**(long **)(this + 0xb8) + 8))();
    *(undefined8 *)(this + 0xb8) = 0;
  }
  *(PUDynamicAttribute **)(this + 0xb8) = param_1;
  this[0xd1] = (PUScaleAffector)0x1;
  return;
}

