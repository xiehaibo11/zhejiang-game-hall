
/* cocos2d::extension::ScrollView::setContentSize(cocos2d::Size const&) */

void cocos2d::extension::ScrollView::setContentSize(Size *param_1)

{
                    /* catch() { ... } // from try @ 00e15eb0 with catch @ 00e15f4c */
                    /* catch() { ... } // from try @ 00e15e8c with catch @ 00e15f5c */
  if (*(long **)(param_1 + 0x340) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x340) + 0x160))();
                    /* try { // try from 00e15f70 to 00f15fc7 has its CatchHandler @ 00e15f70
                       catch() { ... } // from try @ 00e15f70 with catch @ 00e15f70
                       catch() { ... } // from try @ 00e15fd0 with catch @ 00e15f70 */
    updateInset((ScrollView *)param_1);
    return;
  }
  return;
}

