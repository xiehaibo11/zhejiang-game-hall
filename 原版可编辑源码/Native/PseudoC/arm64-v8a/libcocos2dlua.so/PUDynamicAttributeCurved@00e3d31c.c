
/* cocos2d::PUDynamicAttributeCurved::PUDynamicAttributeCurved() */

void __thiscall
cocos2d::PUDynamicAttributeCurved::PUDynamicAttributeCurved(PUDynamicAttributeCurved *this)

{
                    /* try { // try from 00e3d320 to 00f3d35b has its CatchHandler @ 00e3d320
                       catch() { ... } // from try @ 00e3d320 with catch @ 00e3d320
                       catch() { ... } // from try @ 00e3d370 with catch @ 00e3d320 */
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR__PUDynamicAttributeCurved_016f1c48;
  PUSimpleSpline::PUSimpleSpline((PUSimpleSpline *)(this + 0x30));
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
                    /* try { // try from 00e3d35c to 00f3d36f has its CatchHandler @ 00e3d3a8 */
  *(undefined4 *)(this + 0x24) = 2;
  return;
}

