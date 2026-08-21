
/* cocos2d::Texture2D::getStringForFormat() const */

undefined * __thiscall cocos2d::Texture2D::getStringForFormat(Texture2D *this)

{
  if (*(int *)(this + 0x24) - 2U < 0x13) {
    return (&PTR_s_RGBA8888_017243c8)[(int)(*(int *)(this + 0x24) - 2U)];
  }
  return (undefined *)0x0;
}

