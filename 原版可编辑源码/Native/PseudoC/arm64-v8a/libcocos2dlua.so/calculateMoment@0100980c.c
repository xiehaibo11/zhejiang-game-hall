
/* cocos2d::PhysicsShapeCircle::calculateMoment(float, float, cocos2d::Vec2 const&) */

undefined1  [16]
cocos2d::PhysicsShapeCircle::calculateMoment(float param_1,float param_2,Vec2 *param_3)

{
  undefined4 in_register_00005004;
  undefined1 auVar1 [16];
  undefined4 in_register_00005024;
  
                    /* catch() { ... } // from try @ 0100984c with catch @ 01009814 */
  if (param_1 == 3.4028235e+38) {
    return ZEXT416(0x7f7fffff);
  }
  auVar1 = cpMomentForCircle(CONCAT44(in_register_00005004,param_1),0,
                             CONCAT44(in_register_00005024,param_2),*(undefined4 *)param_3,
                             *(undefined4 *)(param_3 + 4));
  return auVar1;
}

