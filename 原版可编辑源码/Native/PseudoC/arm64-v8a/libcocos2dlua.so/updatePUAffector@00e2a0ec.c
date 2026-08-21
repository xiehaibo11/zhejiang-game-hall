
/* cocos2d::PUParticleFollower::updatePUAffector(cocos2d::PUParticle3D*, float) */

float cocos2d::PUParticleFollower::updatePUAffector(PUParticle3D *param_1,float param_2)

{
  undefined4 uVar1;
  long in_x1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 00e2a0fc to 00f2a0ff has its CatchHandler @ 00e2a14c */
                    /* try { // try from 00e2a100 to 00f2a143 has its CatchHandler @ 00e2a0c4 */
  if (param_1[0xc0] == (PUParticle3D)0x0) {
    param_2 = (float)Vec3::distance((Vec3 *)(in_x1 + 8),(Vec3 *)(param_1 + 0xb4));
    fVar4 = (*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x48)) *
            0.3333;
    fVar3 = *(float *)(param_1 + 0xac) * fVar4;
                    /* try { // try from 00e2a144 to 00f2a14b has its CatchHandler @ 00e2a14c */
                    /* catch() { ... } // from try @ 00e2a0fc with catch @ 00e2a14c
                       catch() { ... } // from try @ 00e2a144 with catch @ 00e2a14c
                       try { // try from 00e2a14c to 00f2a16b has its CatchHandler @ 00e2a0c4 */
    if ((fVar3 < param_2) && (param_2 < fVar4 * *(float *)(param_1 + 0xb0))) {
      fVar3 = fVar3 / param_2;
      fVar4 = (float)*(undefined8 *)(param_1 + 0xb4);
      fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e2a1c0 with catch @ 00e2a16c
                        */
      param_2 = *(float *)(param_1 + 0xbc) +
                fVar3 * (*(float *)(in_x1 + 0x10) - *(float *)(param_1 + 0xbc));
      *(ulong *)(in_x1 + 8) =
           CONCAT44(fVar5 + ((float)((ulong)*(undefined8 *)(in_x1 + 8) >> 0x20) - fVar5) * fVar3,
                    fVar4 + ((float)*(undefined8 *)(in_x1 + 8) - fVar4) * fVar3);
      *(float *)(in_x1 + 0x10) = param_2;
    }
  }
  uVar1 = *(undefined4 *)(in_x1 + 0x10);
  uVar2 = *(undefined8 *)(in_x1 + 8);
  param_1[0xc0] = (PUParticle3D)0x0;
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined8 *)(param_1 + 0xb4) = uVar2;
  return param_2;
}

