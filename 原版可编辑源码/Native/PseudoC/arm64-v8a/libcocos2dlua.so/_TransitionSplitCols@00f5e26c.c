
/* non-virtual thunk to cocos2d::TransitionSplitCols::~TransitionSplitCols() */

void __thiscall cocos2d::TransitionSplitCols::~TransitionSplitCols(TransitionSplitCols *this)

{
                    /* try { // try from 00f5e270 to 0105e2bb has its CatchHandler @ 00f5e270
                       catch() { ... } // from try @ 00f5e270 with catch @ 00f5e270
                       catch() { ... } // from try @ 00f5e304 with catch @ 00f5e270 */
  TransitionSplitRows::~TransitionSplitRows((TransitionSplitRows *)(this + -0x388));
  operator_delete((TransitionSplitRows *)(this + -0x388));
  return;
}

