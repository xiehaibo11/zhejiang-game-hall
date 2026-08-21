
/* cocos2d::ui::ScrollView::onTouchMoved(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::ui::ScrollView::onTouchMoved(Touch *param_1,Event *param_2)

{
                    /* catch() { ... } // from try @ 00dbe240 with catch @ 00dbe250
                       try { // try from 00dbe250 to 00ebe43b has its CatchHandler @ 00dbd918 */
                    /* catch() { ... } // from try @ 00dbddf8 with catch @ 00dbe254 */
                    /* catch() { ... } // from try @ 00dbe01c with catch @ 00dbe258
                       catch() { ... } // from try @ 00dbe248 with catch @ 00dbe258 */
  Widget::onTouchMoved(param_1,param_2);
                    /* catch() { ... } // from try @ 00dbe0c4 with catch @ 00dbe268 */
  if (param_1[0x7b1] != (Touch)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00dbe290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x7e0))(param_1,param_2);
  return;
}

