
/* btCollisionWorld::ConvexResultCallback::needsCollision(btBroadphaseProxy*) const */

bool __thiscall
btCollisionWorld::ConvexResultCallback::needsCollision
          (ConvexResultCallback *this,btBroadphaseProxy *param_1)

{
  if ((*(ushort *)(this + 0xe) & *(ushort *)(param_1 + 8)) != 0) {
    return (*(ushort *)(param_1 + 10) & *(ushort *)(this + 0xc)) != 0;
  }
  return false;
}

