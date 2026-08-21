
/* cocos2d::PUFlockCenteringAffector::preUpdateAffector(float) */

void cocos2d::PUFlockCenteringAffector::preUpdateAffector(float param_1)

{
  long lVar1;
  long in_x0;
  undefined8 *puVar2;
  float fVar3;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar3 = *(float *)(in_x0 + 0xc4);
  if (fVar3 == 0.0) {
    puVar2 = (undefined8 *)PUAffector::getDerivedPosition();
    local_38 = *puVar2;
    local_30 = *(undefined4 *)(puVar2 + 1);
  }
  else {
    Vec3::Vec3((Vec3 *)&local_38,*(float *)(in_x0 + 0xac) / fVar3,*(float *)(in_x0 + 0xb0) / fVar3,
               *(float *)(in_x0 + 0xb4) / fVar3);
  }
  *(undefined8 *)(in_x0 + 0xb0) = 0;
  *(undefined8 *)(in_x0 + 0xb8) = local_38;
  *(undefined4 *)(in_x0 + 0xc0) = local_30;
  *(undefined4 *)(in_x0 + 0xc4) = 0;
  *(undefined4 *)(in_x0 + 0xac) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

