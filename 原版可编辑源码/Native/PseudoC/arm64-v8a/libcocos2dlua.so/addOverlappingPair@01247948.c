
/* btHashedSimplePairCache::addOverlappingPair(int, int) */

void __thiscall
btHashedSimplePairCache::addOverlappingPair(btHashedSimplePairCache *this,int param_1,int param_2)

{
  gAddedSimplePairs = gAddedSimplePairs + 1;
  internalAddPair(this,param_1,param_2);
  return;
}

