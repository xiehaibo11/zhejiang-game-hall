
/* btCollisionObject::setCollisionShape(btCollisionShape*) */

void __thiscall
btCollisionObject::setCollisionShape(btCollisionObject *this,btCollisionShape *param_1)

{
  *(btCollisionShape **)(this + 200) = param_1;
  *(btCollisionShape **)(this + 0xd8) = param_1;
  *(int *)(this + 0x120) = *(int *)(this + 0x120) + 1;
  return;
}

