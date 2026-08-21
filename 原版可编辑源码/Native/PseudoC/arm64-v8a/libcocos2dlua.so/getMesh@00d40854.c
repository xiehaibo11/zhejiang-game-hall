
/* cocos2d::Sprite3D::getMesh() const */

undefined8 __thiscall cocos2d::Sprite3D::getMesh(Sprite3D *this)

{
  if (*(undefined8 **)(this + 0x350) != *(undefined8 **)(this + 0x358)) {
    return **(undefined8 **)(this + 0x350);
  }
  return 0;
}

