
/* spine::SkeletonCache::SkeletonCache() */

void __thiscall spine::SkeletonCache::SkeletonCache(SkeletonCache *this)

{
  SkeletonAnimation::SkeletonAnimation((SkeletonAnimation *)this);
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  this[0x1e1] = (SkeletonCache)0x0;
  *(undefined8 *)(this + 0x208) = 0;
  *(SkeletonCache **)(this + 0x1f8) = this + 0x200;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined ***)this = &PTR__SkeletonCache_01c8fda0;
  *(undefined ***)(this + 0x10) = &PTR__SkeletonCache_01c8fe10;
  *(undefined8 *)(this + 0x1f0) = 0;
  return;
}

