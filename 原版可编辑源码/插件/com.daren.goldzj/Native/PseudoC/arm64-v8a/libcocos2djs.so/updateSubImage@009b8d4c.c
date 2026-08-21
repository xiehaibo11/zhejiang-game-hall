
/* cocos2d::renderer::Texture2D::updateSubImage(cocos2d::renderer::Texture::SubImageOption const&)
    */

void __thiscall
cocos2d::renderer::Texture2D::updateSubImage(Texture2D *this,SubImageOption *param_1)

{
  glActiveTexture(0x84c0);
  glBindTexture(0xde1,*(undefined4 *)(this + 0xc));
  setSubImage(this,param_1);
  DeviceGraphics::restoreTexture(*(DeviceGraphics **)(this + 0x10),0);
  return;
}

