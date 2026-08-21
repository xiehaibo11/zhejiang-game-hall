
/* cocos2d::AtlasNode::setTextureAtlas(cocos2d::TextureAtlas*) */

void __thiscall cocos2d::AtlasNode::setTextureAtlas(AtlasNode *this,TextureAtlas *param_1)

{
  if (param_1 != (TextureAtlas *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x318) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x318));
  }
  *(TextureAtlas **)(this + 0x318) = param_1;
  return;
}

