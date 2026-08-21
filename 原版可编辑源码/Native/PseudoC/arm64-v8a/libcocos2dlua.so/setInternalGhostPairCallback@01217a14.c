
/* btHashedOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback*) */

void __thiscall
btHashedOverlappingPairCache::setInternalGhostPairCallback
          (btHashedOverlappingPairCache *this,btOverlappingPairCallback *param_1)

{
  *(btOverlappingPairCallback **)(this + 0x78) = param_1;
  return;
}

