
/* cocos2d::ParticleBatchNode::insertChild(cocos2d::ParticleSystem*, int) */

void __thiscall
cocos2d::ParticleBatchNode::insertChild(ParticleBatchNode *this,ParticleSystem *param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  TextureAtlas *pTVar8;
  
  *(int *)(param_1 + 0x468) = param_2;
  lVar4 = TextureAtlas::getTotalQuads(*(TextureAtlas **)(this + 0x300));
  iVar2 = (**(code **)(*(long *)param_1 + 0x660))(param_1);
  lVar5 = TextureAtlas::getCapacity(*(TextureAtlas **)(this + 0x300));
  if (lVar5 < lVar4 + iVar2) {
    lVar4 = TextureAtlas::getTotalQuads(*(TextureAtlas **)(this + 0x300));
    iVar2 = (**(code **)(*(long *)param_1 + 0x660))(param_1);
    TextureAtlas::resizeCapacity(*(TextureAtlas **)(this + 0x300),lVar4 + iVar2);
    pTVar8 = *(TextureAtlas **)(this + 0x300);
    lVar4 = TextureAtlas::getCapacity(pTVar8);
    iVar2 = (**(code **)(*(long *)param_1 + 0x660))(param_1);
    iVar3 = (**(code **)(*(long *)param_1 + 0x660))(param_1);
    TextureAtlas::fillWithEmptyQuadsFromIndex(pTVar8,lVar4 - iVar2,(long)iVar3);
  }
  iVar2 = *(int *)(param_1 + 0x468);
  iVar3 = (**(code **)(*(long *)param_1 + 0x660))(param_1);
  lVar4 = TextureAtlas::getTotalQuads(*(TextureAtlas **)(this + 0x300));
  if (lVar4 != (long)iVar2 + (long)iVar3) {
    pTVar8 = *(TextureAtlas **)(this + 0x300);
    iVar2 = (**(code **)(*(long *)param_1 + 0x660))(param_1);
    TextureAtlas::moveQuadsFromIndex(pTVar8,(long)param_2,(long)(iVar2 + param_2));
  }
  pTVar8 = *(TextureAtlas **)(this + 0x300);
  iVar2 = (**(code **)(*(long *)param_1 + 0x660))(param_1);
  TextureAtlas::increaseTotalQuadsWith(pTVar8,(long)iVar2);
  plVar1 = *(long **)(this + 0x180);
  if (*(long **)(this + 0x178) != plVar1) {
    iVar2 = 0;
    plVar6 = *(long **)(this + 0x178);
    do {
      plVar7 = plVar6 + 1;
      plVar6 = (long *)*plVar6;
      *(int *)(plVar6 + 0x8d) = iVar2;
                    /* catch() { ... } // from try @ 00f2d640 with catch @ 00f2d7b8 */
      iVar3 = (**(code **)(*plVar6 + 0x660))();
      iVar2 = iVar3 + iVar2;
      plVar6 = plVar7;
    } while (plVar1 != plVar7);
  }
                    /* try { // try from 00f2d7d4 to 0102d8b3 has its CatchHandler @ 00f2d7d4
                       catch() { ... } // from try @ 00f2d7d4 with catch @ 00f2d7d4
                       catch() { ... } // from try @ 00f2d8d0 with catch @ 00f2d7d4 */
  return;
}

