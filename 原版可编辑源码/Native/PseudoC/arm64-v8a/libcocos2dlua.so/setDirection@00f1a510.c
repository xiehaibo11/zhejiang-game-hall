
/* cocos2d::DirectionLight::setDirection(cocos2d::Vec3 const&) */

void __thiscall cocos2d::DirectionLight::setDirection(DirectionLight *this,Vec3 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Vec3 aVStack_58 [16];
  long local_48;
  
                    /* try { // try from 00f1a520 to 0101a523 has its CatchHandler @ 00f1a608 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar2 = *(float *)param_1;
                    /* try { // try from 00f1a540 to 0101a54f has its CatchHandler @ 00f1a604 */
  fVar4 = *(float *)(param_1 + 8);
  fVar3 = atan2f(-fVar2,-fVar4);
  fVar2 = atan2f(-*(float *)(param_1 + 4),SQRT(fVar2 * fVar2 + fVar4 * fVar4));
  Vec3::Vec3(aVStack_58,fVar2 * -57.29578,fVar3 * 57.29578,0.0);
  (**(code **)(*(long *)this + 400))(this,aVStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

