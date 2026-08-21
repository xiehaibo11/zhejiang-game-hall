
/* cocos2d::Skeleton3D::getBoneByIndex(unsigned int) const */

undefined8 __thiscall cocos2d::Skeleton3D::getBoneByIndex(Skeleton3D *this,uint param_1)

{
  if (param_1 < (uint)((ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28)) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x28) + (ulong)param_1 * 8);
  }
  return 0;
}

