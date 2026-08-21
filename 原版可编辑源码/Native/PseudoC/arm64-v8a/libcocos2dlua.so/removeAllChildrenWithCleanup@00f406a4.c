
/* cocos2d::Sprite::removeAllChildrenWithCleanup(bool) */

void __thiscall cocos2d::Sprite::removeAllChildrenWithCleanup(Sprite *this,bool param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  Sprite *pSVar4;
  
                    /* try { // try from 00f406b0 to 010406bf has its CatchHandler @ 00f4081c */
                    /* try { // try from 00f406c0 to 010406cb has its CatchHandler @ 00f40820 */
  if (*(int *)(this + 0x42c) == 3) {
    plVar1 = *(long **)(this + 0x178);
    plVar2 = *(long **)(this + 0x180);
    if (plVar1 != plVar2) {
                    /* try { // try from 00f406e4 to 010406eb has its CatchHandler @ 00f40804 */
      lVar3 = *plVar1;
      while( true ) {
        if ((lVar3 != 0) &&
           (pSVar4 = (Sprite *)__dynamic_cast(lVar3,&Node::typeinfo,&typeinfo,0),
           pSVar4 != (Sprite *)0x0)) {
          SpriteBatchNode::removeSpriteFromAtlas(*(SpriteBatchNode **)(this + 0x310),pSVar4);
        }
        plVar1 = plVar1 + 1;
        if (plVar2 == plVar1) break;
        lVar3 = *plVar1;
      }
    }
  }
                    /* try { // try from 00f40728 to 0104075f has its CatchHandler @ 00f40868 */
  Node::removeAllChildrenWithCleanup((Node *)this,param_1);
  return;
}

