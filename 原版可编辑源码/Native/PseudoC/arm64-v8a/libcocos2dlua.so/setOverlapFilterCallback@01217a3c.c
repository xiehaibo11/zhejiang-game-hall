
/* btSortedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback*) */

void __thiscall
btSortedOverlappingPairCache::setOverlapFilterCallback
          (btSortedOverlappingPairCache *this,btOverlapFilterCallback *param_1)

{
  *(btOverlapFilterCallback **)(this + 0x30) = param_1;
  return;
}

