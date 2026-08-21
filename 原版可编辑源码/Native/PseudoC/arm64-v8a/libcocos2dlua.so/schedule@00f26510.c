
/* cocos2d::Node::schedule(void (cocos2d::Ref::*)(float), float) */

void cocos2d::Node::schedule(_func_void_float *param_1,float param_2)

{
  Ref *in_x1;
  uint in_w2;
  
  Scheduler::schedule(*(_func_void_float **)(param_1 + 0x1e0),in_x1,param_2,in_w2,0.0,
                      SUB81(param_1,0));
  return;
}

