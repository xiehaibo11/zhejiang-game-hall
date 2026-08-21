
/* cocos2d::PhysicsJointDistance::createConstraints() */

void __thiscall cocos2d::PhysicsJointDistance::createConstraints(PhysicsJointDistance *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  cpConstraint *local_30;
  long local_28;
  
                    /* try { // try from 01004610 to 01104617 has its CatchHandler @ 010046e0 */
                    /* try { // try from 01004618 to 011046f3 has its CatchHandler @ 010044d4 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = (cpConstraint *)
             cpPinJointNew(*(undefined4 *)(this + 0x68),*(undefined4 *)(this + 0x6c),
                           *(undefined4 *)(this + 0x70),*(undefined4 *)(this + 0x74),
                           *(undefined8 *)(*(long *)(this + 0x38) + 0x88),
                           *(undefined8 *)(*(long *)(this + 0x40) + 0x88));
  uVar3 = 0;
  if (local_30 != (cpConstraint *)0x0) {
    plVar1 = *(long **)(this + 0x10);
    if (plVar1 == *(long **)(this + 0x18)) {
      std::__ndk1::vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>>::
      __push_back_slow_path<cpConstraint*const&>
                ((vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>> *)(this + 8),&local_30
                );
    }
    else {
      *plVar1 = (long)local_30;
      *(long **)(this + 0x10) = plVar1 + 1;
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

