
/* non-virtual thunk to
   cocos2d::TransitionShrinkGrow::easeActionWithAction(cocos2d::ActionInterval*) */

void __thiscall
cocos2d::TransitionShrinkGrow::easeActionWithAction
          (TransitionShrinkGrow *this,ActionInterval *param_1)

{
  EaseOut::create(param_1,2.0);
  return;
}

