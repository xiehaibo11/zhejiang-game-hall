
/* cocos2d::PUPlaneCollider::calculateDirectionAfterCollision(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUPlaneCollider::calculateDirectionAfterCollision
          (PUPlaneCollider *this,PUParticle3D *param_1,float param_2)

{
  long lVar1;
  Vec3 *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e2abc8 to 00f2abcb has its CatchHandler @ 00e2ac44 */
  this_00 = (Vec3 *)(param_1 + 0xac);
                    /* try { // try from 00e2abe8 to 00f2abf3 has its CatchHandler @ 00e2ac54 */
  fVar3 = SQRT(*(float *)this_00 * *(float *)this_00 +
               *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0xb0) +
               *(float *)(param_1 + 0xb4) * *(float *)(param_1 + 0xb4));
                    /* try { // try from 00e2abfc to 00f2ac03 has its CatchHandler @ 00e2ac5c */
  if (*(int *)(this + 0xb8) == 2) {
    fVar3 = fVar3 * param_2;
    fVar2 = *(float *)(this + 200);
    *(ulong *)(param_1 + 8) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0xc0) >> 0x20) * fVar3 +
                  (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),
                  (float)*(undefined8 *)(this + 0xc0) * fVar3 + (float)*(undefined8 *)(param_1 + 8))
    ;
    *(float *)(param_1 + 0x10) = fVar3 * fVar2 + *(float *)(param_1 + 0x10);
  }
  else if (*(int *)(this + 0xb8) == 1) {
    Vec3::normalize(this_00);
    local_48 = CONCAT44(-(float)((ulong)*(undefined8 *)(this + 0xc0) >> 0x20),
                        -(float)*(undefined8 *)(this + 0xc0));
    local_40 = -*(float *)(this + 200);
    fVar2 = (float)Vec3::dot(this_00,(Vec3 *)&local_48);
                    /* try { // try from 00e2ac3c to 00f2ac43 has its CatchHandler @ 00e2ac44 */
                    /* catch() { ... } // from try @ 00e2abc8 with catch @ 00e2ac44
                       catch() { ... } // from try @ 00e2ac3c with catch @ 00e2ac44
                       try { // try from 00e2ac44 to 00f2acd7 has its CatchHandler @ 00e2ab8c */
    fVar4 = *(float *)(this + 200);
    fVar2 = fVar2 * -2.0;
                    /* catch() { ... } // from try @ 00e2abe8 with catch @ 00e2ac54 */
                    /* catch() { ... } // from try @ 00e2abfc with catch @ 00e2ac5c */
    fVar5 = *(float *)(this + 0xb0);
    *(ulong *)(param_1 + 0xac) =
         CONCAT44(((float)((ulong)*(undefined8 *)(param_1 + 0xac) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(this + 0xc0) >> 0x20) * fVar2) * fVar3 * fVar5,
                  ((float)*(undefined8 *)(param_1 + 0xac) -
                  (float)*(undefined8 *)(this + 0xc0) * fVar2) * fVar3 * fVar5);
    *(float *)(param_1 + 0xb4) = fVar3 * (*(float *)(param_1 + 0xb4) - fVar2 * fVar4) * fVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

