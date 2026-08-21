
/* cocos2d::Node::schedule(void (cocos2d::Ref::*)(float), float, unsigned int, float) */

void __thiscall
cocos2d::Node::schedule
          (Node *this,_func_void_float *param_1,float param_2,uint param_3,float param_4)

{
  Scheduler::schedule(*(_func_void_float **)(this + 0x1e0),(Ref *)param_1,param_2,param_3,param_4,
                      SUB81(this,0));
  return;
}

