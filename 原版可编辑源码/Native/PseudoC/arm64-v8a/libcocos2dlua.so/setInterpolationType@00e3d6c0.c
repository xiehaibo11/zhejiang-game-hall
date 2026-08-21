
/* cocos2d::PUDynamicAttributeCurved::setInterpolationType(cocos2d::PUInterpolationType) */

void __thiscall
cocos2d::PUDynamicAttributeCurved::setInterpolationType(PUDynamicAttributeCurved *this,int param_2)

{
  if (*(int *)(this + 0xa8) != param_2) {
    *(int *)(this + 0xa8) = param_2;
    *(undefined8 *)(this + 0xb8) = *(undefined8 *)(this + 0xb0);
  }
                    /* catch() { ... } // from try @ 00e3d63c with catch @ 00e3d6d8 */
  return;
}

