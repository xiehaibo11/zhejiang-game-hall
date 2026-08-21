
/* btPairCachingGhostObject::~btPairCachingGhostObject() */

void __thiscall btPairCachingGhostObject::~btPairCachingGhostObject(btPairCachingGhostObject *this)

{
  *(undefined ***)this = &PTR_checkCollideWithOverride_01732338;
  (**(code **)**(undefined8 **)(this + 0x148))();
  btAlignedFreeInternal(*(void **)(this + 0x148));
  *(undefined ***)this = &PTR_checkCollideWithOverride_017322e0;
  if (*(void **)(this + 0x138) != (void *)0x0) {
    if (this[0x140] != (btPairCachingGhostObject)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x138));
    }
    *(undefined8 *)(this + 0x138) = 0;
  }
  *(undefined8 *)(this + 0x138) = 0;
  this[0x140] = (btPairCachingGhostObject)0x1;
  *(undefined8 *)(this + 300) = 0;
  btCollisionObject::~btCollisionObject((btCollisionObject *)this);
  return;
}

