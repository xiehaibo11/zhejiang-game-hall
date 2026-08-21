
/* btRigidBody::btRigidBody(btRigidBody::btRigidBodyConstructionInfo const&) */

void __thiscall btRigidBody::btRigidBody(btRigidBody *this,btRigidBodyConstructionInfo *param_1)

{
  btCollisionObject::btCollisionObject((btCollisionObject *)this);
  *(undefined8 *)(this + 0x218) = 0;
  this[0x220] = (btRigidBody)0x1;
  *(undefined ***)this = &PTR_checkCollideWithOverride_0172dbd0;
  *(undefined8 *)(this + 0x20c) = 0;
  setupRigidBody(this,param_1);
  return;
}

