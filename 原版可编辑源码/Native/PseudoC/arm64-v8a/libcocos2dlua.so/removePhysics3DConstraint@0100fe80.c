
/* cocos2d::Physics3DWorld::removePhysics3DConstraint(cocos2d::Physics3DConstraint*) */

void __thiscall
cocos2d::Physics3DWorld::removePhysics3DConstraint
          (Physics3DWorld *this,Physics3DConstraint *param_1)

{
  Physics3DRigidBody *this_00;
  
  (**(code **)(**(long **)(this + 0x60) + 0x78))
            (*(long **)(this + 0x60),*(undefined8 *)(param_1 + 0x28));
  this_00 = *(Physics3DRigidBody **)(param_1 + 0x38);
  if (*(Physics3DRigidBody **)(param_1 + 0x30) != (Physics3DRigidBody *)0x0) {
    Physics3DRigidBody::removeConstraint(*(Physics3DRigidBody **)(param_1 + 0x30),param_1);
  }
  if (this_00 != (Physics3DRigidBody *)0x0) {
    Physics3DRigidBody::removeConstraint(this_00,param_1);
    return;
  }
  return;
}

