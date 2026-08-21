
/* cocos2d::ParticleBatchNode::removeChild(cocos2d::Node*, bool) */

void __thiscall
cocos2d::ParticleBatchNode::removeChild(ParticleBatchNode *this,Node *param_1,bool param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  TextureAtlas *pTVar7;
  
  if (param_1 != (Node *)0x0) {
    pTVar7 = *(TextureAtlas **)(this + 0x300);
    iVar3 = *(int *)(param_1 + 0x468);
                    /* catch() { ... } // from try @ 00f2dc24 with catch @ 00f2dc60 */
    iVar2 = (**(code **)(*(long *)param_1 + 0x660))(param_1);
    TextureAtlas::removeQuadsAtIndex(pTVar7,(long)iVar3,(long)iVar2);
    pTVar7 = *(TextureAtlas **)(this + 0x300);
    lVar4 = TextureAtlas::getTotalQuads(pTVar7);
    iVar3 = (**(code **)(*(long *)param_1 + 0x660))(param_1);
    TextureAtlas::fillWithEmptyQuadsFromIndex(pTVar7,lVar4,(long)iVar3);
    (**(code **)(*(long *)param_1 + 0x658))(param_1,0);
    Node::removeChild((Node *)this,param_1,param_2);
    plVar1 = *(long **)(this + 0x180);
                    /* try { // try from 00f2dcd8 to 0102dfbb has its CatchHandler @ 00f2dcd8
                       catch() { ... } // from try @ 00f2dcd8 with catch @ 00f2dcd8
                       catch() { ... } // from try @ 00f2dfcc with catch @ 00f2dcd8 */
    if (*(long **)(this + 0x178) != plVar1) {
      iVar3 = 0;
      plVar5 = *(long **)(this + 0x178);
      do {
        plVar6 = plVar5 + 1;
        plVar5 = (long *)*plVar5;
        *(int *)(plVar5 + 0x8d) = iVar3;
        iVar2 = (**(code **)(*plVar5 + 0x660))();
        iVar3 = iVar2 + iVar3;
        plVar5 = plVar6;
      } while (plVar1 != plVar6);
    }
  }
  return;
}

