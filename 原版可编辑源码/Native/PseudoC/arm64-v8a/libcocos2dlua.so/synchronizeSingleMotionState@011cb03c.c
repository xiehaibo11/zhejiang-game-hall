
/* btDiscreteDynamicsWorld::synchronizeSingleMotionState(btRigidBody*) */

void __thiscall
btDiscreteDynamicsWorld::synchronizeSingleMotionState
          (btDiscreteDynamicsWorld *this,btRigidBody *param_1)

{
  float fVar1;
  btTransform abStack_60 [64];
  
  if ((*(long *)(param_1 + 0x200) != 0) && (((byte)param_1[0xe0] & 3) == 0)) {
    if ((this[0x1a4] == (btDiscreteDynamicsWorld)0x0) || (*(float *)(this + 0x174) == 0.0)) {
      fVar1 = *(float *)(this + 0x170) * *(float *)(param_1 + 0x110);
    }
    else {
      fVar1 = *(float *)(this + 0x170) - *(float *)(this + 0x174);
    }
    btTransformUtil::integrateTransform
              ((btTransform *)(param_1 + 0x48),(btVector3 *)(param_1 + 0x88),
               (btVector3 *)(param_1 + 0x98),fVar1,abStack_60);
    (**(code **)(**(long **)(param_1 + 0x200) + 0x18))(*(long **)(param_1 + 0x200),abStack_60);
  }
  return;
}

