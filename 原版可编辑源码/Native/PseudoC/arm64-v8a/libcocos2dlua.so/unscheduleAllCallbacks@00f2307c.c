
/* cocos2d::Node::unscheduleAllCallbacks() */

void __thiscall cocos2d::Node::unscheduleAllCallbacks(Node *this)

{
  Scheduler::unscheduleAllForTarget(*(Scheduler **)(this + 0x1e0),this);
  return;
}

