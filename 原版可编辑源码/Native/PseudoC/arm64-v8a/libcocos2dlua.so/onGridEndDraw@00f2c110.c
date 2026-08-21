
/* cocos2d::NodeGrid::onGridEndDraw() */

void __thiscall cocos2d::NodeGrid::onGridEndDraw(NodeGrid *this)

{
  Node *pNVar1;
  
  pNVar1 = *(Node **)(this + 0x300);
  if ((pNVar1 != (Node *)0x0) && (pNVar1[0x21] != (Node)0x0)) {
                    /* try { // try from 00f2c124 to 0102c12b has its CatchHandler @ 00f2c160 */
    GridBase::afterDraw(pNVar1);
    return;
  }
  return;
}

