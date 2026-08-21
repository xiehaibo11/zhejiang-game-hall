
/* btCollisionDispatcher::getManifoldByIndexInternal(int) */

undefined8 __thiscall
btCollisionDispatcher::getManifoldByIndexInternal(btCollisionDispatcher *this,int param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x20) + (long)param_1 * 8);
}

