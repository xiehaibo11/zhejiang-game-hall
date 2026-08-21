
/* cocos2d::Node::pause() */

void __thiscall cocos2d::Node::pause(Node *this)

{
  long lVar1;
  
  Scheduler::pauseTarget(*(Scheduler **)(this + 0x1e0),this);
  (**(code **)(**(long **)(this + 0x1e8) + 0x68))(*(long **)(this + 0x1e8),this);
  lVar1 = Director::getInstance();
  EventDispatcher::pauseEventListenersForTarget(*(EventDispatcher **)(lVar1 + 0xb0),this,false);
  return;
}

