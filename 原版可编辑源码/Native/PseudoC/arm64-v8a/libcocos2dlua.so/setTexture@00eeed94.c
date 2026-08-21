
/* cocos2d::AtlasNode::setTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::AtlasNode::setTexture(AtlasNode *this,Texture2D *param_1)

{
  bool bVar1;
  byte bVar2;
  Texture2D *pTVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  TextureAtlas::setTexture(*(TextureAtlas **)(this + 0x318),param_1);
  pTVar3 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x318));
  uVar4 = Texture2D::hasPremultipliedAlpha(pTVar3);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    puVar5 = &BlendFunc::ALPHA_NON_PREMULTIPLIED;
  }
  else {
    puVar5 = (undefined8 *)&BlendFunc::ALPHA_PREMULTIPLIED;
  }
  *(undefined8 *)(this + 0x324) = *puVar5;
  (**(code **)(*(long *)this + 0x4e0))(this,!bVar1);
  pTVar3 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x318));
  bVar2 = Texture2D::hasPremultipliedAlpha(pTVar3);
  this[800] = (AtlasNode)(bVar2 & 1);
  return;
}

