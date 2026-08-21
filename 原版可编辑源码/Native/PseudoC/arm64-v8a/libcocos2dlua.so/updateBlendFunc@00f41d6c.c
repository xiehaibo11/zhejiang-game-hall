
/* cocos2d::SpriteBatchNode::updateBlendFunc() */

void __thiscall cocos2d::SpriteBatchNode::updateBlendFunc(SpriteBatchNode *this)

{
  bool bVar1;
  Texture2D *this_00;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
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
                    /* WARNING: Could not recover jumptable at 0x00f41dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x4e0))(this,!bVar1);
  return;
}

