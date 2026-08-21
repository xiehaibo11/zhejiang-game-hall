
/* cocos2d::ParallaxNode::removeChild(cocos2d::Node*, bool) */

void __thiscall cocos2d::ParallaxNode::removeChild(ParallaxNode *this,Node *param_1,bool param_2)

{
  _ccArray *p_Var1;
  long lVar2;
  
  p_Var1 = *(_ccArray **)(this + 0x300);
  if (0 < *(long *)p_Var1) {
    lVar2 = 0;
    do {
                    /* try { // try from 00f2ca08 to 0102ca0f has its CatchHandler @ 00f2cccc */
                    /* try { // try from 00f2ca10 to 0102cb13 has its CatchHandler @ 00f2c744 */
      if (*(Node **)(*(long *)(*(long *)(p_Var1 + 0x10) + lVar2 * 8) + 0x38) == param_1) {
        ccArrayRemoveObjectAtIndex(p_Var1,lVar2,true);
        break;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(long *)p_Var1);
  }
  Node::removeChild((Node *)this,param_1,param_2);
  return;
}

