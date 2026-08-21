
/* btSortedOverlappingPairCache::~btSortedOverlappingPairCache() */

void __thiscall
btSortedOverlappingPairCache::~btSortedOverlappingPairCache(btSortedOverlappingPairCache *this)

{
  *(undefined ***)this = &PTR__btSortedOverlappingPairCache_01731738;
  if ((*(void **)(this + 0x18) != (void *)0x0) && (this[0x20] != (btSortedOverlappingPairCache)0x0))
  {
    btAlignedFreeInternal(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}

