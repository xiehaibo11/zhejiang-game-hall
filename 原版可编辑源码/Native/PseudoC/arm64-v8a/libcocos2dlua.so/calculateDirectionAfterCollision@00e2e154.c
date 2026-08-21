
/* cocos2d::PUSphereCollider::calculateDirectionAfterCollision(cocos2d::PUParticle3D*,
   cocos2d::Vec3, float) */

void cocos2d::PUSphereCollider::calculateDirectionAfterCollision
               (float param_1_00,float param_2,float param_3,float param_4,long param_1,long param_6
               )

{
  long lVar1;
  Vec3 *this;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00e2dfe0 with catch @ 00e2e174 */
  local_48 = param_1_00;
  fStack_44 = param_2;
  local_40 = param_3;
                    /* catch() { ... } // from try @ 00e2dfb8 with catch @ 00e2e18c */
  if (*(int *)(param_1 + 0xb8) == 2) {
    fVar2 = *(float *)(param_1 + 0x54);
    param_4 = (*(float *)(param_1 + 0xc0) *
              (*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x48))
              * 0.3333) / param_4;
    *(ulong *)(param_6 + 8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) + param_2 * param_4,
                  (float)*(undefined8 *)(param_1 + 0x4c) + param_1_00 * param_4);
    *(float *)(param_6 + 0x10) = fVar2 + param_3 * param_4;
  }
  else if (*(int *)(param_1 + 0xb8) == 1) {
    this = (Vec3 *)(param_6 + 0xac);
    fVar2 = SQRT(*(float *)this * *(float *)this +
                 *(float *)(param_6 + 0xb0) * *(float *)(param_6 + 0xb0) +
                 *(float *)(param_6 + 0xb4) * *(float *)(param_6 + 0xb4));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e2e31c with catch @ 00e2e1bc
                        */
    Vec3::normalize(this);
    Vec3::normalize((Vec3 *)&local_48);
    fVar3 = (float)Vec3::dot(this,(Vec3 *)&local_48);
    fVar3 = fVar3 * -2.0;
                    /* try { // try from 00e2e1fc to 00f2e223 has its CatchHandler @ 00e2e3a8 */
    fVar4 = *(float *)(param_1 + 0xb0);
    *(ulong *)this =
         CONCAT44((fStack_44 * fVar3 + (float)((ulong)*(undefined8 *)this >> 0x20)) * fVar2 * fVar4,
                  (local_48 * fVar3 + (float)*(undefined8 *)this) * fVar2 * fVar4);
    *(float *)(param_6 + 0xb4) = fVar2 * (fVar3 * local_40 + *(float *)(param_6 + 0xb4)) * fVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

