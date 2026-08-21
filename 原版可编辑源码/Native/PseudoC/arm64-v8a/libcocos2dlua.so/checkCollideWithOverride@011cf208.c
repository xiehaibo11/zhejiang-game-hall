
/* btRigidBody::checkCollideWithOverride(btCollisionObject const*) const */

undefined8 __thiscall
btRigidBody::checkCollideWithOverride(btRigidBody *this,btCollisionObject *param_1)

{
  long lVar1;
  long lVar2;
  
  if ((((*(uint *)(param_1 + 0x100) >> 1 & 1) != 0) && (param_1 != (btCollisionObject *)0x0)) &&
     (0 < *(int *)(this + 0x20c))) {
    lVar1 = 0;
    do {
      lVar2 = *(long *)(*(long *)(this + 0x218) + lVar1 * 8);
      if (*(char *)(lVar2 + 0x1c) != '\0') {
        if (*(btCollisionObject **)(lVar2 + 0x28) == param_1) {
          return 0;
        }
        if (*(btCollisionObject **)(lVar2 + 0x30) == param_1) {
          return 0;
        }
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x20c));
  }
  return 1;
}

