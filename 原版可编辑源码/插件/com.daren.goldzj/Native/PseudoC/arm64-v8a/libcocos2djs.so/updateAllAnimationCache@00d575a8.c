
/* dragonBones::CCArmatureCacheDisplay::updateAllAnimationCache() */

void __thiscall
dragonBones::CCArmatureCacheDisplay::updateAllAnimationCache(CCArmatureCacheDisplay *this)

{
  ArmatureCache::resetAllAnimationData(*(ArmatureCache **)(this + 0xd8));
  return;
}

