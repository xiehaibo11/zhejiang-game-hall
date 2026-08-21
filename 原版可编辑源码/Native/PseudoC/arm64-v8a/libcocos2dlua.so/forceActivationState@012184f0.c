
/* btCollisionObject::forceActivationState(int) const */

void __thiscall btCollisionObject::forceActivationState(btCollisionObject *this,int param_1)

{
  *(int *)(this + 0xec) = param_1;
  return;
}

