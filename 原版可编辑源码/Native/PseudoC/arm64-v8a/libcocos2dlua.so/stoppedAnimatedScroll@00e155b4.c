
/* cocos2d::extension::ScrollView::stoppedAnimatedScroll(cocos2d::Node*) */

void cocos2d::extension::ScrollView::stoppedAnimatedScroll(Node *param_1)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 00e15508 with catch @ 00e155b8 */
  Node::unschedule((_func_void_float *)param_1);
                    /* catch() { ... } // from try @ 00e154ec with catch @ 00e155d4 */
  plVar1 = *(long **)(param_1 + 0x328);
  if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00e15338 with catch @ 00e155dc
                       catch() { ... } // from try @ 00e153e0 with catch @ 00e155dc
                       catch() { ... } // from try @ 00e15418 with catch @ 00e155dc */
                    /* WARNING: Could not recover jumptable at 0x00e155f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
    return;
  }
  return;
}

