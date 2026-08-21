
/* cocos2d::Material::getTechniqueCount() const */

long __thiscall cocos2d::Material::getTechniqueCount(Material *this)

{
  return *(long *)(this + 0x80) - *(long *)(this + 0x78) >> 3;
}

