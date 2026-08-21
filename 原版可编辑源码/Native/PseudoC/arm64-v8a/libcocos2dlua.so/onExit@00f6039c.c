
/* cocos2d::TransitionPageTurn::onExit() */

void __thiscall cocos2d::TransitionPageTurn::onExit(TransitionPageTurn *this)

{
  NodeGrid::setTarget(*(NodeGrid **)(this + 0x390),(Node *)0x0);
  NodeGrid::setTarget(*(NodeGrid **)(this + 0x390),(Node *)0x0);
  (**(code **)(**(long **)(this + 0x390) + 0x330))();
  (**(code **)(**(long **)(this + 0x388) + 0x330))();
  TransitionScene::onExit((TransitionScene *)this);
  return;
}

