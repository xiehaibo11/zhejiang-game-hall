
/* cocos2d::TimerTargetSelector::initWithSelector(cocos2d::Scheduler*, void
   (cocos2d::Ref::*)(float), cocos2d::Ref*, float, unsigned int, float) */

undefined8
cocos2d::TimerTargetSelector::initWithSelector
          (Scheduler *param_1,_func_void_float *param_2,Ref *param_3,float param_4,uint param_5,
          float param_6)

{
  undefined8 in_x4;
  int in_w5;
  
  *(undefined4 *)(param_1 + 0x30) = 0xbf800000;
  *(_func_void_float **)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x50) = in_x4;
  *(Ref **)(param_1 + 0x58) = param_3;
  *(ulong *)(param_1 + 0x60) = (ulong)param_5;
  *(float *)(param_1 + 0x40) = param_6;
  *(float *)(param_1 + 0x44) = param_4;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(int *)(param_1 + 0x3c) = in_w5;
  param_1[0x35] = (Scheduler)(0.0 < param_6);
  param_1[0x34] = (Scheduler)(in_w5 == -2);
  return 1;
}

