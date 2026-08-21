
/* cocos2d::PhysicsBody::setPositionOffset(cocos2d::Vec2 const&) */

void cocos2d::PhysicsBody::setPositionOffset(Vec2 *param_1)

{
  ulong uVar1;
  undefined8 *in_x1;
  float fVar2;
  float in_s1;
  float fVar3;
  
  uVar1 = Vec2::equals((Vec2 *)(param_1 + 0xc4),(Vec2 *)in_x1);
  if ((uVar1 & 1) != 0) {
    return;
  }
  fVar2 = (float)cpBodyGetPosition(*(undefined8 *)(param_1 + 0x88));
  fVar3 = *(float *)(param_1 + 0xc4);
                    /* try { // try from 01000410 to 0110047b has its CatchHandler @ 01000410
                       catch() { ... } // from try @ 01000410 with catch @ 01000410
                       catch() { ... } // from try @ 01000540 with catch @ 01000410 */
  *(undefined8 *)(param_1 + 0xc4) = *in_x1;
                    /* WARNING: Could not recover jumptable at 0x0100042c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xd8))(fVar2 - fVar3,in_s1 - *(float *)(param_1 + 200),param_1);
  return;
}

