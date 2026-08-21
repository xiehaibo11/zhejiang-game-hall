
/* cocos2d::PUDynamicAttributeCurved::PUDynamicAttributeCurved(cocos2d::PUInterpolationType) */

void __thiscall
cocos2d::PUDynamicAttributeCurved::PUDynamicAttributeCurved
          (PUDynamicAttributeCurved *this,undefined4 param_2)

{
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x2c) = 0;
                    /* catch() { ... } // from try @ 00e3d35c with catch @ 00e3d3a8 */
  *(undefined ***)this = &PTR__PUDynamicAttributeCurved_016f1c48;
  PUSimpleSpline::PUSimpleSpline((PUSimpleSpline *)(this + 0x30));
  *(undefined4 *)(this + 0xa8) = param_2;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
                    /* catch() { ... } // from try @ 00e3d41c with catch @ 00e3d3c4
                       catch() { ... } // from try @ 00e3d650 with catch @ 00e3d3c4 */
  *(undefined4 *)(this + 0x24) = 2;
  return;
}

