
/* cocos2d::extension::ScrollView::addChild(cocos2d::Node*, int, int) */

void __thiscall
cocos2d::extension::ScrollView::addChild(ScrollView *this,Node *param_1,int param_2,int param_3)

{
                    /* catch() { ... } // from try @ 00e160d8 with catch @ 00e16164 */
  if (*(Node **)(this + 0x340) != param_1) {
                    /* WARNING: Could not recover jumptable at 0x00e16170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*(Node **)(this + 0x340) + 0x218))();
    return;
  }
                    /* try { // try from 00e16178 to 00f16213 has its CatchHandler @ 00e16178
                       catch() { ... } // from try @ 00e16178 with catch @ 00e16178
                       catch() { ... } // from try @ 00e16220 with catch @ 00e16178
                       catch() { ... } // from try @ 00e162fc with catch @ 00e16178 */
  Node::addChild((Node *)this,param_1,param_2,param_3);
  return;
}

