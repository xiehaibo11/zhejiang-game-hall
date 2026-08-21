
/* cocos2d::Skeleton3D::getRootCount() const */

long __thiscall cocos2d::Skeleton3D::getRootCount(Skeleton3D *this)

{
  return *(long *)(this + 0x48) - *(long *)(this + 0x40) >> 3;
}

