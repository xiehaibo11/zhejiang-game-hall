
/* cocos2d::renderer::Texture2D::updateImage(cocos2d::renderer::Texture::ImageOption const&) */

void __thiscall cocos2d::renderer::Texture2D::updateImage(Texture2D *this,ImageOption *param_1)

{
  glActiveTexture(0x84c0);
  glBindTexture(0xde1,*(undefined4 *)(this + 0xc));
  setImage(this,param_1);
  DeviceGraphics::restoreTexture(*(DeviceGraphics **)(this + 0x10),0);
  return;
}

