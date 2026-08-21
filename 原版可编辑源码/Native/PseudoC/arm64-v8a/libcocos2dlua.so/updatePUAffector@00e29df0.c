
/* cocos2d::PULinearForceAffector::updatePUAffector(cocos2d::PUParticle3D*, float) */

void cocos2d::PULinearForceAffector::updatePUAffector(PUParticle3D *param_1,float param_2)

{
  long lVar1;
  PUParticle3D *in_x1;
  float fVar2;
  float fVar3;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e29e10 to 00f29e17 has its CatchHandler @ 00e29f0c */
  if (*(int *)(param_1 + 0xc4) == 1) {
    fVar2 = (float)PUAffector::calculateAffectSpecialisationFactor((PUAffector *)param_1,in_x1);
    fVar3 = *(float *)(param_1 + 0xc0);
    *(ulong *)(in_x1 + 0xac) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) * fVar2 +
                  (float)((ulong)*(undefined8 *)(in_x1 + 0xac) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0xb8) * fVar2 +
                  (float)*(undefined8 *)(in_x1 + 0xac));
    *(float *)(in_x1 + 0xb4) = fVar2 * fVar3 + *(float *)(in_x1 + 0xb4);
  }
  else {
    Vec3::Vec3((Vec3 *)&local_48,(*(float *)(in_x1 + 0xac) + *(float *)(param_1 + 0xac)) * 0.5,
               (*(float *)(in_x1 + 0xb0) + *(float *)(param_1 + 0xb0)) * 0.5,
               (*(float *)(in_x1 + 0xb4) + *(float *)(param_1 + 0xb4)) * 0.5);
    *(undefined8 *)(in_x1 + 0xac) = local_48;
    *(undefined4 *)(in_x1 + 0xb4) = local_40;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

