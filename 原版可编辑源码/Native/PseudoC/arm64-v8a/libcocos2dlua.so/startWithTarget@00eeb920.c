
/* cocos2d::ActionTween::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::ActionTween::startWithTarget(ActionTween *this,Node *param_1)

{
  ActionInterval::startWithTarget((ActionInterval *)this,param_1);
  *(float *)(this + 0x78) = *(float *)(this + 0x74) - *(float *)(this + 0x70);
  return;
}

