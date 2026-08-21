
/* cocos2d::Bone3D::getChildBoneCount() const */

long __thiscall cocos2d::Bone3D::getChildBoneCount(Bone3D *this)

{
  return *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
}

