
/* cocos2d::Physics3DConeTwistConstraint::GetPointForAngle(float, float) const */

void cocos2d::Physics3DConeTwistConstraint::GetPointForAngle(float param_1,float param_2)

{
  long lVar1;
  long in_x0;
  undefined4 local_38;
  float fStack_34;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = btConeTwistConstraint::GetPointForAngle
                       (*(btConeTwistConstraint **)(in_x0 + 0x28),param_1,param_2);
  fStack_34 = param_2;
  convertbtVector3ToVec3((btVector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

