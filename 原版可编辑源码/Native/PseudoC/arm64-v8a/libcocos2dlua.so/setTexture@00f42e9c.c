
/* non-virtual thunk to cocos2d::SpriteBatchNode::setTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::SpriteBatchNode::setTexture(SpriteBatchNode *this,Texture2D *param_1)

{
  bool bVar1;
  Texture2D *this_00;
  ulong uVar2;
  undefined8 *puVar3;
  
  TextureAtlas::setTexture(*(TextureAtlas **)(this + 8),param_1);
  this_00 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 8));
  uVar2 = Texture2D::hasPremultipliedAlpha(this_00);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    puVar3 = &BlendFunc::ALPHA_NON_PREMULTIPLIED;
  }
  else {
    puVar3 = (undefined8 *)&BlendFunc::ALPHA_PREMULTIPLIED;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f42fa0 with catch @ 00f42eec
                       catch(type#1 @ 00000000) { ... } // from try @ 00f43064 with catch @ 00f42eec
                        */
  *(undefined8 *)(this + 0x10) = *puVar3;
                    /* WARNING: Could not recover jumptable at 0x00f42f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x2f8) + 0x4e0))(this + -0x2f8,!bVar1);
  return;
}

