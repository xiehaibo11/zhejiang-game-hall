
/* cocos2d::Node::isScheduled(void (cocos2d::Ref::*)(float)) const */

void __thiscall cocos2d::Node::isScheduled(Node *this,_func_void_float *param_1)

{
  Scheduler::isScheduled(*(_func_void_float **)(this + 0x1e0),(Ref *)param_1);
  return;
}

