
/* fairygui::GTween::to(cocos2d::Vec2 const&, cocos2d::Vec2 const&, float) */

void fairygui::GTween::to(Vec2 *param_1,Vec2 *param_2,float param_3)

{
  GTweener *this;
  
                    /* try { // try from 00ac0dac to 00bc0df7 has its CatchHandler @ 00ac0634 */
  this = (GTweener *)TweenManager::createTween();
  GTweener::_to(this,param_1,param_2,param_3);
  return;
}

