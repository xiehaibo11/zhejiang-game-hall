
/* spine::SkeletonCacheAnimation::getRenderOrder() const */

undefined4 __thiscall spine::SkeletonCacheAnimation::getRenderOrder(SkeletonCacheAnimation *this)

{
  if (*(long *)(this + 0x38) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x38) + 0x110);
  }
  return 0;
}

