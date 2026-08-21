
/* cocos2d::TransitionSplitCols::onExit() */

void __thiscall cocos2d::TransitionSplitCols::onExit(TransitionSplitCols *this)

{
                    /* try { // try from 00f5e618 to 0105e677 has its CatchHandler @ 00f5e5c8 */
  NodeGrid::setTarget(*(NodeGrid **)(this + 0x390),(Node *)0x0);
  (**(code **)(**(long **)(this + 0x390) + 0x330))();
  TransitionScene::onExit((TransitionScene *)this);
  return;
}

