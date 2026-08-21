
/* cocostudio::ComController::onEnter() */

void __thiscall cocostudio::ComController::onEnter(ComController *this)

{
  if (*(Node **)(this + 0x28) != (Node *)0x0) {
    cocos2d::Node::scheduleUpdate(*(Node **)(this + 0x28));
    return;
  }
  return;
}

