
/* cocos2d::Physics3D6DofConstraint::getAngularLowerLimit() const */

void __thiscall
cocos2d::Physics3D6DofConstraint::getAngularLowerLimit(Physics3D6DofConstraint *this)

{
  long lVar1;
  long lVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 0101a6b8 with catch @ 0101a6f4 */
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x28);
  local_38 = *(undefined4 *)(lVar2 + 0x37c);
  local_34 = *(undefined4 *)(lVar2 + 0x3bc);
  uStack_30 = *(undefined4 *)(lVar2 + 0x3fc);
  convertbtVector3ToVec3((btVector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

