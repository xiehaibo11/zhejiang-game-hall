
/* cocos2d::ParticleBatchNode::updateAllAtlasIndexes() */

void __thiscall cocos2d::ParticleBatchNode::updateAllAtlasIndexes(ParticleBatchNode *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  
  plVar1 = *(long **)(this + 0x180);
  if (*(long **)(this + 0x178) != plVar1) {
                    /* catch() { ... } // from try @ 00f2dc2c with catch @ 00f2dc00 */
    iVar5 = 0;
    plVar3 = *(long **)(this + 0x178);
    do {
      plVar4 = plVar3 + 1;
      plVar3 = (long *)*plVar3;
      *(int *)(plVar3 + 0x8d) = iVar5;
      iVar2 = (**(code **)(*plVar3 + 0x660))();
      iVar5 = iVar2 + iVar5;
      plVar3 = plVar4;
    } while (plVar1 != plVar4);
  }
                    /* try { // try from 00f2dc24 to 0102dc2b has its CatchHandler @ 00f2dc60 */
                    /* try { // try from 00f2dc2c to 0102dc7b has its CatchHandler @ 00f2dc00 */
  return;
}

