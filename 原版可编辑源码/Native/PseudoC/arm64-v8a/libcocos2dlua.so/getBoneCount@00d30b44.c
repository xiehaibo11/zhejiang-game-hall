
/* cocos2d::MeshSkin::getBoneCount() const */

long __thiscall cocos2d::MeshSkin::getBoneCount(MeshSkin *this)

{
  return *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
}

