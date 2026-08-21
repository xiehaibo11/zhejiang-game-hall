
/* cocos2d::SpriteBatchNode::removeAllChildrenWithCleanup(bool) */

void __thiscall
cocos2d::SpriteBatchNode::removeAllChildrenWithCleanup(SpriteBatchNode *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x390);
  for (puVar1 = *(undefined8 **)(this + 0x388); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x538))((long *)*puVar1,0);
  }
  Node::removeAllChildrenWithCleanup((Node *)this,param_1);
  *(undefined8 *)(this + 0x390) = *(undefined8 *)(this + 0x388);
  if (*(TextureAtlas **)(this + 0x300) == (TextureAtlas *)0x0) {
    return;
  }
  TextureAtlas::removeAllQuads(*(TextureAtlas **)(this + 0x300));
  return;
}

