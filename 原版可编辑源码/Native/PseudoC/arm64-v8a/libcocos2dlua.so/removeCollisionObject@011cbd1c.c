
/* btDiscreteDynamicsWorld::removeCollisionObject(btCollisionObject*) */

void __thiscall
btDiscreteDynamicsWorld::removeCollisionObject
          (btDiscreteDynamicsWorld *this,btCollisionObject *param_1)

{
  if ((param_1 != (btCollisionObject *)0x0) && ((*(uint *)(param_1 + 0x100) >> 1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x011cbd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0xb8))();
    return;
  }
  btCollisionWorld::removeCollisionObject((btCollisionWorld *)this,param_1);
  return;
}

