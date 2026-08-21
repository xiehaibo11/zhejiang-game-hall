
/* cocos2d::MeshSkin::getMatrixPaletteSize() const */

long __thiscall cocos2d::MeshSkin::getMatrixPaletteSize(MeshSkin *this)

{
  return (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 2) +
         (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3);
}

