
/* cocos2d::MeshSkin::getBoneByIndex(unsigned int) const */

undefined8 __thiscall cocos2d::MeshSkin::getBoneByIndex(MeshSkin *this,uint param_1)

{
  if ((long)(int)param_1 < *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) {
    return *(undefined8 *)(*(long *)(this + 0x28) + (ulong)param_1 * 8);
  }
  return 0;
}

