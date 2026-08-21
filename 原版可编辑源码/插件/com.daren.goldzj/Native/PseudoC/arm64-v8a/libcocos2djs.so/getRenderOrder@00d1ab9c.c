
/* non-virtual thunk to spine::SkeletonCacheAnimation::getRenderOrder() const */

undefined4 __thiscall spine::SkeletonCacheAnimation::getRenderOrder(SkeletonCacheAnimation *this)

{
  if (*(long *)(this + 0x28) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x28) + 0x110);
  }
  return 0;
}

