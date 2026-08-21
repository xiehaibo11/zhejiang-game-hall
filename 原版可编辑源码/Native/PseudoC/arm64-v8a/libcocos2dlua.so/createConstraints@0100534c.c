
/* cocos2d::PhysicsJointGroove::createConstraints() */

void __thiscall cocos2d::PhysicsJointGroove::createConstraints(PhysicsJointGroove *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  cpConstraint *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010052b4 with catch @ 0100536c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01005294 with catch @ 01005370
                        */
  local_30 = (cpConstraint *)
             cpGrooveJointNew(*(undefined4 *)(this + 0x68),*(undefined4 *)(this + 0x6c),
                              *(undefined4 *)(this + 0x70),*(undefined4 *)(this + 0x74),
                              *(undefined4 *)(this + 0x78),*(undefined4 *)(this + 0x7c),
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
                    /* catch() { ... } // from try @ 010054d8 with catch @ 010053b8 */
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

