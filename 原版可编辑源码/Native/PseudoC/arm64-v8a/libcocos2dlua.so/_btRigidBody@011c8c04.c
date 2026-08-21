
/* btRigidBody::~btRigidBody() */

void __thiscall btRigidBody::~btRigidBody(btRigidBody *this)

{
  *(undefined ***)this = &PTR_checkCollideWithOverride_0172dbd0;
  if (*(void **)(this + 0x218) != (void *)0x0) {
    if (this[0x220] != (btRigidBody)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x218));
    }
    *(undefined8 *)(this + 0x218) = 0;
  }
  *(undefined8 *)(this + 0x218) = 0;
  this[0x220] = (btRigidBody)0x1;
  *(undefined8 *)(this + 0x20c) = 0;
  btCollisionObject::~btCollisionObject((btCollisionObject *)this);
  return;
}

