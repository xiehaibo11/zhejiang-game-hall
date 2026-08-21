
/* btCollisionObject::activate(bool) const */

void __thiscall btCollisionObject::activate(btCollisionObject *this,bool param_1)

{
  if ((!param_1) && (((byte)this[0xe0] & 3) != 0)) {
    return;
  }
  if ((*(uint *)(this + 0xec) & 0xfffffffe) != 4) {
    *(undefined4 *)(this + 0xec) = 1;
  }
  *(undefined4 *)(this + 0xf0) = 0;
  return;
}

