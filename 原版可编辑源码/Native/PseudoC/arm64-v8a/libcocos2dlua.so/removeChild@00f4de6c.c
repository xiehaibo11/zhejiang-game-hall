
/* cocos2d::TMXLayer::removeChild(cocos2d::Node*, bool) */

void __thiscall cocos2d::TMXLayer::removeChild(TMXLayer *this,Node *param_1,bool param_2)

{
  _ccCArray *p_Var1;
  long lVar2;
  
  if (param_1 != (Node *)0x0) {
    p_Var1 = *(_ccCArray **)(this + 0x3d0);
    lVar2 = *(long *)(param_1 + 0x308);
    *(undefined4 *)(*(long *)(this + 0x3f0) + *(long *)(*(long *)(p_Var1 + 0x10) + lVar2 * 8) * 4) =
         0;
    ccCArrayRemoveValueAtIndex(p_Var1,lVar2);
    SpriteBatchNode::removeChild((SpriteBatchNode *)this,param_1,param_2);
    return;
  }
  return;
}

