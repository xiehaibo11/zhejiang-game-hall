
/* cocos2d::Texture2D::getAlphaTextureName() const */

undefined4 __thiscall cocos2d::Texture2D::getAlphaTextureName(Texture2D *this)

{
  if (*(long *)(this + 0x80) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x80) + 0x30);
  }
  return 0;
}

