
/* cocos2d::PUAlignAffector::updatePUAffector(cocos2d::PUParticle3D*, float) */

void cocos2d::PUAlignAffector::updatePUAffector(PUParticle3D *param_1,float param_2)

{
  long lVar1;
  PUParticle3D *in_x1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00e221cc with catch @ 00e2228c */
                    /* catch() { ... } // from try @ 00e220c0 with catch @ 00e22290 */
                    /* catch() { ... } // from try @ 00e21b94 with catch @ 00e22294 */
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 8);
                    /* catch() { ... } // from try @ 00e221d8 with catch @ 00e22298 */
                    /* catch() { ... } // from try @ 00e21a44 with catch @ 00e2229c */
  fVar3 = (float)uVar2 - (float)*(undefined8 *)(in_x1 + 8);
  fVar4 = (float)((ulong)uVar2 >> 0x20) - (float)((ulong)*(undefined8 *)(in_x1 + 8) >> 0x20);
  local_40 = *(float *)(*(long *)(param_1 + 0xb0) + 0x10) - *(float *)(in_x1 + 0x10);
  local_48 = CONCAT44(fVar4,fVar3);
  if (param_1[0xac] != (PUParticle3D)0x0) {
                    /* catch() { ... } // from try @ 00e21b68 with catch @ 00e222bc */
                    /* catch() { ... } // from try @ 00e21f74 with catch @ 00e222d0
                       catch() { ... } // from try @ 00e21fdc with catch @ 00e222d0 */
                    /* catch() { ... } // from try @ 00e21e94 with catch @ 00e222d4
                       catch() { ... } // from try @ 00e21efc with catch @ 00e222d4 */
                    /* catch() { ... } // from try @ 00e21a08 with catch @ 00e222d8 */
                    /* catch() { ... } // from try @ 00e216b4 with catch @ 00e222dc */
    PUParticle3D::setOwnDimensions
              (in_x1,*(float *)(in_x1 + 0x44),
               SQRT(fVar3 * fVar3 + fVar4 * fVar4 + local_40 * local_40),*(float *)(in_x1 + 0x4c));
  }
  Vec3::normalize((Vec3 *)&local_48);
  *(undefined8 *)(in_x1 + 0x14) = local_48;
                    /* catch() { ... } // from try @ 00e21b30 with catch @ 00e222f0 */
                    /* catch() { ... } // from try @ 00e21fb4 with catch @ 00e222f4 */
  *(float *)(in_x1 + 0x1c) = local_40;
                    /* catch() { ... } // from try @ 00e21ed4 with catch @ 00e222f8 */
  *(PUParticle3D **)(param_1 + 0xb0) = in_x1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

