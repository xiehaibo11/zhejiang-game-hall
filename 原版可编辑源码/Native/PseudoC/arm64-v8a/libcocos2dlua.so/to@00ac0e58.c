
/* fairygui::GTween::to(cocos2d::Color4B const&, cocos2d::Color4B const&, float) */

void fairygui::GTween::to(Color4B *param_1,Color4B *param_2,float param_3)

{
  GTweener *this;
  
  this = (GTweener *)TweenManager::createTween();
                    /* try { // try from 00ac0e78 to 00bc0e7f has its CatchHandler @ 00ac0ffc */
  GTweener::_to(this,param_1,param_2,param_3);
  return;
}

