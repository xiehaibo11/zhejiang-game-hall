
/* cocos2d::Physics3DHingeConstraint::setAxis(cocos2d::Vec3 const&) */

void cocos2d::Physics3DHingeConstraint::setAxis(Vec3 *param_1)

{
  long lVar1;
  Vec3 *in_x1;
  undefined4 local_38 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38[0] = convertVec3TobtVector3(in_x1);
  btHingeConstraint::setAxis(*(btHingeConstraint **)(param_1 + 0x28),(btVector3 *)local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

