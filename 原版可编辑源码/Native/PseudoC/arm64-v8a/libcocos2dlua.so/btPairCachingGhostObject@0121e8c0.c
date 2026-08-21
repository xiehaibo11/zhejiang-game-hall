
/* btPairCachingGhostObject::btPairCachingGhostObject() */

void __thiscall btPairCachingGhostObject::btPairCachingGhostObject(btPairCachingGhostObject *this)

{
  btHashedOverlappingPairCache *this_00;
  
  btCollisionObject::btCollisionObject((btCollisionObject *)this);
  *(undefined8 *)(this + 0x138) = 0;
  this[0x140] = (btPairCachingGhostObject)0x1;
  *(undefined8 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x100) = 4;
  *(undefined ***)this = &PTR_checkCollideWithOverride_01732338;
  this_00 = (btHashedOverlappingPairCache *)btAlignedAllocInternal(0x80,0x10);
  btHashedOverlappingPairCache::btHashedOverlappingPairCache(this_00);
  *(btHashedOverlappingPairCache **)(this + 0x148) = this_00;
  return;
}

