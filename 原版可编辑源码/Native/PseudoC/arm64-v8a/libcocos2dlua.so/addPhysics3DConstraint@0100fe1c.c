
/* cocos2d::Physics3DWorld::addPhysics3DConstraint(cocos2d::Physics3DConstraint*, bool) */

void __thiscall
cocos2d::Physics3DWorld::addPhysics3DConstraint
          (Physics3DWorld *this,Physics3DConstraint *param_1,bool param_2)

{
  if (*(Physics3DRigidBody **)(param_1 + 0x30) != (Physics3DRigidBody *)0x0) {
    Physics3DRigidBody::addConstraint(*(Physics3DRigidBody **)(param_1 + 0x30),param_1);
  }
  if (*(Physics3DRigidBody **)(param_1 + 0x38) != (Physics3DRigidBody *)0x0) {
    Physics3DRigidBody::addConstraint(*(Physics3DRigidBody **)(param_1 + 0x38),param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0100fe7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x60) + 0x70))
            (*(long **)(this + 0x60),*(undefined8 *)(param_1 + 0x28),param_2);
  return;
}

