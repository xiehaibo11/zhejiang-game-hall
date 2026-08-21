
/* cocos2d::ParticleBatchNode::removeAllChildrenWithCleanup(bool) */

void __thiscall
cocos2d::ParticleBatchNode::removeAllChildrenWithCleanup(ParticleBatchNode *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x180);
  for (puVar2 = *(undefined8 **)(this + 0x178); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x658))((long *)*puVar2,0);
  }
  Node::removeAllChildrenWithCleanup((Node *)this,param_1);
  TextureAtlas::removeAllQuads(*(TextureAtlas **)(this + 0x300));
  return;
}

