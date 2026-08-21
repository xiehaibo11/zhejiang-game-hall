
/* cocos2d::PhysicsJoint::initJoint() */

bool __thiscall cocos2d::PhysicsJoint::initJoint(PhysicsJoint *this)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  bVar2 = this[100] != (PhysicsJoint)0x1;
  if (this[100] != (PhysicsJoint)0x0) {
    uVar3 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar3 & 1) == 0) {
      bVar2 = false;
    }
    else {
      puVar1 = *(undefined8 **)(this + 0x10);
      for (puVar5 = *(undefined8 **)(this + 8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        cpConstraintSetMaxForce(*(undefined4 *)(this + 0x60),uVar4);
        cpConstraintSetErrorBias(0x38743a79,uVar4);
        cpSpaceAddConstraint(*(undefined8 *)(*(long *)(this + 0x48) + 0x28),uVar4);
      }
      bVar2 = true;
      this[100] = (PhysicsJoint)0x0;
    }
  }
  return bVar2;
}

