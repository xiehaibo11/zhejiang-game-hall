
/* cocos2d::PULineAffector::setEnd(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PULineAffector::setEnd(PULineAffector *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
                    /* catch() { ... } // from try @ 00e28b44 with catch @ 00e293c0 */
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 8);
                    /* catch() { ... } // from try @ 00e28b3c with catch @ 00e293c4 */
  *(undefined8 *)(this + 0xb4) = uVar1;
                    /* catch() { ... } // from try @ 00e28e74 with catch @ 00e293c8 */
  return;
}

