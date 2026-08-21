
/* cocos2d::PhysicsJointFixed::createConstraints() */

void __thiscall cocos2d::PhysicsJointFixed::createConstraints(PhysicsJointFixed *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  cpConstraint *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010037ec with catch @ 01003798
                        */
  (**(code **)(**(long **)(*(long *)(this + 0x38) + 0x28) + 0x98))
            (*(long **)(*(long *)(this + 0x38) + 0x28),this + 0x68);
  (**(code **)(**(long **)(*(long *)(this + 0x40) + 0x28) + 0x98))
            (*(long **)(*(long *)(this + 0x40) + 0x28),this + 0x68);
  local_40 = (cpConstraint *)
             cpPivotJointNew(*(undefined4 *)(this + 0x68),*(undefined4 *)(this + 0x6c),
                             *(undefined8 *)(*(long *)(this + 0x38) + 0x88),
                             *(undefined8 *)(*(long *)(this + 0x40) + 0x88));
  uVar3 = 0;
  if (local_40 != (cpConstraint *)0x0) {
                    /* try { // try from 010037e4 to 011037eb has its CatchHandler @ 01003960 */
    plVar1 = *(long **)(this + 0x10);
                    /* try { // try from 010037ec to 01103963 has its CatchHandler @ 01003798 */
    if (plVar1 == *(long **)(this + 0x18)) {
      std::__ndk1::vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>>::
      __push_back_slow_path<cpConstraint*const&>
                ((vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>> *)(this + 8),&local_40
                );
    }
    else {
      *plVar1 = (long)local_40;
      *(long **)(this + 0x10) = plVar1 + 1;
    }
    local_40 = (cpConstraint *)
               cpGearJointNew(0,0x3f800000,*(undefined8 *)(*(long *)(this + 0x38) + 0x88),
                              *(undefined8 *)(*(long *)(this + 0x40) + 0x88));
    uVar3 = 0;
    if (local_40 != (cpConstraint *)0x0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == *(long **)(this + 0x18)) {
        std::__ndk1::vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>>::
        __push_back_slow_path<cpConstraint*const&>
                  ((vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>> *)(this + 8),
                   &local_40);
      }
      else {
        *plVar1 = (long)local_40;
        *(long **)(this + 0x10) = plVar1 + 1;
      }
      uVar3 = 1;
      this[0x59] = (PhysicsJointFixed)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

