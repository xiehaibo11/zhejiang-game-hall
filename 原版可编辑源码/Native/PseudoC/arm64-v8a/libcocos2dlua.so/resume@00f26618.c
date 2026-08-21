
/* cocos2d::Node::resume() */

void __thiscall cocos2d::Node::resume(Node *this)

{
  long lVar1;
  
  Scheduler::resumeTarget(*(Scheduler **)(this + 0x1e0),this);
  (**(code **)(**(long **)(this + 0x1e8) + 0x70))(*(long **)(this + 0x1e8),this);
  lVar1 = Director::getInstance();
  EventDispatcher::resumeEventListenersForTarget(*(EventDispatcher **)(lVar1 + 0xb0),this,false);
  return;
}

