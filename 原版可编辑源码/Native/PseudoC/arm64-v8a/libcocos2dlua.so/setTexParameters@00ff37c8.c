
/* cocos2d::TextureCube::setTexParameters(cocos2d::Texture2D::_TexParams const&) */

void __thiscall cocos2d::TextureCube::setTexParameters(TextureCube *this,_TexParams *param_1)

{
  GL::bindTextureN(0,*(uint *)(this + 0x30),0x8513);
  glTexParameteri(0x8513,0x2801,*(undefined4 *)param_1);
  glTexParameteri(0x8513,0x2800,*(undefined4 *)(param_1 + 4));
  glTexParameteri(0x8513,0x2802,*(undefined4 *)(param_1 + 8));
  glTexParameteri(0x8513,0x2803,*(undefined4 *)(param_1 + 0xc));
  GL::bindTextureN(0,0,0x8513);
  return;
}

