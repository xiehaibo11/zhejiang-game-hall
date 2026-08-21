
/* fairygui::GTween::shake(cocos2d::Vec2 const&, float, float) */

void fairygui::GTween::shake(Vec2 *param_1,float param_2,float param_3)

{
  GTweener *this;
  
  this = (GTweener *)TweenManager::createTween();
  GTweener::_shake(this,param_1,param_2,param_3);
  return;
}

