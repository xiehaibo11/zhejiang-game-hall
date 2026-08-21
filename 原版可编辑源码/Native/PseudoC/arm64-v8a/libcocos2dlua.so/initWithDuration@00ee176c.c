
/* cocos2d::BezierTo::initWithDuration(float, cocos2d::_ccBezierConfig const&) */

undefined8 __thiscall
cocos2d::BezierTo::initWithDuration(BezierTo *this,float param_1,_ccBezierConfig *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  fVar1 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar1 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
                    /* catch() { ... } // from try @ 00ee16b4 with catch @ 00ee178c */
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar1;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_2 + 0x10);
                    /* try { // try from 00ee17a8 to 00fe17eb has its CatchHandler @ 00ee17a8
                       catch() { ... } // from try @ 00ee17a8 with catch @ 00ee17a8
                       catch() { ... } // from try @ 00ee1828 with catch @ 00ee17a8 */
  *(undefined8 *)(this + 0x88) = uVar3;
  *(undefined8 *)(this + 0x80) = uVar2;
  return 1;
}

