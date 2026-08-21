
/* cocos2d::Sprite::getDescription() const */

void cocos2d::Sprite::getDescription(void)

{
  long in_x0;
  Texture2D *this;
  ulong uVar1;
  
  if (*(int *)(in_x0 + 0x42c) == 3) {
    this = (Texture2D *)
           TextureAtlas::getTexture(*(TextureAtlas **)(*(long *)(in_x0 + 0x310) + 0x300));
  }
  else {
    this = *(Texture2D **)(in_x0 + 0x368);
  }
  uVar1 = Texture2D::getName(this);
  StringUtils::format("<Sprite | Tag = %d, TextureID = %d>",(ulong)*(uint *)(in_x0 + 0x1a0),
                      uVar1 & 0xffffffff);
  return;
}

