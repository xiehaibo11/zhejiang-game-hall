
/* cocos2d::extension::ScrollView::removeChild(cocos2d::Node*, bool) */

void __thiscall
cocos2d::extension::ScrollView::removeChild(ScrollView *this,Node *param_1,bool param_2)

{
  Node *pNVar1;
  
  pNVar1 = *(Node **)(this + 0x340);
  if (pNVar1 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x00e16198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pNVar1 + 0x280))(pNVar1,param_1,param_2);
    return;
  }
  Node::removeChild((Node *)this,param_1,param_2);
  return;
}

