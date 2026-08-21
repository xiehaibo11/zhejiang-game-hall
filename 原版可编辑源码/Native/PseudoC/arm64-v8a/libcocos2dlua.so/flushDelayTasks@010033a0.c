
/* cocos2d::PhysicsJoint::flushDelayTasks() */

void __thiscall cocos2d::PhysicsJoint::flushDelayTasks(PhysicsJoint *this)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x20);
  plVar4 = *(long **)(this + 0x28);
  if (plVar3 != plVar4) {
    do {
      if ((long *)plVar3[4] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*(long *)plVar3[4] + 0x30))();
      plVar3 = plVar3 + 6;
                    /* catch() { ... } // from try @ 0100344c with catch @ 010033d8 */
    } while (plVar4 != plVar3);
    plVar3 = *(long **)(this + 0x20);
    plVar4 = *(long **)(this + 0x28);
joined_r0x010033e8:
    if (plVar4 != plVar3) {
      plVar1 = (long *)plVar4[-2];
      plVar4 = plVar4 + -6;
      if (plVar4 != plVar1) goto code_r0x01003414;
      pcVar2 = *(code **)(*plVar1 + 0x20);
      goto LAB_010033f8;
    }
  }
  *(long **)(this + 0x28) = plVar3;
  return;
code_r0x01003414:
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
LAB_010033f8:
    (*pcVar2)();
  }
  goto joined_r0x010033e8;
}

