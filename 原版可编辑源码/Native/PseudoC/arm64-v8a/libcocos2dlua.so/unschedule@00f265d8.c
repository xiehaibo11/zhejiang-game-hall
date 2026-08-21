
/* cocos2d::Node::unschedule(void (cocos2d::Ref::*)(float)) */

void cocos2d::Node::unschedule(_func_void_float *param_1)

{
  Ref *in_x1;
  ulong in_x2;
  
  if ((in_x1 == (Ref *)0x0) && (in_x2 == 0 || (in_x2 & 1) == 0)) {
    return;
  }
  Scheduler::unschedule(*(_func_void_float **)(param_1 + 0x1e0),in_x1);
  return;
}

