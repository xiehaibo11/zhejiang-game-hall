
/* cocos2d::Node::setScheduler(cocos2d::Scheduler*) */

void __thiscall cocos2d::Node::setScheduler(Node *this,Scheduler *param_1)

{
  if (*(Scheduler **)(this + 0x1e0) != param_1) {
    Scheduler::unscheduleAllForTarget(*(Scheduler **)(this + 0x1e0),this);
    if (param_1 != (Scheduler *)0x0) {
      Ref::retain((Ref *)param_1);
    }
    if (*(Ref **)(this + 0x1e0) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x1e0));
    }
    *(Scheduler **)(this + 0x1e0) = param_1;
  }
  return;
}

