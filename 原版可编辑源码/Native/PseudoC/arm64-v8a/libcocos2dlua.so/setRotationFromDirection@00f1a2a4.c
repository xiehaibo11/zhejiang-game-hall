
/* cocos2d::BaseLight::setRotationFromDirection(cocos2d::Vec3 const&) */

void __thiscall cocos2d::BaseLight::setRotationFromDirection(BaseLight *this,Vec3 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Vec3 aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f1a2c8 to 0101a2d7 has its CatchHandler @ 00f1a318 */
  fVar2 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 8);
                    /* try { // try from 00f1a2d8 to 0101a32b has its CatchHandler @ 00f1a28c */
  fVar3 = atan2f(-fVar2,-fVar4);
  fVar2 = atan2f(-*(float *)(param_1 + 4),SQRT(fVar2 * fVar2 + fVar4 * fVar4));
                    /* catch() { ... } // from try @ 00f1a2c8 with catch @ 00f1a318 */
  Vec3::Vec3(aVStack_58,fVar2 * -57.29578,fVar3 * 57.29578,0.0);
  (**(code **)(*(long *)this + 400))(this,aVStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

