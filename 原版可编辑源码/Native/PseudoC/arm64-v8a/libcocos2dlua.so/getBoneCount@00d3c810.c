
/* cocos2d::Skeleton3D::getBoneCount() const */

long __thiscall cocos2d::Skeleton3D::getBoneCount(Skeleton3D *this)

{
                    /* try { // try from 00d3c814 to 00e3c857 has its CatchHandler @ 00d3c6f0 */
  return *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
}

