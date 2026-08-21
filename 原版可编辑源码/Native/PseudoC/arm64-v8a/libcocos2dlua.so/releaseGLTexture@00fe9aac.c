
/* cocos2d::Texture2D::releaseGLTexture() */

void __thiscall cocos2d::Texture2D::releaseGLTexture(Texture2D *this)

{
  if (*(uint *)(this + 0x30) != 0) {
    GL::deleteTexture(*(uint *)(this + 0x30));
  }
  *(undefined4 *)(this + 0x30) = 0;
  return;
}

