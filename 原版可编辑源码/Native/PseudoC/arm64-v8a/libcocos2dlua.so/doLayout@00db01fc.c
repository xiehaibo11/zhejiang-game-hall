
/* cocos2d::ui::Layout::doLayout() */

void __thiscall cocos2d::ui::Layout::doLayout(Layout *this)

{
  long *plVar1;
  
                    /* try { // try from 00db0204 to 00eb020b has its CatchHandler @ 00db03c0 */
                    /* try { // try from 00db020c to 00eb0253 has its CatchHandler @ 00db0134 */
  if (this[0x7b0] != (Layout)0x0) {
    (**(code **)(*(long *)this + 0x2b0))();
    plVar1 = (long *)(**(code **)(*(long *)this + 0x6b8))(this);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,this + 0x4f0);
    }
    this[0x7b0] = (Layout)0x0;
  }
  return;
}

