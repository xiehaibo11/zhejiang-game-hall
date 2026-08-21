
/* btGhostObject::~btGhostObject() */

void __thiscall btGhostObject::~btGhostObject(btGhostObject *this)

{
  *(undefined ***)this = &PTR_checkCollideWithOverride_017322e0;
  if (*(void **)(this + 0x138) != (void *)0x0) {
    if (this[0x140] != (btGhostObject)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x138));
    }
    *(undefined8 *)(this + 0x138) = 0;
  }
  *(undefined8 *)(this + 0x138) = 0;
  this[0x140] = (btGhostObject)0x1;
  *(undefined8 *)(this + 300) = 0;
  btCollisionObject::~btCollisionObject((btCollisionObject *)this);
  return;
}

