
/* cocos2d::Physics3DHingeConstraint::setMotorTarget(cocos2d::Quaternion const&, float) */

void cocos2d::Physics3DHingeConstraint::setMotorTarget(Quaternion *param_1,float param_2)

{
  long lVar1;
  Quaternion *in_x1;
  btHingeConstraint *this;
  undefined4 local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = *(btHingeConstraint **)(param_1 + 0x28);
  local_48[0] = convertQuatTobtQuat(in_x1);
  btHingeConstraint::setMotorTarget(this,(btQuaternion *)local_48,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

