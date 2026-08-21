
/* btCollisionObject::setActivationState(int) const */

void __thiscall btCollisionObject::setActivationState(btCollisionObject *this,int param_1)

{
  if ((*(uint *)(this + 0xec) & 0xfffffffe) != 4) {
    *(int *)(this + 0xec) = param_1;
  }
  return;
}

