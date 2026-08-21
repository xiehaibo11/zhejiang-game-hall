
/* cocos2d::extension::ScrollView::stopAnimatedContentOffset() */

void __thiscall cocos2d::extension::ScrollView::stopAnimatedContentOffset(ScrollView *this)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 00e15430 with catch @ 00e15564 */
  Node::stopAction((Action *)this);
                    /* catch() { ... } // from try @ 00e153f8 with catch @ 00e15568 */
  Ref::release(*(Ref **)(this + 0x460));
  *(undefined8 *)(this + 0x460) = 0;
                    /* catch() { ... } // from try @ 00e15494 with catch @ 00e15574 */
                    /* catch() { ... } // from try @ 00e15480 with catch @ 00e15584 */
  Node::unschedule((_func_void_float *)this);
                    /* catch() { ... } // from try @ 00e1538c with catch @ 00e15588 */
  plVar1 = *(long **)(this + 0x328);
  if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00e15350 with catch @ 00e15598 */
                    /* WARNING: Could not recover jumptable at 0x00e155a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00e15374 with catch @ 00e155a4 */
    (**(code **)(*plVar1 + 0x10))(plVar1,this);
    return;
  }
  return;
}

