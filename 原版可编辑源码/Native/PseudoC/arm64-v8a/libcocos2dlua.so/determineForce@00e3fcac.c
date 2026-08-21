
/* cocos2d::PUForceField::determineForce(cocos2d::Vec3 const&, cocos2d::Vec3&, float) */

void cocos2d::PUForceField::determineForce(Vec3 *param_1,Vec3 *param_2,float param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *in_x2;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *in_x2 = 0;
  *(undefined4 *)(in_x2 + 1) = 0;
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    local_38 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),
                        (float)*(undefined8 *)param_2 - (float)*(undefined8 *)(param_1 + 0x40));
    local_30 = *(float *)(param_2 + 8) - *(float *)(param_1 + 0x48);
    param_3 = (float)(**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_3);
}

