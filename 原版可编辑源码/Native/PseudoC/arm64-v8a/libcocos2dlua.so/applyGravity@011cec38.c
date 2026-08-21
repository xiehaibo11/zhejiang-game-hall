
/* btRigidBody::applyGravity() */

void __thiscall btRigidBody::applyGravity(btRigidBody *this)

{
  if (((byte)this[0xe0] & 3) != 0) {
    return;
  }
  *(float *)(this + 0x1b8) =
       *(float *)(this + 0x188) * *(float *)(this + 0x178) + *(float *)(this + 0x1b8);
  *(float *)(this + 0x1bc) =
       *(float *)(this + 0x18c) * *(float *)(this + 0x17c) + *(float *)(this + 0x1bc);
  *(float *)(this + 0x1c0) =
       *(float *)(this + 400) * *(float *)(this + 0x180) + *(float *)(this + 0x1c0);
  return;
}

