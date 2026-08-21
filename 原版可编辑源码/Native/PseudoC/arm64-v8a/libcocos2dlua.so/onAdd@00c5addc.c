
/* cocostudio::ComController::onAdd() */

void __thiscall cocostudio::ComController::onAdd(ComController *this)

{
  if (*(Node **)(this + 0x28) != (Node *)0x0) {
    cocos2d::Node::scheduleUpdate(*(Node **)(this + 0x28));
    return;
  }
  return;
}

