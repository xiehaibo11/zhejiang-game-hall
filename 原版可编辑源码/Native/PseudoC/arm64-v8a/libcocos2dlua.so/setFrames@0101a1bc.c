
/* cocos2d::Physics3DConeTwistConstraint::setFrames(cocos2d::Mat4 const&, cocos2d::Mat4 const&) */

void __thiscall
cocos2d::Physics3DConeTwistConstraint::setFrames
          (Physics3DConeTwistConstraint *this,Mat4 *param_1,Mat4 *param_2)

{
  long lVar1;
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  convertMat4TobtTransform(param_1);
  convertMat4TobtTransform(param_2);
  (**(code **)(**(long **)(this + 0x28) + 0x58))(*(long **)(this + 0x28),auStack_78,auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

