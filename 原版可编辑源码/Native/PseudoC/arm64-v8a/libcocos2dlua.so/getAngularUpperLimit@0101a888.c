
/* cocos2d::Physics3D6DofConstraint::getAngularUpperLimit() const */

void __thiscall
cocos2d::Physics3D6DofConstraint::getAngularUpperLimit(Physics3D6DofConstraint *this)

{
  long lVar1;
  long lVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0101a90c with catch @ 0101a8a4 */
  lVar2 = *(long *)(this + 0x28);
  local_38 = *(undefined4 *)(lVar2 + 0x380);
  local_34 = *(undefined4 *)(lVar2 + 0x3c0);
  uStack_30 = *(undefined4 *)(lVar2 + 0x400);
  convertbtVector3ToVec3((btVector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

