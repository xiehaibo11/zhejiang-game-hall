
/* btGhostObject::btGhostObject() */

void __thiscall btGhostObject::btGhostObject(btGhostObject *this)

{
  btCollisionObject::btCollisionObject((btCollisionObject *)this);
  *(undefined8 *)(this + 0x138) = 0;
  this[0x140] = (btGhostObject)0x1;
  *(undefined ***)this = &PTR_checkCollideWithOverride_017322e0;
  *(undefined8 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x100) = 4;
  return;
}

