
/* btCollisionWorld::RayResultCallback::needsCollision(btBroadphaseProxy*) const */

bool __thiscall
btCollisionWorld::RayResultCallback::needsCollision
          (RayResultCallback *this,btBroadphaseProxy *param_1)

{
  if ((*(ushort *)(this + 0x1a) & *(ushort *)(param_1 + 8)) != 0) {
    return (*(ushort *)(param_1 + 10) & *(ushort *)(this + 0x18)) != 0;
  }
                    /* catch() { ... } // from try @ 01010b38 with catch @ 01010b70 */
  return false;
}

