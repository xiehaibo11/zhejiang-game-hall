
/* cocos2d::AtlasNode::updateOpacityModifyRGB() */

void __thiscall cocos2d::AtlasNode::updateOpacityModifyRGB(AtlasNode *this)

{
  byte bVar1;
  Texture2D *this_00;
  
  this_00 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x318));
  bVar1 = Texture2D::hasPremultipliedAlpha(this_00);
  this[800] = (AtlasNode)(bVar1 & 1);
  return;
}

