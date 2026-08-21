
/* cocos2d::SpriteBatchNode::setTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::SpriteBatchNode::setTexture(SpriteBatchNode *this,Texture2D *param_1)

{
  bool bVar1;
  Texture2D *this_00;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  TextureAtlas::setTexture(*(TextureAtlas **)(this + 0x300),param_1);
  this_00 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x300));
  uVar2 = Texture2D::hasPremultipliedAlpha(this_00);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    puVar3 = &BlendFunc::ALPHA_NON_PREMULTIPLIED;
    lVar4 = *(long *)this;
  }
  else {
    puVar3 = (undefined8 *)&BlendFunc::ALPHA_PREMULTIPLIED;
    lVar4 = *(long *)this;
  }
  *(undefined8 *)(this + 0x308) = *puVar3;
                    /* WARNING: Could not recover jumptable at 0x00f42e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x4e0))(this,!bVar1);
  return;
}

