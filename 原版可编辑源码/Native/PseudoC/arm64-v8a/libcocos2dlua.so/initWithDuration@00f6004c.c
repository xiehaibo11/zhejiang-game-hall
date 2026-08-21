
/* cocos2d::TransitionPageTurn::initWithDuration(float, cocos2d::Scene*, bool) */

undefined8 __thiscall
cocos2d::TransitionPageTurn::initWithDuration
          (TransitionPageTurn *this,float param_1,Scene *param_2,bool param_3)

{
  this[0x398] = (TransitionPageTurn)param_3;
  TransitionScene::initWithDuration((TransitionScene *)this,param_1,param_2);
  return 1;
}

