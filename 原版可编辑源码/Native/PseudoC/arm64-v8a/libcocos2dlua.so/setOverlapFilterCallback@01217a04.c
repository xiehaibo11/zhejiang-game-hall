
/* btHashedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback*) */

void __thiscall
btHashedOverlappingPairCache::setOverlapFilterCallback
          (btHashedOverlappingPairCache *this,btOverlapFilterCallback *param_1)

{
  *(btOverlapFilterCallback **)(this + 0x28) = param_1;
  return;
}

