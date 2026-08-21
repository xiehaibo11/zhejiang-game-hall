
/* btHashedOverlappingPairCache::~btHashedOverlappingPairCache() */

void __thiscall
btHashedOverlappingPairCache::~btHashedOverlappingPairCache(btHashedOverlappingPairCache *this)

{
  *(undefined ***)this = &PTR__btHashedOverlappingPairCache_017316a0;
  if (*(void **)(this + 0x68) != (void *)0x0) {
    if (this[0x70] != (btHashedOverlappingPairCache)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x68));
    }
    *(undefined8 *)(this + 0x68) = 0;
  }
  this[0x70] = (btHashedOverlappingPairCache)0x1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  if (*(void **)(this + 0x48) != (void *)0x0) {
    if (this[0x50] != (btHashedOverlappingPairCache)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x48));
    }
    *(undefined8 *)(this + 0x48) = 0;
  }
  this[0x50] = (btHashedOverlappingPairCache)0x1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    if (this[0x20] != (btHashedOverlappingPairCache)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x18));
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (btHashedOverlappingPairCache)0x1;
  *(undefined8 *)(this + 0xc) = 0;
  return;
}

