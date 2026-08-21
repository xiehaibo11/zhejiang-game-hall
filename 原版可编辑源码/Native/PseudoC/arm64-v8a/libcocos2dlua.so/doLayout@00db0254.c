
/* non-virtual thunk to cocos2d::ui::Layout::doLayout() */

void __thiscall cocos2d::ui::Layout::doLayout(Layout *this)

{
  long *plVar1;
  Layout *pLVar2;
  
                    /* try { // try from 00db0254 to 00eb025b has its CatchHandler @ 00db03a0 */
                    /* try { // try from 00db0260 to 00eb035b has its CatchHandler @ 00db03dc */
  if (this[0x2c0] != (Layout)0x0) {
    pLVar2 = this + -0x4f0;
    (**(code **)(*(long *)pLVar2 + 0x2b0))(pLVar2);
    plVar1 = (long *)(**(code **)(*(long *)pLVar2 + 0x6b8))(pLVar2);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,this);
    }
    this[0x2c0] = (Layout)0x0;
  }
  return;
}

