
/* cocos2d::Physics3D6DofConstraint::getLinearLowerLimit() const */

void __thiscall cocos2d::Physics3D6DofConstraint::getLinearLowerLimit(Physics3D6DofConstraint *this)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = *(undefined8 *)(*(long *)(this + 0x28) + 0x2c8);
  local_40 = *(undefined8 *)(*(long *)(this + 0x28) + 0x2c0);
  convertbtVector3ToVec3((btVector3 *)&local_40);
                    /* catch() { ... } // from try @ 0101a404 with catch @ 0101a4f4 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

