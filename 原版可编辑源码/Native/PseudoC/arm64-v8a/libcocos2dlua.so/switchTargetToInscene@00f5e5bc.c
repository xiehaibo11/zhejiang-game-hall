
/* cocos2d::TransitionSplitCols::switchTargetToInscene() */

void __thiscall cocos2d::TransitionSplitCols::switchTargetToInscene(TransitionSplitCols *this)

{
                    /* try { // try from 00f5e5c8 to 0105e60b has its CatchHandler @ 00f5e5c8
                       catch() { ... } // from try @ 00f5e5c8 with catch @ 00f5e5c8
                       catch() { ... } // from try @ 00f5e618 with catch @ 00f5e5c8
                       catch() { ... } // from try @ 00f5e684 with catch @ 00f5e5c8
                       catch() { ... } // from try @ 00f5e73c with catch @ 00f5e5c8 */
  NodeGrid::setTarget(*(NodeGrid **)(this + 0x390),*(Node **)(this + 0x370));
  return;
}

