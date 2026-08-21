
/* cocos2d::Sprite3D::getMaterial(int) const */

void __thiscall cocos2d::Sprite3D::getMaterial(Sprite3D *this,int param_1)

{
  Mesh::getMaterial(*(Mesh **)(*(long *)(this + 0x350) + (long)param_1 * 8));
  return;
}

