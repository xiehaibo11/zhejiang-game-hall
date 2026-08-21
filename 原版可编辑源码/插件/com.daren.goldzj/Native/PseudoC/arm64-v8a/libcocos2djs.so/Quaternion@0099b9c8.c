
/* cocos2d::Quaternion::Quaternion(cocos2d::Vec3 const&, float) */

void __thiscall cocos2d::Quaternion::Quaternion(Quaternion *this,Vec3 *param_1,float param_2)

{
  long lVar1;
  float fVar2;
  Vec3 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar2 = sinf(param_2 * 0.5);
  Vec3::Vec3(local_48,param_1);
  Vec3::normalize(local_48);
                    /* catch() { ... } // from try @ 0099b8cc with catch @ 0099ba28 */
  *(ulong *)this = CONCAT44(local_48._4_4_ * fVar2,local_48._0_4_ * fVar2);
                    /* catch() { ... } // from try @ 0099b8c0 with catch @ 0099ba2c */
                    /* catch() { ... } // from try @ 0099b8a0 with catch @ 0099ba30 */
  *(float *)(this + 8) = fVar2 * local_40;
  fVar2 = cosf(param_2 * 0.5);
                    /* catch() { ... } // from try @ 0099b8d8 with catch @ 0099ba40 */
  *(float *)(this + 0xc) = fVar2;
  Vec3::~Vec3(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

