
/* cocos2d::TransitionTurnOffTiles::onExit() */

void __thiscall cocos2d::TransitionTurnOffTiles::onExit(TransitionTurnOffTiles *this)

{
                    /* try { // try from 00f5e02c to 0105e087 has its CatchHandler @ 00f5dffc */
  NodeGrid::setTarget(*(NodeGrid **)(this + 0x390),(Node *)0x0);
  (**(code **)(**(long **)(this + 0x390) + 0x330))();
  TransitionScene::onExit((TransitionScene *)this);
  return;
}

