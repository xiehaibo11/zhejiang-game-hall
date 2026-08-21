
/* cocos2d::TransitionFadeTR::onExit() */

void __thiscall cocos2d::TransitionFadeTR::onExit(TransitionFadeTR *this)

{
                    /* try { // try from 00f5ec80 to 0105ece3 has its CatchHandler @ 00f5ee58 */
  NodeGrid::setTarget(*(NodeGrid **)(this + 0x390),(Node *)0x0);
  (**(code **)(**(long **)(this + 0x390) + 0x330))();
  TransitionScene::onExit((TransitionScene *)this);
  return;
}

