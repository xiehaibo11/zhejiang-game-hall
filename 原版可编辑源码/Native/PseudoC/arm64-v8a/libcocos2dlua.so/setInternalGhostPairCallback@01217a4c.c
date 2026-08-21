
/* btSortedOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback*) */

void __thiscall
btSortedOverlappingPairCache::setInternalGhostPairCallback
          (btSortedOverlappingPairCache *this,btOverlappingPairCallback *param_1)

{
  *(btOverlappingPairCallback **)(this + 0x38) = param_1;
  return;
}

