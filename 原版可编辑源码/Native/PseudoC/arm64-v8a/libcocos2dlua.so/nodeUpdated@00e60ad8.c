
/* cocos2d::PURibbonTrail::nodeUpdated(cocos2d::Node const*) */

void cocos2d::PURibbonTrail::nodeUpdated(Node *param_1)

{
  Node *pNVar1;
  
  pNVar1 = (Node *)(**(code **)(*(long *)param_1 + 0xf0))();
  updateTrail((ulong)param_1,pNVar1);
  return;
}

