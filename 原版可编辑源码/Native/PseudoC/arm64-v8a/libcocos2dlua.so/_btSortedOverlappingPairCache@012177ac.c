
/* btSortedOverlappingPairCache::~btSortedOverlappingPairCache() */

void __thiscall
btSortedOverlappingPairCache::~btSortedOverlappingPairCache(btSortedOverlappingPairCache *this)

{
  *(undefined ***)this = &PTR__btSortedOverlappingPairCache_01731738;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    if (this[0x20] != (btSortedOverlappingPairCache)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x18));
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (btSortedOverlappingPairCache)0x1;
  *(undefined8 *)(this + 0xc) = 0;
  return;
}

