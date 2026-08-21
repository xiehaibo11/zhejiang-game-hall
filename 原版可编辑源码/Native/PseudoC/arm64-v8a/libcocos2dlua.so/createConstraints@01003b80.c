
/* cocos2d::PhysicsJointPin::createConstraints() */

void __thiscall cocos2d::PhysicsJointPin::createConstraints(PhysicsJointPin *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  cpConstraint *local_30;
  long local_28;
  
                    /* try { // try from 01003b84 to 01103b8b has its CatchHandler @ 01003c6c */
                    /* try { // try from 01003b8c to 01103c9b has its CatchHandler @ 01003964 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = (cpConstraint *)0x0;
  if (this[0x65] == (PhysicsJointPin)0x0) {
    local_30 = (cpConstraint *)
               cpPivotJointNew(*(undefined4 *)(this + 0x68),*(undefined4 *)(this + 0x6c),
                               *(undefined8 *)(*(long *)(this + 0x38) + 0x88),
                               *(undefined8 *)(*(long *)(this + 0x40) + 0x88));
    uVar3 = 0;
    if (local_30 == (cpConstraint *)0x0) goto LAB_01003c04;
  }
  else {
    local_30 = (cpConstraint *)
               cpPivotJointNew2(*(undefined4 *)(this + 0x68),*(undefined4 *)(this + 0x6c),
                                *(undefined4 *)(this + 0x70),*(undefined4 *)(this + 0x74));
    if (local_30 == (cpConstraint *)0x0) {
      uVar3 = 0;
      goto LAB_01003c04;
    }
  }
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 == *(long **)(this + 0x18)) {
    std::__ndk1::vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>>::
    __push_back_slow_path<cpConstraint*const&>
              ((vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>> *)(this + 8),&local_30);
  }
  else {
    *plVar1 = (long)local_30;
    *(long **)(this + 0x10) = plVar1 + 1;
  }
  uVar3 = 1;
LAB_01003c04:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

