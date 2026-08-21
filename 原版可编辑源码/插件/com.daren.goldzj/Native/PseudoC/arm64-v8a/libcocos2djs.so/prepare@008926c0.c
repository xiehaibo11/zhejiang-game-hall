
/* cocos2d::RenderTexture::prepare() */

void __thiscall cocos2d::RenderTexture::prepare(RenderTexture *this)

{
  glBindFramebuffer(0x8d40,*(undefined4 *)(this + 8));
  ccViewport(0,0,*(int *)(this + 0x30),*(int *)(this + 0x34));
  return;
}

