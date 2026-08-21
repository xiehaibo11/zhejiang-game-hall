
/* btCollisionDispatcher::getInternalManifoldPointer() */

undefined8 __thiscall btCollisionDispatcher::getInternalManifoldPointer(btCollisionDispatcher *this)

{
  if (*(int *)(this + 0x14) != 0) {
    return *(undefined8 *)(this + 0x20);
  }
  return 0;
}

