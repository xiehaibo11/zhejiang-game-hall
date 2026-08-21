
/* cocos2d::extension::ScrollView::performedAnimatedScroll(float) */

void cocos2d::extension::ScrollView::performedAnimatedScroll(float param_1)

{
  _func_void_float *in_x0;
  
  if (in_x0[0x334] != (_func_void_float)0x0) {
                    /* catch() { ... } // from try @ 00e15808 with catch @ 00e15614 */
    Node::unschedule(in_x0);
    return;
  }
  if (*(long **)(in_x0 + 0x328) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e15634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x328) + 0x10))();
    return;
  }
  return;
}

