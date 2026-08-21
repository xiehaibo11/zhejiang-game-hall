
/* cocos2d::PUSineForceAffector::updatePUAffector(cocos2d::PUParticle3D*, float) */

void cocos2d::PUSineForceAffector::updatePUAffector(PUParticle3D *param_1,float param_2)

{
  long lVar1;
  long in_x1;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0xc4) == 1) {
    *(ulong *)(in_x1 + 0xac) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(in_x1 + 0xac) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0xb8) + (float)*(undefined8 *)(in_x1 + 0xac));
    *(float *)(in_x1 + 0xb4) = *(float *)(param_1 + 0xc0) + *(float *)(in_x1 + 0xb4);
  }
  else {
    Vec3::Vec3((Vec3 *)&local_38,(*(float *)(in_x1 + 0xac) + *(float *)(param_1 + 0xac)) * 0.5,
               (*(float *)(in_x1 + 0xb0) + *(float *)(param_1 + 0xb0)) * 0.5,
               (*(float *)(in_x1 + 0xb4) + *(float *)(param_1 + 0xb4)) * 0.5);
    *(undefined8 *)(in_x1 + 0xac) = local_38;
    *(undefined4 *)(in_x1 + 0xb4) = local_30;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

