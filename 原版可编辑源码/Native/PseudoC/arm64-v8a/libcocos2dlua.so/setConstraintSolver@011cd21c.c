
/* btDiscreteDynamicsWorld::setConstraintSolver(btConstraintSolver*) */

void __thiscall
btDiscreteDynamicsWorld::setConstraintSolver
          (btDiscreteDynamicsWorld *this,btConstraintSolver *param_1)

{
  if (this[0x179] != (btDiscreteDynamicsWorld)0x0) {
    btAlignedFreeInternal(*(void **)(this + 0x110));
  }
  this[0x179] = (btDiscreteDynamicsWorld)0x0;
  *(btConstraintSolver **)(this + 0x110) = param_1;
  *(btConstraintSolver **)(*(long *)(this + 0x108) + 0x10) = param_1;
  return;
}

