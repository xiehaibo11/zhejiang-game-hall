
/* cocos2d::ParticleBatchNode::disableParticle(int) */

void __thiscall cocos2d::ParticleBatchNode::disableParticle(ParticleBatchNode *this,int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = TextureAtlas::getQuads(*(TextureAtlas **)(this + 0x300));
  puVar2 = (undefined8 *)(lVar1 + (long)param_1 * 0x60);
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  return;
}

