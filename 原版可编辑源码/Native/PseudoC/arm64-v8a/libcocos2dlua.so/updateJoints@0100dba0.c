
/* cocos2d::PhysicsWorld::updateJoints() */

void __thiscall cocos2d::PhysicsWorld::updateJoints(PhysicsWorld *this)

{
  undefined8 *puVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  PhysicsJoint *this_00;
  undefined8 *puVar6;
  undefined8 *puVar7;
  PhysicsWorld *pPVar8;
  
  cVar2 = cpSpaceIsLocked(*(undefined8 *)(this + 0x28));
  if (cVar2 == '\0') {
    puVar7 = *(undefined8 **)(this + 0xc0);
    puVar6 = *(undefined8 **)(this + 200);
    if (puVar7 != puVar6) {
      do {
        this_00 = (PhysicsJoint *)*puVar7;
        *(PhysicsWorld **)(this_00 + 0x48) = this;
        uVar4 = PhysicsJoint::initJoint(this_00);
        if ((uVar4 & 1) == 0) {
          if (this_00 != (PhysicsJoint *)0x0) {
            (**(code **)(*(long *)this_00 + 8))(this_00);
          }
        }
        else {
                    /* try { // try from 0100dbe0 to 0110dbe7 has its CatchHandler @ 0100dc44 */
          plVar3 = operator_new(0x18);
          plVar3[1] = (long)(this + 0x50);
          plVar3[2] = (long)this_00;
                    /* try { // try from 0100dbe8 to 0110dc57 has its CatchHandler @ 0100da48 */
          lVar5 = *(long *)(this + 0x50);
          *plVar3 = lVar5;
          *(long **)(lVar5 + 8) = plVar3;
          *(long **)(this + 0x50) = plVar3;
          *(long *)(this + 0x60) = *(long *)(this + 0x60) + 1;
        }
        puVar7 = puVar7 + 1;
      } while (puVar6 != puVar7);
      puVar7 = *(undefined8 **)(this + 0xc0);
    }
    puVar6 = *(undefined8 **)(this + 0xd8);
    puVar1 = *(undefined8 **)(this + 0xe0);
                    /* catch() { ... } // from try @ 0100dbe0 with catch @ 0100dc44 */
    *(undefined8 **)(this + 200) = puVar7;
    if (puVar6 != puVar1) {
      do {
        puVar7 = puVar6 + 1;
                    /* try { // try from 0100dc58 to 0110dcaf has its CatchHandler @ 0100dc58
                       catch() { ... } // from try @ 0100dc58 with catch @ 0100dc58
                       catch() { ... } // from try @ 0100dce8 with catch @ 0100dc58 */
        (**(code **)(*(long *)this + 0x88))(this,*puVar6);
        puVar6 = puVar7;
      } while (puVar1 != puVar7);
      puVar6 = *(undefined8 **)(this + 0xd8);
    }
    pPVar8 = *(PhysicsWorld **)(this + 0x58);
    *(undefined8 **)(this + 0xe0) = puVar6;
    for (; this + 0x50 != pPVar8; pPVar8 = *(PhysicsWorld **)(pPVar8 + 8)) {
      PhysicsJoint::flushDelayTasks(*(PhysicsJoint **)(pPVar8 + 0x10));
    }
  }
  return;
}

